#include <stdio.h>

/*
    Nombre/Matricula: Diego Demian Quiros Vicencio 372688
    Fecha: 10/04/23
    Primer Examen Lenguaje C
*/

int main() 
{
    int num, i, j;
    int suma;

    printf("Numero de veces que realizara la funcion: ");
    scanf("%d", &num);

    for (j = 1; j < num; j++) 
    {
        suma = 0;
        for (i = 1; i < j; i++) {
            if (j % i == 0) {
                suma += i;
            }
        }
        if (suma == j) {
            printf("%d perfecto\n", j);
        }
    }

    return 0;
}