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
	: IDENTIFIER {fprintf(output, "reduce primary_expression -> IDENTIFIER \n");}
	| CONSTANT {fprintf(output, "reduce primary_expression -> CONSTANT \n");}
	| STRING_LITERAL {fprintf(output, "reduce primary_expression -> STRING_LITERAL \n");}
	| '(' expression ')' {fprintf(output, "reduce primary_expression -> ( expression ) -> \n");}
	;

postfix_expression
	: primary_expression {fprintf(output, "reduce postfix_expression -> primary_expression \n");}
	| postfix_expression '[' expression ']' {fprintf(output, "\n");}
	| postfix_expression '(' ')' {fprintf(output, "\n");}
	| postfix_expression '(' argument_expression_list ')' {fprintf(output, "\n");}
	| postfix_expression '.' IDENTIFIER {fprintf(output, "\n");}
	| postfix_expression PTR_OP IDENTIFIER {fprintf(output, "\n");}
	| postfix_expression INC_OP {fprintf(output, "\n");}
	| postfix_expression DEC_OP {fprintf(output, "\n");}
	;

argument_expression_list
	: assignment_expression {fprintf(output, "\n");}
	| argument_expression_list ',' assignment_expression {fprintf(output, "\n");}
	;

unary_expression
	: postfix_expression {fprintf(output, "\n");}
	| INC_OP unary_expression {fprintf(output, "\n");}
	| DEC_OP unary_expression {fprintf(output, "\n");}
	| unary_operator cast_expression {fprintf(output, "\n");}
	| SIZEOF unary_expression {fprintf(output, "\n");}
	| SIZEOF '(' type_name ')' {fprintf(output, "\n");}
	;

unary_operator
	: '&' {fprintf(output, "\n");}
	| '*' {fprintf(output, "\n");}
	| '+' {fprintf(output, "\n");}
	| '-' {fprintf(output, "\n");}
	| '~' {fprintf(output, "\n");}
	| '!' {fprintf(output, "\n");}
	;

cast_expression
	: unary_expression {fprintf(output, "\n");}
	| '(' type_name ')' cast_expression {fprintf(output, "\n");}
	;

multiplicative_expression
	: cast_expression {fprintf(output, "\n");}
	| multiplicative_expression '*' cast_expression {fprintf(output, "\n");}
	| multiplicative_expression '/' cast_expression {fprintf(output, "\n");}
	| multiplicative_expression '%' cast_expression {fprintf(output, "\n");}
	;

additive_expression
	: multiplicative_expression {fprintf(output, "\n");}
	| additive_expression '+' multiplicative_expression {fprintf(output, "\n");}
	| additive_expression '-' multiplicative_expression {fprintf(output, "\n");}
	;

shift_expression
	: additive_expression {fprintf(output, "\n");}
	| shift_expression LEFT_OP additive_expression {fprintf(output, "\n");}
	| shift_expression RIGHT_OP additive_expression {fprintf(output, "\n");}
	;

relational_expression
	: shift_expression {fprintf(output, "\n");}
	| relational_expression '<' shift_expression {fprintf(output, "\n");}
	| relational_expression '>' shift_expression {fprintf(output, "\n");}
	| relational_expression LE_OP shift_expression {fprintf(output, "\n");}
	| relational_expression GE_OP shift_expression {fprintf(output, "\n");}
	;

equality_expression
	: relational_expression {fprintf(output, "\n");}
	| equality_expression EQ_OP relational_expression {fprintf(output, "\n");}
	| equality_expression NE_OP relational_expression {fprintf(output, "\n");}
	;

and_expression
	: equality_expression {fprintf(output, "\n");}
	| and_expression '&' equality_expression {fprintf(output, "\n");}
	;

exclusive_or_expression
	: and_expression {fprintf(output, "\n");}
	| exclusive_or_expression '^' and_expression {fprintf(output, "\n");}
	;

inclusive_or_expression
	: exclusive_or_expression {fprintf(output, "\n");}
	| inclusive_or_expression '|' exclusive_or_expression {fprintf(output, "\n");}
	;

logical_and_expression
	: inclusive_or_expression {fprintf(output, "\n");}
	| logical_and_expression AND_OP inclusive_or_expression {fprintf(output, "\n");}
	;

logical_or_expression
	: logical_and_expression {fprintf(output, "\n");}
	| logical_or_expression OR_OP logical_and_expression {fprintf(output, "\n");}
	;

conditional_expression
	: logical_or_expression {fprintf(output, "\n");}
	| logical_or_expression '?' expression ':' conditional_expression {fprintf(output, "\n");}
	;

assignment_expression
	: conditional_expression {fprintf(output, "\n");}
	| unary_expression assignment_operator assignment_expression {fprintf(output, "\n");}
	;

assignment_operator
	: '=' {fprintf(output, "\n");}
	| MUL_ASSIGN {fprintf(output, "\n");}
	| DIV_ASSIGN {fprintf(output, "\n");}
	| MOD_ASSIGN {fprintf(output, "\n");}
	| ADD_ASSIGN {fprintf(output, "\n");}
	| SUB_ASSIGN {fprintf(output, "\n");}
	| LEFT_ASSIGN {fprintf(output, "\n");}
	| RIGHT_ASSIGN {fprintf(output, "\n");}
	| AND_ASSIGN {fprintf(output, "\n");}
	| XOR_ASSIGN {fprintf(output, "\n");}
	| OR_ASSIGN {fprintf(output, "\n");}
	;

expression
	: assignment_expression {fprintf(output, "\n");}
	| expression ',' assignment_expression {fprintf(output, "\n");}
	;

constant_expression
	: conditional_expression {fprintf(output, "\n");}
	;

declaration
	: declaration_specifiers ';' {fprintf(output, "\n");}
	| declaration_specifiers init_declarator_list ';' {fprintf(output, "\n");}
	;

declaration_specifiers
	: storage_class_specifier {fprintf(output, "\n");}
	| storage_class_specifier declaration_specifiers {fprintf(output, "\n");}
	| type_specifier {fprintf(output, "\n");}
	| type_specifier declaration_specifiers {fprintf(output, "\n");}
	| type_qualifier {fprintf(output, "\n");}
	| type_qualifier declaration_specifiers {fprintf(output, "\n");}
	;

init_declarator_list
	: init_declarator {fprintf(output, "\n");}
	| init_declarator_list ',' init_declarator {fprintf(output, "\n");}
	;

init_declarator
	: declarator {fprintf(output, "\n");}
	| declarator '=' initializer {fprintf(output, "\n");}
	;

storage_class_specifier
	: TYPEDEF {fprintf(output, "\n");}
	| EXTERN {fprintf(output, "\n");}
	| STATIC {fprintf(output, "\n");}
	| AUTO {fprintf(output, "\n");}
	| REGISTER {fprintf(output, "\n");}
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER 
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
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
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
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