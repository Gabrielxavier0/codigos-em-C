#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	float vendas[5],total=0 , maiorVenda=0;
	int i;
	for(i=0; i<5; i++){
		printf("Digite o valor da %iª venda de seu farmacêutico\n",i+1);
		scanf("%f",&vendas[i]);		
		total = total + vendas[i];
		if(vendas[i] > maiorVenda){
			maiorVenda = vendas[i];
		}
	}
	printf("o valor total das vendas foram de %.2f$ reais \n",total);
	printf("a maior venda dos cinco farmas foi a de valor %.2f$ reais\n",maiorVenda);
}

