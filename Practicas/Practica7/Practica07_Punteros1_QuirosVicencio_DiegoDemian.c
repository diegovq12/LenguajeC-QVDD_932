#include <stdio.h>
#include <stdlib.h>

/*
Nombre del archivo: Practica07_Punteros1_QuirosVicencio_DiegoDemian.c
Autor: QUIROS VICENCIO DIEGO DEMIAN
Fecha de creación: 05 de NOVIEMBRE de 2023
Descripción: Este archivo contiene el código principal de mi programa.
Crea un programa que tome dos números enteros como argumentos desdela línea de comandos.
y utiliza apuntadores para capturar estos argumentos y realizar las operaciones basicas
*/

int main(int argc, char *argv[])
{

    // convertimos los argumentos obtenidos a numeros
    int numero1 = atoi(argv[1]);
    int numero2 = atoi(argv[2]);

    // realizamos y mostramos el resultado
    printf("Suma: %d + %d = %d\n", numero1, numero2, numero1 + numero2);
    printf("Resta: %d - %d = %d\n", numero1, numero2, numero1 - numero2);
    printf("Multiplicacion: %d * %d = %d\n", numero1, numero2, numero1 * numero2);
    if (numero2 != 0)
    {
        printf("Division: %d / %d = %.2f\n", numero1, numero2, (float)numero1 / numero2);
    }
    else
    {
        printf("ERROR - VALORES INVALIDOS");
    }

    return 0;
}
