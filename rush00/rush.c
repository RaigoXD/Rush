#include <stdio.h>

void Irush(int, int, int, int);  // Declaro la funcion Irush. que recibira 4 enteros

void rush00(int x, int y)// Funcion rush00 sera la funcion intermedia para que asi de esta manera podamos llamar a rush con solo dos parametros
{
    Irush(x,y,1,1);  // LLamo a la funcion Irush, con x,y,1,1. (1,1) seran los contadores iniciales.
}

void Irush(int x, int y, int contadorx, int contadory) // La funcion Irush sera la encargada de imprimir la figuras.
{                                                      // X, es la cantidad de columnas, Y la cantidad de filas 
    if(contadory <= y) // Mientras que el contadorY sea meor igual a y, voy a repetir el siguiente proceso.
    {
        if(contadorx <= x)  // si contadorX es menor igual x
		{
         	if(contadory == 1 || contadory == y) //Si es la primera o la ultima fila.
	 		{	
             	if(contadorx == 1 || contadorx == x) // Si es la primera o la ultima fila.
	     		{	
 					printf("o");  // Imprimo una o si es alguna de las esquinas de arriba o de las esquina de abajo
					Irush(x,y,++contadorx, contadory); //llamo a la funcion sumando a la posicion de la columna.
	     		}
	     		else // Si es la primera o ultima fila pero no es ninguna de las esquinas.
	     		{
					printf("-"); //Imprimo los guiones que separan las columnas 
					Irush(x,y,++contadorx, contadory); //llamo a la funcion sumando a la posicion de la columna
	     		}
	 		}else
	     		if(contadorx == 1 || contadorx == x)  //Si son los estremos izquierdo o derecho 
	     		{
					printf("|"); // Imprimo los palitos que separan las filas 
					Irush(x,y,++contadorx,contadory); //llamo la funcion sumando a la posicion de las columnas
	    		}else 
	     		{
					printf(" "); // Imprimo espacios que separan las filas
					Irush(x,y,++contadorx,contadory);
	     		}
		}else
		{
	    	printf("\n"); //Hago los saltos de linea para poder visualizar el cuadrado
	    	Irush(x,y,1,++contadory); //llamo a la funcion sumando a la filas y reiniciando las columans a 1
		}
    }
}
