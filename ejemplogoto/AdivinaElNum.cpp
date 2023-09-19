#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, numrand,op,intentos;

    srand(time(NULL));

    inicio:

    printf("\t Adivina el numero!\n");
    printf("El juego consiste en adivinar el numero aleatorio que generara la maquina\n");
    printf("El numero estara entre el 1 y 100\n");

    reinicio:
    intentos=0;
    numrand=rand()%100+1;
    printf("Num aleatorio: %d\n",numrand);
    adivinanza:
    

    printf("Ingresa un numero: ");scanf("%d",&num);

    if (num!=numrand)
    {   
        if (num<=0 || num>100)
        {
            printf("Numero fuera de rango\n");
            goto adivinanza;
        }
    
        printf("Numero equivocado\n");
        if (num>numrand)
        {
            printf("Es menor\n");
        }
        else
        {
            printf("Es mayor\n");
        }
        
        intentos++;
        goto adivinanza;
    }

    if (num==numrand)
    {
        printf("Ganaste! Adivinaste el numero %d en %d intentos",numrand,intentos);
        printf("\nQuieres jugar de nuevo?\n");
        printf("([1]Si\t[2]No)  \t");
        scanf("%d",&op);
        if (op==1)
        {
            g
        }
        else
        {
            printf("Adios!");
        }
    }

    return 0;
}