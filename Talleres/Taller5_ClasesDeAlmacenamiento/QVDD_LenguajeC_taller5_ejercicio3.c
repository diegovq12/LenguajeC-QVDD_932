#include <stdio.h>

void funcioncontador(void)
{
    //Declaracion de variable estatica
    static int contador = 0;
    contador++;
    //mostrar el valor del contador
    printf("Valor de contador %d\n",contador);
}

//La variable contador deja de existir al salir de la funcion

int main()
{
    for (int i = 0; i < 10; i++)
    {
        funcioncontador();
    }
    
    return 0;
}