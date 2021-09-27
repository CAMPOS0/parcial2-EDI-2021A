#include <stdio.h>
//Ejercicio 3. Escribir un programa que lea una arreglo bidimensional de M x N, e imprima su transpuesta.
#define M 3
#define N 2

int main()
{
    int M1[M][N];
    int i, j;

  printf(" Cambiar a matriz transpuesta\n\n");
    for(i = 0; i< M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("Valor (%d,%d): ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
 
    printf("\n\n Matriz Original: \n\n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }


    printf("\n\n Matriz Transpuesta:\n\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%d ", M1[j][i]);
        }
        printf("\n");
    }
  return 0;
}
