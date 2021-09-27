#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Ejercicio 2. Escribir un programa en C que genere una matriz de N x N y la llene con 0 excepto la diagonal principal que deberá tener 1.
#define n 10
int main()
{
    int i,j,r;
    int M[n][n];

    printf("Dame el numero\n");
    scanf("%d", &r);
    
    for (i = 0; i < r ; i++)
    {
        for (j = 0; j < r; j++)
        {
           M[i][j]= 0;
        
         if (i==j)
         {
            M[i][j] = 1;
         }
         printf(" %d ", M[i][j]);
        }
        printf("\n");
    }
 return 0;
}
