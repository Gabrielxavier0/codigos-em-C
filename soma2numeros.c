#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int numero1, numero2, resultado;
    printf("por favor digite o primeiro numero a ser somado\n");
    scanf("%d", &numero1);
    printf("por favor digite o segundo numero a ser somado\n");
    scanf("%d", &numero2);
    resultado = numero1 + numero2;
    printf("o resultado da soma entre %d e %d é igual a %d\n", numero1, numero2, resultado);
    return 0;
}
