#include <stdio.h>
#include <stdlib.h>
/*
    Diego Demian Quiros Vicencio 372688
    Taller 8 ejercicio 1.
    11/01/23
*/
/*
void imprimirMatriz5(int **q, int m, int n)
{
    int i, j;
    printf("La matriz 5 es:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int b[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int m=4,n=3,i;
    int *p[m]; 

    for(i=0; i<m ; i++)
    {
        p[i] = &b[i][0];
    }
    int **q=p;

    imprimirMatriz5(q,m,n);
    return 0;
}
*/

/*void imprimirMatriz4(int *p[], int m, int n)
{
    int i, j;
    printf("La matriz 4 es:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int b[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int m=4,n=3,i;
    int *q[m];

    for ( i = 0; i < m; i++)
    {
        q[i] = &b[i][0];
    }
    imprimirMatriz4(q,m,n);

}
*/

/*
void imprimirMatriz3(int A[][3], int m, int n)
{
    int i, j;
    printf("La matriz 3 es:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int b[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    imprimirMatriz3(b,4,3);
    return 0;
}
*/
/*
void imprimirMatriz2(int v[],int m,int n)
{
    int i,j;
    printf("La matriz 2 es:\n");
    for ( i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t",v[i*n+j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int b[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    imprimirMatriz2(&b[0][0], 4, 3);
    return 0;
}
*/

/*
void imprimirMatriz1(int *p, int m, int n)
{
    int i, j;
    printf("La matriz es:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", *(p + i * n + j));
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int b[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    imprimirMatriz1(&b[0][0], 4, 3);
    return 0;
}
*/