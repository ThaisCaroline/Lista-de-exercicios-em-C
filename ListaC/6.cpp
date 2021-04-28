#include <stdio.h>
#include <stdlib.h>
#include<time.h>//necessário p/ função time()
//Questão 6. Crie um algoritmo que preencha um vetor de 100 posições. Leia um número x
//qualquer. Verifique os múltiplos do número inteiro x informado pelo usuário e mostre-os na tela.

int main()
{
	int vet[10], x=0,i=0;
	
	srand(time(NULL));
	for(i=0;i<10;i++){
		vet[i]=rand()%100;
	}
	printf("Vetor preenchido");
	for(i=0;i<10;i++){
		printf("\nPosicao: %d \t Valor: %d",i+1, vet[i]);
	}
	printf("\n\n>>>>>");
	printf("Vamos calcular os multiplos! Insira um número qualquer <<<<<\n");
	scanf("%d",&x);
	if(x==0 || x==1){
		printf("Numero invalido");
	}else{
		for(i=0;i<10;i++){
			if(vet[i]%x==0){
				printf("\n Os multiplos de %d sao: %d\n",x+1,vet[i]);
			}
		}
	}
}
