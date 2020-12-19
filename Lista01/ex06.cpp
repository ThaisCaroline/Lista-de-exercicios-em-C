#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca que permite acentuação no printf
#define N 3

int main()
{
	system("color f0");//deixa a telinha branquinha :3
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	int i=0, j=0,n=0, cont=0,cot=0, dp[N], ds[N];
	int **a;
	

	//aloco vetor principal
	a=(int**)malloc (N* sizeof(int*));
	// aloco cada veto linha
	for(i=0;i<N;i++)
	{
		a[i]=(int *)malloc(N*sizeof(int));
	}
	//preenche a matriz com valores 
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cont++;
			printf("\ninsira o valor da posição: %d da matriz\t",cont);
			scanf("%d",&n);
			a[i][j]=n;
		}
	}printf("\n");
	
	//imprime a matriz
	printf("\nA matriz inserida é:\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("\t%d",a[i][j]);
		}printf("\n");
	}
	printf("\n#############################################\n");
	
 //percorre a matriz pegando a principal
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
		//	printf("\nDp da matriz: %d",a[i][j]);
		//	printf("\nVariavel i e j: %d, %d",i,j);	
			dp[i]=a[i][j];
		//	printf("\nDp do vetor: %d",dp[i]);
		}
		}	
		}
	
	//percorre a matriz pegando a secundaria
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i+j == N - 1){
		//printf("\nDs da matriz: %d",a[i][j]);
		  ds[i]=a[i][j];
		//printf("\nDs do vetor: %d",ds[i]);	
		}
		}
		}	
	
	//percorre a matriz colocando a principal na secundaria
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i+j == N - 1){//condição para chegar na segundaria
		//printf("\nDs da matriz: %d",a[i][j]);
		  a[i][j]=dp[i];
		//printf("\nDs do vetor: %d",ds[i]);
		
		}
		}
		}	
		
	
	
	//percorre a matriz pegando a secundaria a pondo a principal
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
		//	printf("\nDp da matriz: %d",a[i][j]);
		//	printf("\nVariavel i e j: %d, %d",i,j);	
			a[i][j]=ds[i];
		//	printf("\nDp do vetor: %d",dp[i]);
		}
		}	
		}
		
	//imprime a matriz final
	printf("\nA matriz com as diagonais invertidas é:\n\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("\t%d",a[i][j]);
		}printf("\n");
	}
	printf("\n#############################################\n");	
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

