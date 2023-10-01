//Archivo B
#include <stdio.h>

//Declarando la variable externa
int main()
{
    extern int saldo;
    //Asignacion de valor a la variable Saldo
    printf("Valor modificado del saldo en archivo A %d\n",saldo);
    saldo=50;
    printf("Valor modificado del saldo en archivo B %d\n",saldo);
    return 0;
}
