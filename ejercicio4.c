#include <stdio.h>
//Ejercicio 4. Escribir un programa que lea una arreglo bidimensional de M x N en una función y en otra función 
//encuentre el elemento mayor de la matriz indicando en que posición (renglon - columna) lo encontró.
   
#define M 4
#define N 4

void Captura(int m[M][N]);
int Mayor(int m[M][N], int *x, int *y);

int main()
{
    int matriz[M][N];
    int i, j, mas;

    Captura(matriz);
    mas = Mayor(matriz, &i, &j);
    printf("El numero mayor es: %d y se encuentra en: (%d,%d)", mas, i, j);

 return(0);
}

void Captura(int m[M][N])
{
    int i, j;
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("Lugar [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

int Mayor(int m[M][N], int *x, int *y)
{
    int bandera = 0;
    int i, j;

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(bandera < m[i][j])
            {
                bandera = m[i][j];
                *x = i;
                *y = j;
            }
        }
    }
    return(bandera);
}
