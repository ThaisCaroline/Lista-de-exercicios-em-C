#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca que permite acentuação no printf
#define N 5

int main()
{
	system("color f0");//deixa a telinha brnaquinha
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	int i=0, j=0,n=0, cont=0;
	int **a;
	int **b;
	int **c;	
//////////////////////////////////////////////////////Primeira Matriz///////////////////////////////////////////////////////////////////////////////	
	//aloco vetor principal
	a=(int**)malloc (N* sizeof(int*));
	// aloco cada veto linha
	for(i=0;i<N;i++)
	{
		a[i]=(int *)malloc(N*sizeof(int));
	}
	//preenche a matriz com valores aleatorios
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cont++;
			printf("\ninsira o valor da posição: %d da 1° matriz\t",cont);
			scanf("%d",&n);
			a[i][j]=n;
		}
	}printf("\n");
	
	//imprime a matriz
/*	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d",a[i][j]);
		}printf("\n");
	}*/
//////////////////////////////////////////////////////Primeira Matriz///////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////Segunda Matriz///////////////////////////////////////////////////////////////////////////////	
//aloco vetor principal
	b=(int**)malloc (N* sizeof(int*));
	// aloco cada veto linha
	for(i=0;i<N;i++)
	{
		b[i]=(int *)malloc(N*sizeof(int));
	}
	//preenche a matriz com valores aleatorios
	cont=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
				cont++;
				printf("\ninsira o valor da posição: %d da 2° matriz\t",cont);
			scanf("%d",&n);
			b[i][j]=n;
		}
	}printf("\n");
	
	//imprime a matriz
/*	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d",b[i][j]);
		}printf("\n");
	}*/
//////////////////////////////////////////////////////Segunda Matriz///////////////////////////////////////////////////////////////////////////////	
//////////////////////////////////////////////////////Terceira Matriz///////////////////////////////////////////////////////////////////////////////
//aloco vetor principal
	c=(int**)malloc (N* sizeof(int*));
	// aloco cada veto linha
	for(i=0;i<N;i++)
	{
		c[i]=(int *)malloc(N*sizeof(int));
	}
	//preenche a matriz com as somas
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}printf("\n");
	
	//imprime a matriz
	system("cls");//limpa a tela
	printf("\n\t    SUA MATRIZ SOMA É:\n\n");
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("\t%d",c[i][j]);
		}printf("\n");
	}
}

















