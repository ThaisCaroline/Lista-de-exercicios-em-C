#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca que permite acentuação no printf
#define N 10

int main()
{
	system("color f0");//deixa a telinha brnaquinha
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	int i=0, j=0,n=0, cont=0, soma=0,dp[N];
	int **a;
	
//////////////////////////////////////////////////////Primeira Matriz///////////////////////////////////////////////////////////////////////////////	
	//aloco vetor principal
	a=(int**)malloc (N* sizeof(int*));
	// aloco cada veto linha
	for(i=0;i<N;i++)
	{
		a[i]=(int *)malloc(N*sizeof(int));
	}
	//preenche a matriz
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cont++;
			printf("\ninsira o valor da posição: %d da 1° matriz\t",cont);
			scanf("%d",&n);
			a[i][j]=n;
		}
	}printf("\n");
	
	//imprime a matriz
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d",a[i][j]);
		}printf("\n");
	}
	
	//pegando os elementos abaixo da diagonal principal

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i>j){
		//	printf("\nDp da matriz: %d",a[i][j]);
		//	printf("\nVariavel i e j: %d, %d",i,j);	
			soma=soma+a[i][j];
			
		}
		}	
		}
	//percorre a matriz pegando a principal
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
		//	printf("\nDp da matriz: %d",a[i][j]);
		//	printf("\nVariavel i e j: %d, %d",i,j);	
			dp[i]=a[i][j];
			soma=soma+dp[i];
		//	printf("\nDp do vetor: %d",dp[i]);
		}
		}	
		}	
		printf("\nSoma: %d",soma);
	
	
}














