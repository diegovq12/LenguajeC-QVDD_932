#include <stdio.h>
#include <string.h>

/*
Nombre del archivo: Practica07_Punteros2_QuirosVicencio_DiegoDemian.c
Autor: QUIROS VICENCIO DIEGO DEMIAN
Fecha de creación: 05 de NOVIEMBRE de 2023
Descripción: Este archivo contiene el código principal de mi programa.
incluye un arreglo de apuntadores a caracteres, donde cada apuntador apunta a una palabra
despues utiliza apuntadores para ordenar las palabras en orden alfabetico
*/

int main()
{
    // Inicializamos el arreglo de palabras
    char *palabras[] = {"manzana", "banana", "cereza", "uva", "naranja"};
    // obtenemos el tamanio del vector
    int tamano = sizeof(palabras) / sizeof(palabras[0]);

    // Ciclo para ordenar las palabras en orden alfabético
    for (int i = 0; i < tamano - 1; i++)
    {
        for (int j = i + 1; j < tamano; j++)
        {
            //Si la comparacion entre ambas cadenas es mayor que cero significa que
            //no estan en el orden correcto
            if (strcmp(palabras[i], palabras[j]) > 0)
            {
                // Ordenamos mediante el metodo de la burbuja
                char *temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }

    // Imprimir las palabras ordenadas
    for (int i = 0; i < tamano; i++)
    {
        printf("%s\n", palabras[i]);
    }

    return 0;
}
