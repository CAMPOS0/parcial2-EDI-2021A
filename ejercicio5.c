#include <stdio.h>
//Ejercicio 5. Escribir un programa que lea una matriz de N x N, e indique si la matriz es simétrica o no.
//Una matriz es simétrica si matriz[i][j] es igual a matriz[j][i], para todo i, j < N.
#define N 3

void Cap(int Matiz[N][N]);
int Simetrica(int Matriz[N][N]);

int main()
{
    int matriz[N][N];
    int x;

    Cap(matriz);
    x = Simetrica(matriz);
    if(x)
        printf("Es simetrica");
    else
        printf("No es simetrica");


 return(0);
}


void Cap(int Matriz[N][N])
{
    int i, j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("Lugar [%d][%d]: ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
}

int Simetrica(int Matriz[N][N])
{
    int i, j, r = 1;

    for(i=0; i<N; i++)
    {
        for(j =i+1 ; j<N; j++)
        {
            if(Matriz[i][j] != Matriz[j][i])
            {
                r = 0;
            }
        }
    }
    return(r);
}
