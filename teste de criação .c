#include <stdio.h>
#include <locale.h>
main(){
    setelocale(LC_ALL,"portuguese");
    char nome[10];
    printf("digite seu nome por favor \n");
    scanf("%s", &nome);
    printf("ola bom dia %s e muito bom ver voce em nosso sistema por favor digite sua senha de asseço \n",nome );
}