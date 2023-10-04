#include <stdio.h>

/*
    Nombre/Matricula: Diego Demian Quiros Vicencio 372688
    Fecha: 10/04/23
    Primer Examen Lenguaje C
*/

int main()
{
    int num,n,i,j;
    int suma=0;
    printf("Cuantas veces: ");scanf("%d",&n);
    for (j = n; j <= n; j--)
    {
        num=n;
        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                suma+=i;
            }
        }

        if (suma==num)
        {
            printf("%d Perfecto\n",suma);
        }
    }
}