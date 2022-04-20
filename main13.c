#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//primera linea
	int x;
		for(x=0; x<=9; x++) 
	{
	printf("*\n", x);
    }
    
    //separacion
	printf("\n");
    	
    	//primera linea y base
		for(x=0; x<=9; x++) 
		{
		printf("*\n", x);
    	}
    	for(x=0; x<=10; x++) 
		{
		printf("* ", x);
    	}
    
    //separacion
    printf("\n");
    printf("\n");
    
    		//primeralinea,arriba,abajo
    			for(x=0; x<=9; x++) 
				{
				printf("* ", x);
    			}
				for(x=0; x<=9; x++) 
				{
				printf("*\n", x);
    			}
    			for(x=0; x<=10; x++) 
				{
				printf("* ", x);
    			}
    			
	//separacion
	printf("\n");
	printf("\n");
	printf("\n");
    			
    			//4lineas
/*lineaarriba*/	for(x=0; x<=9; x++) 
				{
				printf("* ", x);
    			}
/*liniz*/		for(x=0; x<=9; x++) 
				{
				printf("*                   *\n", x);
    			}
/*linabajo*/	for(x=0; x<=10; x++) 
				{
				printf("* ", x);
    			}
    			
    		  		
	return 0;
}
