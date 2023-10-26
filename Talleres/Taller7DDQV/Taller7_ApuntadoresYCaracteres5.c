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

int main()
{
    char *nombres[10];

    for (int i = 0; i < 10; i++)
    {
        char temp[100];
        printf("Ingresa nombre %d:\n", i + 1);
        fgets(temp, sizeof(temp), stdin);
        temp[strcspn(temp, "\n")] = '\0'; // Elimina el carácter de nueva línea del final

        nombres[i] = strdup(temp);
    }
}
