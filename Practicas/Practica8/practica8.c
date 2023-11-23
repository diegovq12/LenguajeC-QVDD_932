#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ddqvalhd.h"

#define MAX 100

typedef struct _Producto
{
    char nombre[20];
    int cantidad;
    float precio;
} Tproducto;

int msge(void)
{
    printf("\n1. AGREGAR ELEMENTOS AL INVENTARIO\n");
    printf("2. RETIRAR ELEMENTOS AL INVENTARIO\n");
    printf("3. MOSTRAR INVENTARIO\n");
    printf("4. CALCULAR VALOR TOTAL DEL INVENTARIO\n");
    printf("0. SALIR DEL PROGRAMA\n");
    int op = validInt(0, 6, "SELECCIONA UNA OPCION: ", "INVALIDA");
    return op;
}

void menu(void)
{
    int op;
    int numElem = 0;
    Tproducto inventario[MAX];

    do
    {
        system("CLS");
        op = msge();
        system("CLS");

        switch (op)
        {
        case 1:
            agregarElementos(inventario,numElem);
            break;
        
        default:
            break;
        }
    } while (op != 0);
}

void agregarElementos(Tproducto invent[], int i)
{
    printf("INGRESAR CUANTOS ELEMENTOS AGREGAR: ");
    int num = validInt(1, 10, "INGRESAR CUANTOS PRODUCTOS AGREGAR: ", "INVALIDO");

    if (i + num <= MAX)
    {
        for (int j = 0; j < num; j++)
        {
            agregarElemento(invent, i);
            i++;
        }
    }
    else
    {
        printf("EXCEDERIA EL INVENTARIO\n");
        printf("PUEDE INGRESAR %d PRODUCTOS MAS\n", MAX - i);
    }
}

void agregarElemento(Tproducto vect[], int i)
{
    vect[i].id = randNum(1,MAX);
    getString(vect[i].nombre, "INGRESA NOMBRE DEL PRODUCTO: ");
    vect[i].cantidad = validInt(1, 100, "INGRESE CANTIDAD: ", "EXCEDE LOS ESPACIOS");
    fflush(stdin);
    scanf("%f",&vect[i].precio);
}

int buscar(Tproducto regs[], int index, int id)
{
    for (int i = 0; i < index; i++)
    {
        if (id == regs[i].id)
        {
            return i;
        }
    }
    return -1;
}

void retirarElemento(Tproducto inventario[], int numElem) {
    char nombreBuscado[20];
    printf("INGRESE NOMBRE DE PRODUCTO A RETIRAR: ");
    scanf("%s", nombreBuscado);

    int encontrado = 0;
    for (int i = 0; i < numElem; i++) {
        if (strcmp(inventario[i].nombre, nombreBuscado) == 0) {

            for (int j = i; j < numElem - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            (numElem)--;
            encontrado = 1;
            printf("PRODUCTO ENCONTRADO EN EL INVENTARIO\n");
            break;
        }
    }

    if (!encontrado) {
        printf("PRODUCTO NO ENCONTRADO EN EL INVENTARIO\n");
    }
}

void mostrarInventario(Tproducto inventario[], int numElem) {
    if (numElem == 0) {
        printf("INVENTARIO VACIO\n");
    } else {
        printf("INVENTARIO: \n");
        for (int i = 0; i < numElem; i++) {
            printf("NOMBRE: %s, CANTIDAD: %d, PRECIO: %.2f\n",
                   inventario[i].nombre, inventario[i].cantidad, inventario[i].precio);
        }
    }
}