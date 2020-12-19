/*Fa�a um programa em C que resolva o seguinte problema. Voc� foi contratado
por uma empresa para desenvolver um sistema e deve criar um programa que cadastre a empresa e
seus funcion�rios, as informa��es a serem cadastradas s�o:
Endere�o
� Rua;
� N�mero.
Funcion�rio
� Nome do funcion�rio;
� Cargo que exerce;
� Informa��es de endere�o (Rua e N�mero).
Empresa
� Nome da empresa;
� CNPJ;
� Informa��es de funcion�rio (Nome, Cargo, Endere�o do funcion�rio).
*/
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define N 2  //15 n� de funcion�rios

typedef struct tp_endereco{
 	char rua[40];
 	int numero;
 } Endereco;	
 
typedef struct tp_funcionario{
 	char nome[40];
 	char cargo[40];
 	Endereco end;
 } Funcionario;	
 
typedef struct tp_empresa{
 	char nomedaempresa[40];
 	char cnpj[40];
 	Funcionario f[N];
 } Empresa;
 
int main(){
	system("color f0");//deixa a telinha branquinha :3
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	int i=0;
	Empresa xiomi;
	
	printf("Dados da Empresa:\n");
	printf("Nome:\n");
	gets(xiomi.nomedaempresa);
	fflush(stdin);
	
	printf("CNPJ:\n");
	gets(xiomi.cnpj);
	fflush(stdin);
		
	
	for(i=0; i<N; i++){
		
		printf("Dados dos Funcion�rios:\n");
		printf("Nome do Funcion�rio:\n");
		gets(xiomi.f[i].nome);
		fflush(stdin);
		
		printf("Cargo do Funcion�rio:\n");
		fflush(stdin);
		gets(xiomi.f[i].cargo);
		
		printf("Rua do Funcion�rio:\n");
		fflush(stdin);
		gets(xiomi.f[i].end.rua);
		
		printf("Numero da casa do Funcion�rio:\n");
		scanf("%d",&xiomi.f[i].end.numero);
		fflush(stdin);
	}
	system ("cls");
	printf("\n------------------------------------------ Dados da Empresa ------------------------------------------\n");
	printf("\n\tNome: \t%s\n",xiomi.nomedaempresa);
	printf("\n\tCNPJ: \t%s\n",xiomi.cnpj);
	
	for(i=0; i<N; i++){
		printf("\n------------------------------------------ Dados dos Funcion�rios ------------------------------------------\n");			
			
		printf("\nFuncion�rio [%d]\nNome do Funcion�rio: %s",i,xiomi.f[i].nome);
		
		printf("\nCargo do Funcion�rio: %s",xiomi.f[i].cargo);
		
		printf("\nEndereco: %s, ",xiomi.f[i].end.rua);
		printf("%d\n",xiomi.f[i].end.numero);
	}

}
