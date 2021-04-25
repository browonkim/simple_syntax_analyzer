%{
#include <stdio.h>
#include <string.h>
void yyerror(char * s);
extern int yylval;
extern char yytext[];
extern FILE * yyin;
FILE * output;
char mystr[200];
char totalstr[500];
%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%start translation_unit
%%

primary_expression
	: IDENTIFIER {fprintf(output, "%s\t\treduce primary_expression -> identifier \n", totalstr);}
	| CONSTANT {fprintf(output, "%s\t\treduce primary_expression -> constant \n", totalstr);}
	| STRING_LITERAL {fprintf(output, "%s\t\treduce primary_expression -> string literal \n", totalstr);}
	| '(' expression ')' {fprintf(output, "%s\t\treduce primary_expression -> (expression) \n", totalstr);}
	;

postfix_expression
	: primary_expression {fprintf(output, "%s\t\treduce postfix_expression -> primary_expression \n", totalstr);}
	| postfix_expression '[' expression ']' {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expreesion [expression] \n", totalstr);}
	| postfix_expression '(' ')' {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression() \n", totalstr);}
	| postfix_expression '(' argument_expression_list ')' {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression(argument_expression_list)\n", totalstr);}
	| postfix_expression '.' IDENTIFIER {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression.identifier\n", totalstr);}
	| postfix_expression PTR_OP IDENTIFIER {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression->identifier\n", totalstr);}
	| postfix_expression INC_OP {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression++\n", totalstr);}
	| postfix_expression DEC_OP {fprintf(output, "%s\t\treduce postfix_expression -> postfix_expression--\n", totalstr);}
	;

argument_expression_list
	: assignment_expression {fprintf(output, "%s\t\treduce argument_expression_list -> assignment_expression\n", totalstr);}
	| argument_expression_list ',' assignment_expression {fprintf(output, "%s\t\treduce argument_expression_list -> argument_expression_list, assignment_expression\n", totalstr);}
	;

unary_expression
	: postfix_expression {fprintf(output, "%s\t\treduce unary_expression -> postfix_expression\n", totalstr);}
	| INC_OP unary_expression {fprintf(output, "%s\t\treduce unary_expression -> ++unary_expression\n", totalstr);}
	| DEC_OP unary_expression {fprintf(output, "%s\t\treduce unary_expression -> --unary_expression\n", totalstr);}
	| unary_operator cast_expression {fprintf(output, "%s\t\treduce unary_expression -> unary_operator cast_expression \n", totalstr);}
	| SIZEOF unary_expression {fprintf(output, "%s\t\treduce unary_expression -> sizeof unary_expression\n", totalstr);}
	| SIZEOF '(' type_name ')' {fprintf(output, "%s\t\treduce unary_expression -> sizeof(type_name)\n", totalstr);}
	;

unary_operator
	: '&' {fprintf(output, "%s\t\treduce unary_operator -> &\n", totalstr);}
	| '*' {fprintf(output, "%s\t\treduce unary_operator -> *\n", totalstr);}
	| '+' {fprintf(output, "%s\t\treduce unary_operator -> +\n", totalstr);}
	| '-' {fprintf(output, "%s\t\treduce unary_operator -> -\n", totalstr);}
	| '~' {fprintf(output, "%s\t\treduce unary_operator -> ~\n", totalstr);}
	| '!' {fprintf(output, "%s\t\treduce unary_operator -> !\n", totalstr);}
	;

cast_expression
	: unary_expression {fprintf(output, "%s\t\treduce cast_expression -> unary_expression\n", totalstr);}
	| '(' type_name ')' cast_expression {fprintf(output, "%s\t\treduce cast_expression -> (type_name)cast_expression\n", totalstr);}
	;

multiplicative_expression
	: cast_expression {fprintf(output, "%s\t\treduce multiplicative_expression -> cast_expression\n", totalstr);}
	| multiplicative_expression '*' cast_expression {fprintf(output, "%s\t\treduce multiplicative_expression -> multiplicative_expression * cast_expression\n", totalstr);}
	| multiplicative_expression '/' cast_expression {fprintf(output, "%s\t\treduce multiplicative_expression -> multiplicative_expression / cast_expression\n", totalstr);}
	| multiplicative_expression '%' cast_expression {fprintf(output, "%s\t\treduce multiplicative_expression % cast_expression\n", totalstr);}
	;

additive_expression
	: multiplicative_expression {fprintf(output, "%s\t\treduce additive_expression -> multiplicative_expression\n", totalstr);}
	| additive_expression '+' multiplicative_expression {fprintf(output, "%s\t\treduce additive_expression -> additive_expression + multiplicative_expression\n", totalstr);}
	| additive_expression '-' multiplicative_expression {fprintf(output, "%s\t\treduce additive_expression -> addtive_expression - multiplicative_expression\n", totalstr);}
	;

shift_expression
	: additive_expression {fprintf(output, "%s\t\treduce shift_expression -> additive_expression\n", totalstr);}
	| shift_expression LEFT_OP additive_expression {fprintf(output, "%s\t\treduce shift_expression -> shift_expression << additive_expression\n", totalstr);}
	| shift_expression RIGHT_OP additive_expression {fprintf(output, "%s\t\treduce shift_expression -> shift_expression >> additive_expression\n", totalstr);}
	;

relational_expression
	: shift_expression {fprintf(output, "%s\t\treduce relational_expression -> shift_expression\n", totalstr);}
	| relational_expression '<' shift_expression {fprintf(output, "%s\t\treduce relational_expression < shift_expression\n", totalstr);}
	| relational_expression '>' shift_expression {fprintf(output, "%s\t\treduce relational_expression > shift_expression\n", totalstr);}
	| relational_expression LE_OP shift_expression {fprintf(output, "%s\t\treduce relational_expression <= shift_expression\n", totalstr);}
	| relational_expression GE_OP shift_expression {fprintf(output, "%s\t\treduce relational_expression >= shift_expression\n", totalstr);}
	;

equality_expression
	: relational_expression {fprintf(output, "%s\t\treduce equality_expression -> relational_expression\n", totalstr);}
	| equality_expression EQ_OP relational_expression {fprintf(output, "%s\t\treduce equality_epression -> equality_expression == relational_expression\n", totalstr);}
	| equality_expression NE_OP relational_expression {fprintf(output, "%s\t\treduce equality_expression -> equality_expression != relational_expression\n", totalstr);}
	;

and_expression
	: equality_expression {fprintf(output, "%s\t\treduce and_expression -> equality_expression\n", totalstr);}
	| and_expression '&' equality_expression {fprintf(output, "%s\t\treduce and_expression -> and_expression & equality_expression\n", totalstr);}
	;

exclusive_or_expression
	: and_expression {fprintf(output, "%s\t\treduce exclusive_or_expression -> and_expression\n", totalstr);}
	| exclusive_or_expression '^' and_expression {fprintf(output, "%s\t\treduce exclusive_or_expression ^ and_expression\n", totalstr);}
	;

inclusive_or_expression
	: exclusive_or_expression {fprintf(output, "%s\t\treduce inclusive_or_expression -> exclusive_or_expression\n", totalstr);}
	| inclusive_or_expression '|' exclusive_or_expression {fprintf(output, "%s\t\treduce inclusive_or_expression|exclusive_or_expression\n", totalstr);}
	;

logical_and_expression
	: inclusive_or_expression {fprintf(output, "%s\t\treduce logical_and_expression -> inclusive_or_expression\n", totalstr);}
	| logical_and_expression AND_OP inclusive_or_expression {fprintf(output, "%s\t\tlogical_and_expression -> logical_and_expression && inclusive_or_expression\n", totalstr);}
	;

logical_or_expression
	: logical_and_expression {fprintf(output, "%s\t\treduce logical_or_expression -> logical_and_expression\n", totalstr);}
	| logical_or_expression OR_OP logical_and_expression {fprintf(output, "%s\t\treduce logical_or_expression -> logical_or_expression || logical_and_expression\n", totalstr);}
	;

conditional_expression
	: logical_or_expression {fprintf(output, "%s\t\treduce conditional_expression -> logical_or_expression\n", totalstr);}
	| logical_or_expression '?' expression ':' conditional_expression {fprintf(output, "%s\t\treduce conditional_expression -> logical_or_expression ? expression : conditional_expression\t\t\n", totalstr);}
	;

assignment_expression
	: conditional_expression {fprintf(output, "%s\t\treduce assignment_expression -> conditional_expression \n", totalstr);}
	| unary_expression assignment_operator assignment_expression {fprintf(output, "%s\t\treduce assignment_expression -> unary_expression assignment_operator assignment_expression\n", totalstr);}
	;

assignment_operator
	: '=' {fprintf(output, "%s\t\t reduce assignment_operator -> =\n", totalstr);}
	| MUL_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> *=\n", totalstr);}
	| DIV_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> /=\n", totalstr);}
	| MOD_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> %=\n", totalstr);}
	| ADD_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> +=\n", totalstr);}
	| SUB_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> -=\n", totalstr);}
	| LEFT_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> <<=\n", totalstr);}
	| RIGHT_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> >>=\n", totalstr);}
	| AND_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> &=\n", totalstr);}
	| XOR_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> ^=\n", totalstr);}
	| OR_ASSIGN {fprintf(output, "%s\t\t reduce assignment_operator -> |=\n", totalstr);}
	;

expression
	: assignment_expression {fprintf(output, "%s\t\treduce expression -> assignment_expression\n", totalstr);}
	| expression ',' assignment_expression {fprintf(output, "%s\t\treduce expression -> expression, assignement_expression\n", totalstr);}
	;

constant_expression
	: conditional_expression {fprintf(output, "%s\t\treduce constant_expression -> conditional_expression\n", totalstr);}
	;

declaration
	: declaration_specifiers ';' {fprintf(output, "%s\t\treduce declaration -> declaration_specifiers;\n", totalstr); strcpy(totalstr, "");}
	| declaration_specifiers init_declarator_list ';' {fprintf(output, "%s\t\treduce declaration -> declaration_specifiers init_declaratior_list;\n", totalstr); strcpy(totalstr, "");}
	;

declaration_specifiers
	: storage_class_specifier {fprintf(output, "%s\t\treduce declaration_specifiers -> stroage_class_specifier\n", totalstr);}
	| storage_class_specifier declaration_specifiers {fprintf(output, "%s\t\treduce declaration_specifiers -> storage_class_specifier declaration_specifiers\n", totalstr);}
	| type_specifier {fprintf(output, "%s\t\treduce declaration_specifiers -> type_specifier\n", totalstr);}
	| type_specifier declaration_specifiers {fprintf(output, "%s\t\treduce declaration_specifiers -> type_specifier declaration_specifiers \n", totalstr);}
	| type_qualifier {fprintf(output, "%s\t\treduce declaration_specifiers -> type_qualifier \n", totalstr);}
	| type_qualifier declaration_specifiers {fprintf(output, "%s\t\treduce declaration_specifiers -> type_qualifier declaration_specifiers\n", totalstr);}
	;

init_declarator_list
	: init_declarator {fprintf(output, "%s\t\treduce init_declarator_list -> init_declarator\n", totalstr);}
	| init_declarator_list ',' init_declarator {fprintf(output, "%s\t\treduce init_declarator_list -> init_declarator_list, init_declarator\n", totalstr);}
	;

init_declarator
	: declarator {fprintf(output, "%s\t\treduce init_declarator -> declarator\n", totalstr);}
	| declarator '=' initializer {fprintf(output, "%s\t\treduce init_declarator -> declarator = initializer\n", totalstr);}
	;

storage_class_specifier
	: TYPEDEF {fprintf(output, "%s\t\treduce \n", totalstr);}
	| EXTERN {fprintf(output, "%s\t\treduce \n", totalstr);}
	| STATIC {fprintf(output, "%s\t\treduce \n", totalstr);}
	| AUTO {fprintf(output, "%s\t\treduce \n", totalstr);}
	| REGISTER {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

type_specifier
	: VOID {fprintf(output, "%s\t\treduce type_specifier -> void\n", totalstr);}
	| CHAR {fprintf(output, "%s\t\treduce type_specifier -> char\n", totalstr);}
	| SHORT {fprintf(output, "%s\t\treduce type_specifier -> short\n", totalstr);}
	| INT {fprintf(output, "%s\t\treduce type_specifier -> int\n", totalstr);}
	| LONG {fprintf(output, "%s\t\treduce type_specifier -> long\n", totalstr);}
	| FLOAT {fprintf(output, "%s\t\treduce type_specifier -> float\n", totalstr);}
	| DOUBLE {fprintf(output, "%s\t\treduce type_specifier -> double\n", totalstr);}
	| SIGNED {fprintf(output, "%s\t\treduce type_specifier -> signed\n", totalstr);}
	| UNSIGNED {fprintf(output, "%s\t\treduce type_specifier -> unsigned\n", totalstr);}
	| struct_or_union_specifier {fprintf(output, "%s\t\treduce type_specifier -> struct_or_union_specifier\n", totalstr);}
	| enum_specifier {fprintf(output, "%s\t\treduce type_specifier -> enum_specifier\n", totalstr);}
	| TYPE_NAME {fprintf(output, "%s\t\treduce type_specifier -> TYPE_NAME*\n", totalstr);}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| struct_or_union '{' struct_declaration_list '}' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| struct_or_union IDENTIFIER {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

struct_or_union
	: STRUCT {fprintf(output, "%s\t\treduce \n", totalstr);}
	| UNION {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

struct_declaration_list
	: struct_declaration {fprintf(output, "%s\t\treduce \n", totalstr);}
	| struct_declaration_list struct_declaration {fprintf(output, "%s\t\treduce \n"), totalstr;}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';' {fprintf(output, "%s\t\treduce \n"); strcpy(totalstr, "");}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {fprintf(output, "%s\t\treduce \n", totalstr, totalstr);}
	| type_specifier {fprintf(output, "%s\t\treduce \n", totalstr);}
	| type_qualifier specifier_qualifier_list {fprintf(output, "%s\t\treduce \n", totalstr);}
	| type_qualifier {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

struct_declarator_list
	: struct_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	| struct_declarator_list ',' struct_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

struct_declarator
	: declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	| ':' constant_expression {fprintf(output, "%s\t\treduce \n", totalstr);}
	| declarator ':' constant_expression {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

enum_specifier
	: ENUM '{' enumerator_list '}' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| ENUM IDENTIFIER '{' enumerator_list '}' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| ENUM IDENTIFIER {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

enumerator_list
	: enumerator {fprintf(output, "%s\t\treduce \n", totalstr);}
	| enumerator_list ',' enumerator {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

enumerator
	: IDENTIFIER {fprintf(output, "%s\t\treduce \n", totalstr);}
	| IDENTIFIER '=' constant_expression {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

type_qualifier
	: CONST {fprintf(output, "%s\t\treduce \n", totalstr);}
	| VOLATILE {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

declarator
	: pointer direct_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

direct_declarator
	: IDENTIFIER {fprintf(output, "%s\t\treduce \n", totalstr);}
	| '(' declarator ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_declarator '[' constant_expression ']' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_declarator '[' ']' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_declarator '(' parameter_type_list ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_declarator '(' identifier_list ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_declarator '(' ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

pointer
	: '*' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| '*' type_qualifier_list {fprintf(output, "%s\t\treduce \n", totalstr);}
	| '*' pointer {fprintf(output, "%s\t\treduce \n", totalstr);}
	| '*' type_qualifier_list pointer {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

type_qualifier_list
	: type_qualifier {fprintf(output, "%s\t\treduce \n", totalstr);}
	| type_qualifier_list type_qualifier {fprintf(output, "%s\t\treduce \n", totalstr);}
	;


parameter_type_list
	: parameter_list {fprintf(output, "%s\t\treduce \n", totalstr);}
	| parameter_list ',' ELLIPSIS {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

parameter_list
	: parameter_declaration {fprintf(output, "%s\t\treduce \n", totalstr);}
	| parameter_list ',' parameter_declaration {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

parameter_declaration
	: declaration_specifiers declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	| declaration_specifiers abstract_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	| declaration_specifiers {fprintf(output, "%s\t\treduce \n, totalstr");}
	;

identifier_list
	: IDENTIFIER {fprintf(output, "%s\t\treduce \n", totalstr);}
	| identifier_list ',' IDENTIFIER {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

type_name 
	: specifier_qualifier_list {fprintf(output, "%s\t\treduce \n", totalstr);}
	| specifier_qualifier_list abstract_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

abstract_declarator
	: pointer {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_abstract_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	| pointer direct_abstract_declarator {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| '[' ']' {fprintf(output, "%s\t\t\n", totalstr);}
	| '[' constant_expression ']' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_abstract_declarator '[' ']' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_abstract_declarator '[' constant_expression ']' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| '(' ')' {fprintf(output, "%s\t\t\n", totalstr);}
	| '(' parameter_type_list ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_abstract_declarator '(' ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	| direct_abstract_declarator '(' parameter_type_list ')' {fprintf(output, "%s\t\treduce \n", totalstr);}
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';' { strcpy(totalstr,"");}
	| expression ';' { strcpy(totalstr,"");}
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';' { strcpy(totalstr,"");}
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';' { strcpy(totalstr,"");}
	| CONTINUE ';' { strcpy(totalstr,"");}
	| BREAK ';' { strcpy(totalstr,"");}
	| RETURN ';' { strcpy(totalstr,"");}
	| RETURN expression ';' { strcpy(totalstr,"");}
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char * s)
{
	fflush(stdout);
	fprintf(stderr,"%s\n",s);
}

int main(int argc, char** argv){
	if(argc != 2){
		printf("Usage: ./<executable file> <inputFile>\n");
		exit(1);
	}
	yyin = fopen(argv[1],"r");
    if(yyin == NULL){
		printf("!!Input File Open Failed!!\n");
		return -1;
	}
	char filename[100] = "";
	strcat(filename, argv[1]);
	strcat(filename, "_B735137.output");
	output = fopen(filename,"w");
	if(output == NULL){
		printf("!!Output File open Failed!!\n");
		return -2;
	}
	yyparse();
}