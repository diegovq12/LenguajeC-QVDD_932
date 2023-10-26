/*
    Quiros Vicencio Diego Demian
    Lenguaje C - Taller 7
    25/10/23
*/

#include <stdio.h>
#include <string.h>

/*
Escribe una función llamada "invertirCadena" que tome un apuntador a "char"
como argumento y revierta la cadena original sin crear una nueva cadena.
Luego, utiliza esta función para invertir una cadena y mostrar el resultado.
*/

void invertirCadena(char *cadena);

int main()
{
    char nombre[100];
    char temp[100];
    printf("Ingresa cadena: ");
    fgets(temp, sizeof(temp), stdin);

    temp[strcspn(temp, "\n")] = '\0';

    strcpy(nombre, temp);
    invertirCadena(nombre);
    printf("%s\n", nombre);
    return 0;
}

void invertirCadena(char *cadena)
{
    char caracter;
    int size, j, i;
    size = strlen(cadena);
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        caracter = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = caracter;
    }
}
