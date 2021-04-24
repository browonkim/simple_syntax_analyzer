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

"auto"			{ strcat(totalstr, " auto"); fprintf(output," %s \t\t shift auto\n", totalstr);  count(); return(AUTO); }
"break"			{ strcat(totalstr, " break"); fprintf(output," %s \t\t shift break\n", totalstr);  count(); return(BREAK); }
"case"			{ strcat(totalstr, " case");  fprintf(output," %s \t\t shift case\n", totalstr);  count(); return(CASE); }
"char"			{ strcat(totalstr, " char");  fprintf(output," %s \t\t shift char\n", totalstr);  count(); return(CHAR); }
"const"			{ strcat(totalstr, " const");  fprintf(output," %s \t\t shift const\n", totalstr);  count(); return(CONST); }
"continue"		{ strcat(totalstr, " continue");  fprintf(output," %s \t\t shift continue\n", totalstr);  count(); return(CONTINUE); }
"default"		{ strcat(totalstr, " default");  fprintf(output," %s \t\t shift default\n", totalstr);  count(); return(DEFAULT); }
"do"			{ strcat(totalstr, " do");  fprintf(output," %s \t\t shift do\n", totalstr);  count(); return(DO); }
"double"		{ strcat(totalstr, " double");  fprintf(output," %s \t\t shift double\n", totalstr);  count(); return(DOUBLE); }
"else"			{ strcat(totalstr, " else");  fprintf(output," %s \t\t shift else\n", totalstr);  count(); return(ELSE); }
"enum"			{ strcat(totalstr, " enum");  fprintf(output," %s \t\t shift enum\n", totalstr);  count(); return(ENUM); }
"extern"		{ strcat(totalstr, " extern");  fprintf(output," %s \t\t shift extern\n", totalstr);  count(); return(EXTERN); }
"float"			{ strcat(totalstr, " float");  fprintf(output," %s \t\t shift float\n", totalstr);  count(); return(FLOAT); }
"for"			{ strcat(totalstr, " for");  fprintf(output," %s \t\t shift for\n", totalstr);  count(); return(FOR); }
"goto"			{ strcat(totalstr, " goto");  fprintf(output," %s \t\t shift goto\n", totalstr);  count(); return(GOTO); }
"if"			{ strcat(totalstr, " if");  fprintf(output," %s \t\t shift if\n", totalstr); count(); return(IF); }
"int"			{ strcat(totalstr, " int");  fprintf(output," %s \t\t shift int\n", totalstr); count(); return(INT); }
"long"			{ strcat(totalstr, " long");  fprintf(output," %s \t\t shift long\n", totalstr); count(); return(LONG); }
"register"		{ strcat(totalstr, " register");  fprintf(output," %s \t\t shift register\n", totalstr); count(); return(REGISTER); }
"return"		{ strcat(totalstr, " return");  fprintf(output," %s \t\t shift return\n", totalstr); count(); return(RETURN); }
"short"			{ strcat(totalstr, " short");  fprintf(output," %s \t\t shift short\n", totalstr); count(); return(SHORT); }
"signed"		{ strcat(totalstr, " signed");  fprintf(output," %s \t\t shift signed\n", totalstr); count(); return(SIGNED); }
"sizeof"		{ strcat(totalstr, " sizeof");  fprintf(output," %s \t\t shift sizeof\n", totalstr); count(); return(SIZEOF); }
"static"		{ strcat(totalstr, " static");  fprintf(output," %s \t\t shift static\n", totalstr); count(); return(STATIC); }
"struct"		{ strcat(totalstr, " struct");  fprintf(output," %s \t\t shift struct\n", totalstr); count(); return(STRUCT); }
"switch"		{ strcat(totalstr, " switch");  fprintf(output," %s \t\t shift switch\n", totalstr); count(); return(SWITCH); }
"typedef"		{ strcat(totalstr, " typedef");  fprintf(output," %s \t\t shift typedef\n", totalstr); count(); return(TYPEDEF); }
"union"			{ strcat(totalstr, " union");  fprintf(output," %s \t\t shift union\n", totalstr); count(); return(UNION); }
"unsigned"		{ strcat(totalstr, " unsigned");  fprintf(output," %s \t\t shift unsigned\n", totalstr); count(); return(UNSIGNED); }
"void"			{ strcat(totalstr, " void");  fprintf(output," %s \t\t shift void\n", totalstr); count(); return(VOID); }
"volatile"		{ strcat(totalstr, " volatile");  fprintf(output," %s \t\t shift volatile\n", totalstr); count(); return(VOLATILE); }
"while"			{ strcat(totalstr, " while");  fprintf(output," %s \t\t shift while\n", totalstr); count(); return(WHILE); }

{L}({L}|{D})*		{strcat(totalstr, " "); strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (identifier) \n", totalstr, yytext); count(); return(IDENTIFIER); }

0[xX]{H}+{IS}?		{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count(); return(CONSTANT); }
0{D}+{IS}?		{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count(); return(CONSTANT); }
{D}+{IS}?		{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count();  return(CONSTANT); }
L?'(\\.|[^\\'])+'	{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count(); return(CONSTANT); }

{D}+{E}{FS}?		{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output," %s \t\t shift %s (constant) \n", totalstr, yytext); count(); return(STRING_LITERAL); }

"..."			{strcat(totalstr, " ");strcat(totalstr, yytext); (output,"%s \t\t shift ... \n", totalstr); count(); return(ELLIPSIS); }
">>="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t shift >>= \n", totalstr); count(); return(RIGHT_ASSIGN); }
"<<="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift <<= \n", totalstr); count(); return(LEFT_ASSIGN); }
"+="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift += \n", totalstr); count(); return(ADD_ASSIGN); }
"-="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift -= \n", totalstr); count(); return(SUB_ASSIGN); }
"*="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift *= \n", totalstr); count(); return(MUL_ASSIGN); }
"/="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift /= \n", totalstr); count(); return(DIV_ASSIGN); }
"%="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift %= \n", totalstr); count(); return(MOD_ASSIGN); }
"&="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift &= \n", totalstr); count(); return(AND_ASSIGN); }
"^="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift ^= \n", totalstr); count(); return(XOR_ASSIGN); }
"|="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift |= \n", totalstr); count(); return(OR_ASSIGN); }
">>"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift >> \n", totalstr); count(); return(RIGHT_OP); }
"<<"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift << \n", totalstr); count(); return(LEFT_OP); }
"++"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift ++ \n", totalstr); count(); return(INC_OP); }
"--"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift -- \n", totalstr); count(); return(DEC_OP); }
"->"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift -> \n", totalstr); count(); return(PTR_OP); }
"&&"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift && \n", totalstr); count(); return(AND_OP); }
"||"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift || \n", totalstr); count(); return(OR_OP); }
"<="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift <= \n", totalstr); count(); return(LE_OP); }
">="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift >= \n", totalstr); count(); return(GE_OP); }
"=="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift == \n", totalstr); count(); return(EQ_OP); }
"!="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift != \n", totalstr); count(); return(NE_OP); }
";"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift ; \t line terminate \n", totalstr); strcpy(totalstr, ""); count(); return(';'); }
("{"|"<%")		{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift { \t line terminate \n", totalstr); strcpy(totalstr, ""); count(); return('{'); }
("}"|"%>")		{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift } \t line terminate \n", totalstr); strcpy(totalstr, ""); count(); return('}'); }
","			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift , \n", totalstr); count(); return(','); }
":"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift : \n", totalstr); count(); return(':'); }
"="			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift = \n", totalstr); count(); return('='); }
"("			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift ( \n", totalstr); count(); return('('); }
")"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift ) \n", totalstr); count(); return(')'); }
("["|"<:")		{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift [ \n", totalstr); count(); return('['); }
("]"|":>")		{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift ] \n", totalstr); count(); return(']'); }
"."			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift . \n", totalstr); count(); return('.'); }
"&"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift & \n", totalstr); count(); return('&'); }
"!"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift ! \n", totalstr); count(); return('!'); }
"~"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift ~ \n", totalstr); count(); return('~'); }
"-"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift - \n", totalstr); count(); return('-'); }
"+"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift + \n", totalstr); count(); return('+'); }
"*"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift * \n", totalstr); count(); return('*'); }
"/"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift / \n", totalstr); count(); return('/'); }
"%"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift % \n", totalstr); count(); return('%'); }
"<"			{strcat(totalstr, " ");strcat(totalstr, yytext);  fprintf(output,"%s \t\t  shift < \n", totalstr); count(); return('<'); }
">"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift > \n", totalstr); count(); return('>'); }
"^"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift ^ \n", totalstr); count(); return('^'); }
"|"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift | \n", totalstr); count(); return('|'); }
"?"			{strcat(totalstr, " ");strcat(totalstr, yytext); fprintf(output,"%s \t\t  shift ? \n", totalstr); count(); return('?'); }

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

