#include <stdio.h>
#include <locale.h>
 main(){
    float valortot, valord;
    setlocale(LC_ALL,"Portuguese");
    printf("porfavor digite o valor total de sua compra para que podemos calcular o seu desconto \n");
    scanf("%f",valortot);
    valord = valortot -(valortot * 15 / 100);
    printf("o valor do seu desconto e de : %f\n",valord);
}