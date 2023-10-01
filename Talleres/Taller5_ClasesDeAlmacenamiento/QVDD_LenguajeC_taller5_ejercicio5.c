#include <stdio.h>

//declaracion de variable global
float pi = 3.1416;

void funcion(void)
{
    //variable local con el mismo nombre
    float pi = 3.14;

    printf("Valor de pi dentro de la funcion: %f",pi);
}

int main()
{
    //Llamamos a la variable global pi
    printf("Valor de pi Global: %f\n",pi);

    //Llamada a la guncion que tiene su propia funcion pi
    funcion();
    //Volvemos a acceder a la variable global
    printf("\nValor de pi Global despues de llamar a la funcion: %f\n",pi);

    return 0;
}