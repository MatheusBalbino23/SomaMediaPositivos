#include<stdio.h>

int main(){
	
	int x, soma, cont;	
	double media;
	
	soma = 0;
	cont = 0;
	do{
		printf("Digite um numero: ");
		scanf("%i", &x);	
		if(x >= 0){
			soma = soma + x;
			cont = cont + 1;	
		}	
	}while(x >= 0);
	
	media = (double)soma / cont;
	printf("A somatoria dos numeros positivos = %i\n", soma);
	printf("A media dos numeros positivos = %.2lf\n", media);
	
	return 0;
}

