<h2>Programming Language Theory강의 시간에 Yacc 와 Lex를 사용해서 C Parser를 만들었습니다.</h2>

Lex란 : lexical Analyzer Generator입니다. 즉 어휘 분석기를 만들어주는 프로그램입니다. <br>
어휘분석기란 어떤 연속된 문장들을 넣었을 때, 그 문장들에서 사전에 명시해 둔 Token들을 추출해주는 모듈 혹은 프로그램입니다. <br>
C에서 토큰들, 즉 어떤 Keyword 들을 추출하는 작업을 lex_grammar.l 파일을 통해 명시해 줬습니다. <br>
<hr>
Parser Generator란 Parser (구분 분석기) 를 만들어주는 프로그램입니다. <br>
구문에 대한 명시, 즉 문법의 명세는 ANSI C를 기반으로 작성했습니다. 이 파일은 Parsing_rule.y 파일에 명시해줬습니다. <br>
