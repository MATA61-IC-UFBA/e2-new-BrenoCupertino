/* main.c */

#include <stdio.h>
#include "token.h"

extern int yylex();
extern char *yytext;

int main()
{
    token_t token = -1;
    while(token != EOL) {
        token=yylex();
        if(token == ERROR) {
            printf("Error: %d\n", token);
        } else {
            if (token == NUMBER) {
                printf("constante decimal: %s\n", yytext);
            } else {
                printf("código do token: %d\n", token);
            }
        }
    }
}