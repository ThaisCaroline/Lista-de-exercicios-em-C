#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define N 50
// Biblioteca que permite acentua��o no printf
/*Fa�a um programa em C para cadastrar produtos, as informa��es a serem inseridas s�o:
� Nome do produto;
� Quantidade no estoque;
� Pre�o;
� Fornecedor*/

int main(){
	system("color f0");//deixa a telinha branquinha :3
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	int i=0;
	
	typedef struct ficha_cadastro{ //tipo de dado 
	char nomeProduto[40];
	int  quantidadeProduto;
	float precoProduto;
	char fornecedor [40];
	}ficha;//defini��o da struct
	
	ficha cad_prod[N];	 //criei um vetor chamada cad_prod do tipo ficha
	
	printf("\n\n------------------------------ Cadastro dos Produtos ------------------------------\n\n");
	
	for (i=0;i<N;i++){
		
	printf("\nDigite o nome do fornecedor do �%d produto\t",i+1);
	gets(cad_prod[i].fornecedor);
	fflush(stdin);
	
	printf("\nDigite o nome do produto\t");
	gets(cad_prod[i].nomeProduto);
	
	printf("\nDigite a quantidade do produto\t");
	scanf("%d",&cad_prod[i].quantidadeProduto);
	
	printf("\nDigite o pre�o do produto\t");
	scanf("%f",&cad_prod[i].precoProduto);
	fflush(stdin);//limpa n sei o que do teclado
	//system ("cls");//limpa a tela
}
//	Saida de dados
	system ("cls");
	
	for(i=0;i<N;i++){
	
	printf("\n\n------------------------------ Produtos �%d------------------------------\n\n",i+1);
	printf("\n\tFicha produto:\n");
	printf("\n\tFornecedor............................. %s\n",cad_prod[i].fornecedor);
	printf("\n\tProduto................................ %s\n",cad_prod[i].nomeProduto);
	printf("\n\tQuantidade do Produto.................. %d\n",cad_prod[i].quantidadeProduto);
	printf("\n\tPre�o do Produto....................... %g\n",cad_prod[i].precoProduto);
	
}
	
	
	
	
	
	
	
	
	
	
}
