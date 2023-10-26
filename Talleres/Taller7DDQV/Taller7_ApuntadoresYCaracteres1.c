/*
    Quiros Vicencio Diego Demian
    Lenguaje C - Taller 7
    25/10/23
*/

#include <stdio.h>

/*
Declarar un arreglo de apuntadores a caracteres llamado nombres que
contenga tres nombres (cadenas de texto). Luego, escribe un bucle que recorra
este arreglo y, en cada iteración, imprima el nombre correspondiente.
*/
int main()
{
    char* nombres[]={"Diego","Demian","Juanito"};
    int largo = sizeof(nombres) / sizeof(nombres[0]);
    for (int i = 0; i < largo; i++)
    {
        printf("Nombre %d: %s.\n",i+1,nombres[i]);
    }
    
}

