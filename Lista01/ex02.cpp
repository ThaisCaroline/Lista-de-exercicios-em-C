#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> // Biblioteca que permite acentuação no printf

/*Faça um programa que contenha uma função chamada NUMEROS_PRIMOS, essa função deve
apresentar ao usuário uma lista dos números primos existentes entre 1 e um número inteiro (NUM)
informado pelo usuário.
A função não deve ter retorno e deve receber um valor inteiro (NUM) como parâmetro de entrada
da função.*/


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
	
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	printf (" Faça um programa que contenha uma função chamada NUMEROS_PRIMOS, essa função deve apresentar ao usuário uma lista dos \n números primos existentes entre 1 e um número inteiro (NUM) informado pelo usuário. A função não deve  ter  retorno e\n deve receber um valor inteiro (NUM) como parâmetro de entrada da função.\n");

	
	printf("\n\nDigite o valor para o cálculo\t");
	scanf("%d",&num);
	
	
	if(num <= 0){
		printf("Numeros menores que 1 nao sao primos");
	}else {
		numeros_primos(num);
	}
	

}


/*	printf(" ao usuário uma lista dos números primos existentes entre 1 e um número inteiro (NUM) informado\n");
 	printf(" pelo usuário. A função não deve ter retorno e deve receber um valor inteiro (NUM) como parâmetro\n");
	printf(" de entrada da função.");
	*/
