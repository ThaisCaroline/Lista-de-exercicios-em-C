/*Faça um programa em C que leia dois vetores inteiros de 20 posições (A e B) e
crie um outro vetor inteiro de tamanho 40 (C) contendo, nas posições pares os valores do primeiro
vetor e nas posições ímpares os valores do segundo vetor. Por fim o programa deve imprimir o vetor
resultante (C).
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca que permite acentuação no printf
#define n 10 //A E B
#define m 20 //C

void LeVetor()
{
	int i,j,k=0,a[n],b[n],c[m];
	 
	printf("Digite os elementos do  vetor 1:\n");
    for(i = 0; i < n; i++)
    {
    printf("Elemento %d:\n",i+1);
    scanf("%d",&a[i]);
    }
    
    printf("Digite os elementos do 2 vetor:\n");
    for(i = 0; i < n; i++)
    {
        printf("Elemento %d:\n",i+1);
        scanf("%d",&b[i]);
    }
    
    system("cls");
    printf("################# Vamos lah!###################\n\n");
	
	
	/*for (i = 0; i < m; i++) { //Thais:solução
        
		c[i*2] = a[i];
        c[i*2+1] = b[i];
    }*/
    
    for (i=0,j=0;i<m;i++){
    	if(i%2==0){
    		c[i]=a[j];
    		j++;
		}
    	else{
    		c[i]=b[k];
    		k++;
		}
	}
   
    //imprimir o vetor c
    for(i = 0; i < m; i++)
    {
       printf("%d,",c[i]);
    }
    printf("\n");
	
}

int main()
{

    LeVetor();
    return 0;
}
