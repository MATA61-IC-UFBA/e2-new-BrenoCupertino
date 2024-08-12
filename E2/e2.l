/* recognize tokens for the calculator */

%option noyywrap yylineno

%{
#include "token.h"
%}

%%
"+"     { return PLUS ; }
"-"     { return MINUS; }
"*"     { return TIMES; }
"/"     { return DIV; }
[0-9]+  { return NUMBER; }
[ \t]   { }
"\n"    {return EOL; }
.       { return ERROR; }
%%