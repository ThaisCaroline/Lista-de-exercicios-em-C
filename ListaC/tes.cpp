#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 5
int main(){	
	int	va[MAX];

//Preencher o vetor A				
	srand(time(NULL));
	for(int i=0;i<MAX;i++){
		va[i]=rand()%10000+1;
	}
//Imprimir o vetor A
	for(int i=0;i<MAX;i++){
		printf("\nVetor A-Posicao: %d \t Valor: %d",i, va[i]);
	} 
	
	int i, j, x;
	for (i=1; i<=MAX; i++){
	    x = va[i];
	    j=i-1;
	    va[0] = x; 
	    while (x < va[j]){
	        va[j+1] = va[j];
	        j--;
	    }
	    va[j+1] = x;
	}
    //Imprimir o vetor A
	for(int i=0;i<MAX;i++){
		printf("\n\nVetor A ordenado-Posicao: %d \t Valor: %d",i, va[i]);
	} 

}
