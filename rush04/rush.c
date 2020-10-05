#include <stdio.h>

void Irush(int, int, int, int);  // Declaro la funcion Irush. que recibira 4 enteros

void rush04(int x, int y)// Funcion rush04 sera la funcion intermedia para que asi de esta manera podamos llamar a rush con solo dos parametros
{
    Irush(x,y,1,1);  // LLamo a la funcion Irush, con x,y,1,1. (1,1) seran los contadores iniciales.
}

void Irush (int x, int y, int contadorx, int contadory) // La funcion Irush sera la encargada de imprimir la figuras.
{                                                          // X, es la cantidad de columnas, Y la cantidad de filas 
	if (contadory <= y) //Mientras que el contadorY sea menor a la y se procesara el siguiente ciclo de forma recursiva.
	{
		if(contadorx <= x)  //Si el contadorX es menor igual a x
		{
			if (contadory == 1 || contadory == y) //Si se esta en la primera o ultima fila se hara lo siguiente
	    	{
	      		if(contadory == 1){ //Si estamos en la primera fila 
					if(contadorx == 1) //Si estamos en la esquina superior izquierda
		  				printf ("A"); 
					else if(contadorx == x) //si estamos en la esquina superior derecha
						printf("C");
	      			else
		  				printf ("B");   //si ningua de las anteriores es correcta estamos entre medias
					
				}else
				{
					if(contadorx == 1)  //si estamos en la ultima fila y estamos en la esquina inferior izquierda
		  				printf ("C");  
					else if(contadorx == x) //Si estamos en la esquina inferior derecha
						printf("A");
	      			else
		  				printf ("B");   //Si ninguna es correca estamos entre medias de la ultima fila
				}
	    	}else if(contadorx == 1 || contadorx == x){ //Si no es ni la primera y ultima fila solo contruyo las paredes 
				printf("B"); 
				
			}else
			{
				printf(" ");
				
			}
		Irush (x, y, ++contadorx, contadory); //llamo a la funcion aumentandola en las columnas
		}else
		{
			printf("\n"); //si ya he termido de imprimir algunas de las filas, hago un salto de linea 
			Irush (x, y, 1, ++contadory); //llamo de nuevo a la funcion pero esta aumento en Y y vuelvo las columnas a 1
		}	
	}
}