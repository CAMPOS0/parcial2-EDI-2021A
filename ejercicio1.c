#include <stdio.h>
//Ejercicio 1. Escriba un programa en C que dada una matriz de flotantes de M renglones x N columnas, 
//calcule los promedios de los valores de cada columna de la matriz.
//Capture los datos por renglón.
//Imprima los promedios de cada columna. Ejemplo: Promedio Columna 1: 16.
#define c 4
#define r 4

int main()
{
    float promedio;
    float Cantidad[r][c];
    int i,j;

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Renglon: %d Columna: %d = ", i,j);
            scanf("%f",&Cantidad[i][j]);
        }
        
    }
    
    for ( j = 0; j < r; j++)
    {
        for ( i = 0; i < c; i++)
        {
            promedio=promedio + Cantidad[j][i];
        }
      printf("\n Promedio columna %d: %.3f \n", j, promedio/r);
    }
    
    

    return 0;
}
