/*
    Quiros Vicencio Diego Demian
    Lenguaje C - Taller 7
    25/10/23
*/

#include <stdio.h>
#include <string.h>

/*
Escribe un programa que permita al usuario ingresar tres nombres y almacene
estos nombres en el arreglo de apuntadores a caracteres nombres. Luego, usa
un bucle para imprimir los nombres almacenados.
*/

void imprimirNombres(char *nombres[],int num);

int main()
{
    char *nombres[3];

    for (int i = 0; i < 3; i++)
    {
        char temp[100];
        printf("Ingresa nombre %d:\n", i + 1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0'; // Elimina el carácter de nueva línea del final

        nombres[i] = strdup(temp);
    }

    printf("Nombres ingresados:\n");
    imprimirNombres(nombres,3);

    return 0;
}

void imprimirNombres(char *nombres[],int num)
{
    for (int j = 0; j < num; j++)
    {
        printf("Nombre %d: %s.\n", j + 1, nombres[j]);
    }
}