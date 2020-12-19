/*Faça um programa em C que resolva o seguinte problema. Você foi contratado
por uma empresa para desenvolver um sistema e deve criar um programa que cadastre a empresa e
seus funcionários, as informações a serem cadastradas são:
Endereço
• Rua;
• Número.
Funcionário
• Nome do funcionário;
• Cargo que exerce;
• Informações de endereço (Rua e Número).
Empresa
• Nome da empresa;
• CNPJ;
• Informações de funcionário (Nome, Cargo, Endereço do funcionário).
*/
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define N 2  //15 n° de funcionários

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
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
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
		
		printf("Dados dos Funcionários:\n");
		printf("Nome do Funcionário:\n");
		gets(xiomi.f[i].nome);
		fflush(stdin);
		
		printf("Cargo do Funcionário:\n");
		fflush(stdin);
		gets(xiomi.f[i].cargo);
		
		printf("Rua do Funcionário:\n");
		fflush(stdin);
		gets(xiomi.f[i].end.rua);
		
		printf("Numero da casa do Funcionário:\n");
		scanf("%d",&xiomi.f[i].end.numero);
		fflush(stdin);
	}
	system ("cls");
	printf("\n------------------------------------------ Dados da Empresa ------------------------------------------\n");
	printf("\n\tNome: \t%s\n",xiomi.nomedaempresa);
	printf("\n\tCNPJ: \t%s\n",xiomi.cnpj);
	
	for(i=0; i<N; i++){
		printf("\n------------------------------------------ Dados dos Funcionários ------------------------------------------\n");			
			
		printf("\nFuncionário [%d]\nNome do Funcionário: %s",i,xiomi.f[i].nome);
		
		printf("\nCargo do Funcionário: %s",xiomi.f[i].cargo);
		
		printf("\nEndereco: %s, ",xiomi.f[i].end.rua);
		printf("%d\n",xiomi.f[i].end.numero);
	}

}
