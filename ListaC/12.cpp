/*Questão 12. Crie um algoritmo que preencha um vetor A com 30 números inteiros, usando a
função rand(). Preencha o vetor B com os valores de A, em ordem crescente. Mostre o vetor A e
depois o B.*/
#include<time.h>
#include<stdlib.h>
#include<stdio.h> 
int main()
{
int i, j, aux, numero[30];

    //Preencher o vetor 				
	srand(time(NULL));
	for(int i=0;i<30;i++){
		numero[i]=rand()%100+1;
	}
	//Imprimir o vetor 
	for(int i=0;i<30;i++){
		printf("\nVetor-Posicao: %d \t Valor: %d",i, numero[i]);
	} 
          for( i=0; i<30; i++ ){
                  for( j=i+1; j<30; j++ ){
                       if( numero[i] > numero[j] ){
                           aux = numero[i];
                           numero[i] = numero[j];
                           numero[j] = aux;
                       }
                  }
           }
           printf("\n Ordenado com sucesso!");
           for(i=0;i<=30;i++)
           {
                            printf("\n%d",numero[i]);
           }     
           
system("pause>null");
}


