#include <stdio.h>

int main()
{
    // Declaración de una variable automática
    auto int valor = 42;

    // Declaración de una variable de registro
    register int temp = 0;

    // Acceso y modificación de la variable automática
    valor = valor + 10;

    // Acceso y modificación de la variable de registro
    temp = valor + 5;

    printf("Valor de la variable automática: %d\n", valor);
    printf("Valor de la variable de registro: %d\n", temp);

    return 0;
}