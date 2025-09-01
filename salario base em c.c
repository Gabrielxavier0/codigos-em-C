#include <stdio.h>
main(){
    float salarioB , qtdeHoras, valorHora;
    printf("por favor digite a quantide de horas trabalhadas \n");
    scanf("%f",&qtdeHoras);
    printf("Digite o valor de cada hora trabalada \n");
    scanf("%f", &valorHora);
    salarioB = qtdeHoras * valorHora;
    printf("o valor do seu salario final e de : %f\n",salarioB);

}