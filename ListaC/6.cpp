#include <stdio.h>
#include <stdlib.h>
#include<time.h>//necess�rio p/ fun��o time()
//Quest�o 6. Crie um algoritmo que preencha um vetor de 100 posi��es. Leia um n�mero x
//qualquer. Verifique os m�ltiplos do n�mero inteiro x informado pelo usu�rio e mostre-os na tela.

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
	printf("Vamos calcular os multiplos! Insira um n�mero qualquer <<<<<\n");
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
