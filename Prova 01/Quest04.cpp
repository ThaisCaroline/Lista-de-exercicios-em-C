#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
/*Fa�a um programa em C em que dados os n�meros n1 e n2, como par�metros
de entrada de uma fun��o a mesma deve encontrar os valores pares que se encontram nesse
intervalo, recursivamente.*/

int resultado (int a, int b){
	if(b==1){
		system("pause");
	}else if(b%2==0){
		printf("%d\n",b);
		return resultado(a,b-1);
	}else resultado (a,b-1);
}



int main(){
	system("color f0");//deixa a telinha branquinha :3
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s

	int a=0, b=0,i=0;
	
	printf("Insira o primeiro par�metro\n");
	scanf("%d",&a);
	printf("Insira o segundo par�metro\n");
	scanf("%d",&b);
	system ("cls");
	printf("\n\n######################################################\n\n");

		resultado (a,b);
	}
	

	
  
	
