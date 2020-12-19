#include <stdio.h>
#include <stdlib.h>
void LeVetor()
{
	 int i,j;
   
   
////////////////////////////////////////////////////////////////////////////
   int *a;
   int *b;
   int *c;
   
   a=(int *)(malloc(10*sizeof(int)));
   b=(int *)(malloc(10*sizeof(int)));
   c=(int *)(malloc(10*sizeof(int)));
   
///////////////////////////////////////////////////////////////////////////////   

    printf("Digite os elementos do  vetor 1:\n");
    for(i = 0; i < 10; i++)
    {
    printf("Elemento %d:\n",i+1);
    scanf("%d",&a[i]);
    }
/////////////////////////////////////////////////////////////////////////////	    
    printf("Digite os elementos do 2 vetor:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Elemento %d:\n",i+1);
        scanf("%d",&b[i]);
    }
///////////////////////////////////////////////////////////////////////////////   
    
    printf("################# Vamos Somar!###################\n\n");
	for(i=0,j=10-1;i<10;i++,j--){
		c[i]=a[i]+b[j];
	}
	for(i = 0; i < 10; i++)
    {
       printf("%d\n",c[i]);
    }
    printf("\n");
	
	
}


int main()
{

    LeVetor();
    return 0;
}


