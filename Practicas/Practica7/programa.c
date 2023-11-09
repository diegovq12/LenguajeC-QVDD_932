#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // convertimos los argumentos obtenidos a numeros
    int numero1 = atoi(argv[1]);
    int numero2 = atoi(argv[2]);

    // realizamos y mostramos el resultado
    printf("Suma: %d + %d = %d\n", numero1, numero2, numero1+numero2);
    printf("Resta: %d - %d = %d\n", numero1, numero2, numero1-numero2);
    printf("Multiplicacion: %d * %d = %d\n", numero1, numero2, numero1*numero2);
    if (numero2 != 0)
    {
        printf("Division: %d / %d = %.2f\n", numero1, numero2, (float)numero1/numero2);
    }
    else
    {
        printf("ERROR - VALORES INVALIDOS");
    }
    
    return 0;
}
