#include <stdio.h>
#include <stdlib.h>
#include<time.h>//necessário p/ função time()
//Questão 8. Crie um algoritmo que preencha dois vetores (A e B) de 50 posições de números. O
//algoritmo deve, então, subtrair o primeiro elemento de A pelo último de B, acumulando o valor,
//subtrair o segundo elemento de A pelo penúltimo de B, acumulando o valor, e assim por diante.
//Mostre o resultado da soma final.

main(){
	int tam=3,veta[tam],vetb[tam], vetx[tam],i=0;
	
	srand(time(NULL));
	for(i=0;i<tam;i++){
		veta[i]=rand()%100;
		vetb[i]=rand()%100;
	}
	printf("Vetores preenchidos\n");
	for(i=0;i<tam;i++){
		printf("\nVetor A Posicao: %d \t Valor: %d",i, veta[i]);
	}printf("\n\n");
	printf(">>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<\n");
		for(i=0;i<tam;i++){
		printf("\nVetor B Posicao: %d \t Valor: %d",i, vetb[i]);
	}
	printf("\n>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<\n");
	int k;
	printf("\nVamos fazer as continhas!\n");
	for(i=0,k=tam-1;i<tam,k>=0;i++,k--){
		//printf("\nveta[%d]:%d",i,veta[i]);
		//printf("\nvetb[%d]:%d",k,vetb[k]);
		vetx[i]=veta[i]-vetb[k];
	}
	for(i=0;i<tam;i++){
		printf("\nVetor X na posicao %d: %d",i,vetx[i]);
	}		
		
}
