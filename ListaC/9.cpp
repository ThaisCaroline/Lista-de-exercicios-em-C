#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<stdbool.h>


int main(){		
	
	int cont=0,n=0;
	bool primo=false;
	int	va[20], vb[20],vetb[20];

//Preencher o vetor A				
	srand(time(NULL));
	for(int i=0;i<20;i++){
		va[i]=rand()%100+1;
	}
//Imprimir o vetor A
	for(int i=0;i<20;i++){
		printf("\nVetor A-Posicao: %d \t Valor: %d",i, va[i]);
	} 


	for(int i=0; i<9; i++){
		n=va[i];
		if(n==1){
			vb[cont]=i;
			cont++;
		}else{
			primo=true;
			for(int j=2;j<n;j++){
				if(n%j==0){
					primo=false;
				}
			}
			if(primo==true){
				vb[cont]=i;
				cont++;
			}
		}
	}
	int p=0;
	for(int i=0; i<cont;i++){
		p=vb[i];
		vetb[i]=va[p];
	}
		
		printf("\n\nNumeros primos contidos no vetor");
		for(int i=0; i<cont;i++){
		printf("\nVetb[%d]: %d ",i,vetb[i]);
	}
}
/*Questão 9. Crie um algoritmo que tenha um vetor A preenchido com 100 números. Um vetor B
deve armazenar todos os números primos presentes no vetor A. Mostre o vetor B.*/



