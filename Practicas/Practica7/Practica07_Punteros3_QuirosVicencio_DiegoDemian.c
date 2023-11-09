#include <stdio.h>
#include <stdlib.h>

/*
Nombre del archivo: Practica07_Punteros3_QuirosVicencio_DiegoDemian.c
Autor: QUIROS VICENCIO DIEGO DEMIAN
Fecha de creación: 08 de NOVIEMBRE de 2023
Descripción: Este archivo contiene el código principal de mi programa.
Declaramos una matriz de 3x3 con valores, mediante apuntadores sumaremos
todos sus valores, encontraremos el mayor valor y su posicion
*/

int main()
{
    // Declaracion de una matriz 3x3
    int matriz[3][3] = {{1, 5, 3}, {4, 15, 6}, {1, 8, 9}};

    // Declarar variables para la suma y el elemento más grande
    int suma = 0;
    int elementoMayor = matriz[0][0];
    int filaElementoMayor = 0;
    int columnaElementoMayor = 0;

    int *ptr = &matriz[0][0]; // Inicializando el puntero en el primer elemento de la matriz

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Sumar el elemento actual a la suma total
            suma += *ptr;

            // Comprobar si el elemento actual es mayor que el maximo encontrado hasta ahora
            if (*ptr > elementoMayor)
            {
                elementoMayor = *ptr;
                filaElementoMayor = i;
                columnaElementoMayor = j;
            }

            // Avanzar al siguiente elemento de la matriz
            ptr++;
        }
    }

    // Imprimir la matriz
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimir la suma ,el elemento mas grande y su posición
    printf("Suma de todos los elementos: %d\n", suma);
    printf("Elemento mas grande: %d\n", elementoMayor);
    printf("El elemento mas grande se encuentra en la posicion [%d][%d]\n", filaElementoMayor, columnaElementoMayor);

    return 0;
}
