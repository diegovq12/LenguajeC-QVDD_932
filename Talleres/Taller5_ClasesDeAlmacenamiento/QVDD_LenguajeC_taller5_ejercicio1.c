#include <stdio.h>

void contadorAutomatico(void)
{
    //Declaracion de la variable automatica
    auto int contador = 0;
    contador++;
    printf("%d\n",contador);
}

//La variable contador deja de existir al salir de la funcion

int main()
{
    for(int i = 0 ; i < 10 ; i++)
    {
        contadorAutomatico();
    }
    //Fuera de la funcion la variable ya no es accesible
    return 0;
}