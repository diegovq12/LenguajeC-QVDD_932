/*
    Diego Demian Quiros Vicencio 372688
    Taller 8 ejercicio 1.
    11/01/23
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 100
#define N 15

void imprimirMatriz5(int **q, int m, int n);
void imprimirMatriz4(int *p[], int m, int n);
void imprimirMatriz3(int A[][3], int m, int n);
void imprimirMatriz2(int v[], int m, int n);
void imprimirMatriz1(int *p, int m, int n);

void busquedaLinealMetodo1(char *p, int m, int n, char caracter);
void busquedaLinealMetodo2(char v[], int m, int n, char caracter);
void busquedaLinealMetodo3(char A[][3], int m, int n, char caracter);
void busquedaLinealMetodo4(char *p[], int m, int n, char caracter);
void busquedaLinealMetodo5(char **q, int m, int n, char caracter);

int main()
{
    int b[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    imprimirMatriz1(&b[0][0], 4, 3);

    int c[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    imprimirMatriz2(&c[0][0], 4, 3);

    int d[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    imprimirMatriz3(d, 4, 3);

    int a[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int m = 4, n = 3, i;
    int *q[m];

    for (i = 0; i < m; i++)
    {
        q[i] = &a[i][0];
    }
    imprimirMatriz4(q, m, n);

    int e[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    m = 4, n = 3;
    char *p[m];

    for (i = 0; i < m; i++)
    {
        p[i] = (char *)&e[i][0];
    }

    for (i = 0; i < m; i++)
    {
        q[i] = (int *)p[i];
    }

    imprimirMatriz5(q, m, n);

    double tiempo1 = 0, tiempo2 = 0, tiempo3 = 0, tiempo4 = 0, tiempo5 = 0;

    clock_t start, end;
    srand(time(NULL));

    printf("Ingrese la cantidad de veces que desea iterar las busquedas: ");
    int num;
    scanf("%d", &num);

    char busquedaCaracter[num];
    for (i = 0; i < num; i++)
    {
        busquedaCaracter[i] = 'A' + rand() % 26;
    }

    for (int k = 0; k < num; k++)
    {
        char letra = busquedaCaracter[k];

        printf("Método 1\n");
        start = clock();
        imprimirMatriz1(&b[0][0], M, N);
        busquedaLinealMetodo1(&b[0][0], M, N, letra);
        end = clock();
        tiempo1 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Método 2\n");
        start = clock();
        imprimirMatriz2(&c[0][0], M, N);
        busquedaLinealMetodo2(&c[0][0], M, N, letra);
        end = clock();
        tiempo2 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Método 3\n");
        start = clock();
        imprimirMatriz3(d, 4, 3);
        busquedaLinealMetodo3(d, M, N, letra);
        end = clock();
        tiempo3 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Método 4\n");
        start = clock();
        imprimirMatriz4(q, M, N);
        busquedaLinealMetodo4(q, M, N, letra);
        end = clock();
        tiempo4 += (double)(end - start) / CLOCKS_PER_SEC;

        printf("Método 5\n");
        start = clock();
        imprimirMatriz5(q, m, n);
        busquedaLinealMetodo5(q, M, N, letra);
        end = clock();
        tiempo5 += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("\nTiempo método 1: %f segundos\n", tiempo1);
    printf("Tiempo método 2: %f segundos\n", tiempo2);
    printf("Tiempo método 3: %f segundos\n", tiempo3);
    printf("Tiempo método 4: %f segundos\n", tiempo4);
    printf("Tiempo método 5: %f segundos\n", tiempo5);

    return 0;
}

void imprimirMatriz1(int *p, int m, int n) {
    printf("La matriz 1 es:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", *(p + i * n + j));
        }
        printf("\n");
    }
    printf("\n");
}

void imprimirMatriz2(int v[], int m, int n) {
    printf("La matriz 2 es:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", v[i * n + j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprimirMatriz3(int A[][3], int m, int n) {
    printf("La matriz 3 es:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprimirMatriz4(int *p[], int m, int n) {
    printf("La matriz 4 es:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprimirMatriz5(int **q, int m, int n) {
    printf("La matriz 5 es:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void busquedaLinealMetodo1(char *p, int m, int n, char caracter) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (*(p + i * n + j) == caracter) {
                printf("Letra %c encontrada en posición [%d][%d]\n", caracter, i, j);
                return;
            }
        }
    }
    printf("Letra %c no encontrada\n", caracter);
}

void busquedaLinealMetodo2(char v[], int m, int n, char caracter) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (v[i * n + j] == caracter) {
                printf("Letra %c encontrada en posición [%d][%d]\n", caracter, i, j);
                return;
            }
        }
    }
    printf("Letra %c no encontrada\n", caracter);
}

void busquedaLinealMetodo3(char A[][3], int m, int n, char caracter) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] == caracter) {
                printf("Letra %c encontrada en posición [%d][%d]\n", caracter, i, j);
                return;
            }
        }
    }
    printf("Letra %c no encontrada\n", caracter);
}

void busquedaLinealMetodo4(char *p[], int m, int n, char caracter) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (p[i][j] == caracter) {
                printf("Letra %c encontrada en posición [%d][%d]\n", caracter, i, j);
                return;
            }
        }
    }
    printf("Letra %c no encontrada\n", caracter);
}

void busquedaLinealMetodo5(char **q, int m, int n, char caracter) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (q[i][j] == caracter) {
                printf("Letra %c encontrada en posición [%d][%d]\n", caracter, i, j);
                return;
            }
        }
    }
    printf("Letra %c no encontrada\n", caracter);
}
