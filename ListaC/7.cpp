#include <stdio.h>
#include <stdlib.h>
//Questão 7. Crie um algoritmo que preencha dois vetores X e Y. Crie um vetor Z para armazenar
//os seguintes cálculos: a) a diferença entre X e Y; b) a soma entre X e Y; c) o produto entre X e Y.
//Mostre o vetor Z após cada operação.

int main()
{
	int tam=0, mult=0, x[tam], y[tam], z[mult],i=0;
	
	printf("\nInforme o tamanho dos vetores X e Y\n");
	scanf("%d",&tam);
	mult=tam*3;
	printf("\nVamos preencher o vetor X!\n");
	for(i=0;i<tam;i++){
		printf("Insira o valor para a posicao %d do vetor:",i+1);
			scanf("%d",&x[i]);
	}
	printf("\nVamos preencher o vetor Y!\n");
	for(i=0;i<tam;i++){
		printf("Insira o valor para a posicao %d do vetor:",i+1);
			scanf("%d",&y[i]);
	}
	printf("\nVamos preencher o vetor Z!\n");
	for(i=0;i<tam;i++){
			z[i]=x[i]-y[i];
			printf("\nVetor Z subtrain os valores: %d",z[i]);
			z[i]=x[i]+y[i];
			printf("\nVetor Z somando os valores:%d",z[i]);
			z[i]=x[i]*y[i];
			printf("\nVetor Z multiplicando os valores:%d",z[i]);
		}
	}


