#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca que permite acentuação no printf
void LeVetor(int tam)
{
   int i=0,valor=0, quantidade=0,naparece=0;
////////////////////////////////////////////////////////////////////////////
   int *a;//criando o ponteiro
   int *b;
   int *posicoes; 
   a=(int *)(malloc(tam*sizeof(int)));
   b=(int *)(malloc(tam*sizeof(int)));
   posicoes=(int *)(malloc(tam*sizeof(int)));
///////////////////////////////////////////////////////////////////////////////   

     printf("Digite os elementos do vetor:\n");
    for(i = 0; i < tam; i++)
    {
        printf("Elemento %d:\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Vetor a:\n[ ");
    for(i = 0; i < tam; i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n");
    
/////////////////////////////////////////////////////////////////////////////
	printf("Digite valor que quer buscar:\n");
	scanf("%d",&valor);
///////////////////////////////////////////////////////////////////////////////
    printf("O valor a buscar eh:%d\n", valor);
//////////////////////////////////////////////////////////////////////////////    
	for(i=0;i<tam;i++){
		if (a[i]==valor){
			posicoes[quantidade]=i;
			quantidade++;
		}else{
    		naparece++;
	}
	}
/////////////////////////////////////////////////////////////////////////////	
	/*for(i = 0; i<=quantidade-1; i++)
    {
       if(quantidade>0){
       printf("\nEsse valor aparece nas posicoes: %d\t",posicoes[i]);
       printf("\nEsse valor aparece: %d\t vezes\n",quantidade);
    }
    }*/
    if(quantidade>0){
    	printf("\nEsse valor aparece nas posicoes: \n");
       for(i = 0; i<=quantidade-1; i++){
       		printf("%d\t",posicoes[i]);
	   }
	   
       printf("\nEsse valor aparece: %d\t vezes\n",quantidade);
    }
    	if(naparece==tam){
			printf("\nEsse valor nao aparece\n");
		}

////////////////////////////////////////////////////////////////////////////

}

int main()
{
	int tam;
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	printf("Crie um programa que realize a busca de um dado elemento inteiro em um vetor de inteiros. ");
	
	printf("\n\nDigite tamanho dos vetores:\n");
	scanf("%d",&tam);
    LeVetor(tam);
    return 0;
}


