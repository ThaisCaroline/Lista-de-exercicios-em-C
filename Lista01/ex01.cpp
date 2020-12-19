#include <stdio.h>
#include <stdlib.h>
#include <locale.h>// Biblioteca que permite acentuação no printf

//Faça um programa em C que contenha uma função denominada SOMATORIO que realize o
//seguinte calculo:
//S = 1/1 + 2/3 + 3/5 + 4/7+ 5/9 + ... + n/m.

float somatoria(int n){

//Definição de variaveis   
int i=0;
float resultado=0,c=1,b=1;



for(i = 1; i <= n; i++)
  {
  	
    resultado=(resultado+(c/b));
    printf("O valor da Somatoria i[%d]: %g/%g\n",i,c,b);
    c++;
    b+=2;
    
   //printf("O valor da Somatoria eh: %f",somatorio);
   
    
       
  }	
  return resultado; 
 } 
 
int main(){
	float resultado;
	int n;
	
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	printf("Faça um programa em C que contenha uma função denominada SOMATORIO que realize o seguinte calculo:\n S = 1/1 + 2/3 + 3/5 + 4/7+ 5/9 + ... + n/m.\t");
	
	//somatoria();
	printf("\n\nDigite para N\t");
	scanf("%d",&n);
	
	resultado=somatoria(n);
	printf("o resultado eh:");
	printf("%f",resultado);

}


