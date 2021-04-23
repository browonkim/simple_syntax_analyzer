D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "y.tab.h"
#include <string.h>

extern FILE * output;
extern char mystr[];
extern char totalstr[];
void count();
%}

%%
"/*"			{ comment(); }

"auto"			{ fprintf(output," shift auto \n");  count(); return(AUTO); }
"break"			{ fprintf(output," shift break \n");  count(); return(BREAK); }
"case"			{ fprintf(output," shift case \n");  count(); return(CASE); }
"char"			{ fprintf(output," shift char \n");  count(); return(CHAR); }
"const"			{ fprintf(output," shift const \n");  count(); return(CONST); }
"continue"		{ fprintf(output," shift continue \n");  count(); return(CONTINUE); }
"default"		{ fprintf(output," shift default \n");  count(); return(DEFAULT); }
"do"			{ fprintf(output," shift do \n");  count(); return(DO); }
"double"		{ fprintf(output," shift double \n");  count(); return(DOUBLE); }
"else"			{ fprintf(output," shift else \n");  count(); return(ELSE); }
"enum"			{ fprintf(output," shift enum \n");  count(); return(ENUM); }
"extern"		{ fprintf(output," shift extern \n");  count(); return(EXTERN); }
"float"			{ fprintf(output," shift float \n");  count(); return(FLOAT); }
"for"			{ fprintf(output," shift for \n");  count(); return(FOR); }
"goto"			{ fprintf(output," shift goto \n");  count(); return(GOTO); }
"if"			{ fprintf(output," shift if \n"); count(); return(IF); }
"int"			{ fprintf(output," shift int \n"); count(); return(INT); }
"long"			{ fprintf(output," shift long \n"); count(); return(LONG); }
"register"		{ fprintf(output," shift register \n");count(); return(REGISTER); }
"return"		{ fprintf(output," shift return \n"); count(); return(RETURN); }
"short"			{ fprintf(output," shift short \n"); count(); return(SHORT); }
"signed"		{ fprintf(output," shift signed \n"); count(); return(SIGNED); }
"sizeof"		{ fprintf(output," shift sizeof \n"); count(); return(SIZEOF); }
"static"		{ fprintf(output," shift static \n"); count(); return(STATIC); }
"struct"		{ fprintf(output," shift struct \n"); count(); return(STRUCT); }
"switch"		{ fprintf(output," shift switch \n"); count(); return(SWITCH); }
"typedef"		{ fprintf(output," shift typedef \n"); count(); return(TYPEDEF); }
"union"			{ fprintf(output," shift union \n"); count(); return(UNION); }
"unsigned"		{ fprintf(output," shift unsigned \n"); count(); return(UNSIGNED); }
"void"			{ fprintf(output," shift void \n"); count(); return(VOID); }
"volatile"		{ fprintf(output," shift volatile \n"); count(); return(VOLATILE); }
"while"			{ fprintf(output," shift while \n"); count(); return(WHILE); }

{L}({L}|{D})*		{strcpy(mystr, yytext); fprintf(output," shift %s // %s is IDENTIFIER \n", mystr, mystr); count(); return(IDENTIFIER); }

0[xX]{H}+{IS}?		{strcpy(mystr, yytext); fprintf(output," shift %s // %s is CONSTANT \n", mystr, mystr); count(); return(CONSTANT); }
0{D}+{IS}?		{strcpy(mystr, yytext); fprintf(output," shift %s // %s is CONSTANT \n", mystr, mystr); count(); return(CONSTANT); }
{D}+{IS}?		{strcpy(mystr, yytext); fprintf(output," shift %s // %s is CONSTANT \n", mystr, mystr); count();  return(CONSTANT); }
L?'(\\.|[^\\'])+'	{strcpy(mystr, yytext); fprintf(output," shift %s // %s is CONSTANT \n", mystr, mystr); count(); return(CONSTANT); }

{D}+{E}{FS}?		{strcpy(mystr, yytext); fprintf(output," shift %s // %s is CONSTANT \n", mystr, mystr); count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{strcpy(mystr, yytext); fprintf(output," shift %s // %s is CONSTANT \n", mystr, mystr); count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{strcpy(mystr, yytext); fprintf(output," shift %s // %s is CONSTANT \n", mystr, mystr); count(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ strcpy(mystr, yytext); fprintf(output," shift %s // %s is STRING_LITERAL \n", mystr, mystr); count(); return(STRING_LITERAL); }

"..."			{fprintf(output," shift ... \n"); count(); return(ELLIPSIS); }
">>="			{fprintf(output," shift >>= \n"); count(); return(RIGHT_ASSIGN); }
"<<="			{fprintf(output," shift <<= \n"); count(); return(LEFT_ASSIGN); }
"+="			{fprintf(output," shift += \n"); count(); return(ADD_ASSIGN); }
"-="			{fprintf(output," shift -= \n"); count(); return(SUB_ASSIGN); }
"*="			{fprintf(output," shift *= \n"); count(); return(MUL_ASSIGN); }
"/="			{fprintf(output," shift /= \n"); count(); return(DIV_ASSIGN); }
"%="			{fprintf(output," shift %= \n"); count(); return(MOD_ASSIGN); }
"&="			{fprintf(output," shift &= \n"); count(); return(AND_ASSIGN); }
"^="			{fprintf(output," shift ^= \n"); count(); return(XOR_ASSIGN); }
"|="			{fprintf(output," shift |= \n"); count(); return(OR_ASSIGN); }
">>"			{fprintf(output," shift >> \n"); count(); return(RIGHT_OP); }
"<<"			{fprintf(output," shift << \n"); count(); return(LEFT_OP); }
"++"			{fprintf(output," shift ++ \n"); count(); return(INC_OP); }
"--"			{fprintf(output," shift -- \n"); count(); return(DEC_OP); }
"->"			{fprintf(output," shift -> \n"); count(); return(PTR_OP); }
"&&"			{fprintf(output," shift && \n"); count(); return(AND_OP); }
"||"			{fprintf(output," shift || \n"); count(); return(OR_OP); }
"<="			{fprintf(output," shift <= \n"); count(); return(LE_OP); }
">="			{fprintf(output," shift >= \n"); count(); return(GE_OP); }
"=="			{fprintf(output," shift == \n"); count(); return(EQ_OP); }
"!="			{fprintf(output," shift != \n"); count(); return(NE_OP); }
";"			{ count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }
"^"			{ count(); return('^'); }
"|"			{ count(); return('|'); }
"?"			{ count(); return('?'); }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}

