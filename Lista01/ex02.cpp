#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> // Biblioteca que permite acentua��o no printf

/*Fa�a um programa que contenha uma fun��o chamada NUMEROS_PRIMOS, essa fun��o deve
apresentar ao usu�rio uma lista dos n�meros primos existentes entre 1 e um n�mero inteiro (NUM)
informado pelo usu�rio.
A fun��o n�o deve ter retorno e deve receber um valor inteiro (NUM) como par�metro de entrada
da fun��o.*/


int numeros_primos(int num){
int cont1, cont2, div=0;
  
  for(cont2=1; cont2<=num; cont2++, div = 0){
    
    for(cont1=1; cont1<=num; cont1++){
      if (cont2%cont1==0){
	div++;
      }
    }
    
   
    if(div==2)
      printf ("%i eh primo\n",cont2);
        
  }
  
}





int main(){
	int num;
	
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	printf (" Fa�a um programa que contenha uma fun��o chamada NUMEROS_PRIMOS, essa fun��o deve apresentar ao usu�rio uma lista dos \n n�meros primos existentes entre 1 e um n�mero inteiro (NUM) informado pelo usu�rio. A fun��o n�o deve  ter  retorno e\n deve receber um valor inteiro (NUM) como par�metro de entrada da fun��o.\n");

	
	printf("\n\nDigite o valor para o c�lculo\t");
	scanf("%d",&num);
	
	
	if(num <= 0){
		printf("Numeros menores que 1 nao sao primos");
	}else {
		numeros_primos(num);
	}
	

}


/*	printf(" ao usu�rio uma lista dos n�meros primos existentes entre 1 e um n�mero inteiro (NUM) informado\n");
 	printf(" pelo usu�rio. A fun��o n�o deve ter retorno e deve receber um valor inteiro (NUM) como par�metro\n");
	printf(" de entrada da fun��o.");
	*/
