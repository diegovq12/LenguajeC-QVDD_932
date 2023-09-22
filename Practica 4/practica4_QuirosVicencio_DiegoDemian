#include <stdio.h>

/*
    Nombre del archivo: practica4_QuirosVicencio_DiegoDemian.cpp
    Autor: Diego Demian Quiros Vicencio.
    Fecha de creacion: 09/19/23
    Descripcion: Este archivo contiene el codigo principal de
    el programa para la Practica 4 de la materia lenguaje C.
*/

// prototipos
int msges(void);
void menu(void);
void fibonacci(void);
int fibonacciRecursiva(int n);
unsigned long long calcularCoeficienteBinomial(int n, int k);
void generarTrianguloPascal(int n);
//***************

int main()
{
    menu();

    return 0;
}

int msges(void)
{
    int op;
    printf("\nIngrese funcion a utilizar\n");
    printf("1- Fibonacci sin Recursion\n");
    printf("2- Fibonacci con Recursion\n");
    printf("3- Triangulo de pascal\n");
    printf("0- Salir\n");
    scanf("%d", &op);
    return op;
}

void menu(void)
{
    int op, n;

    do
    {
        op = msges();
        switch (op)
        {
        case 1:
            fibonacci();
            break;

        case 2:

            printf("Ingrese el valor de n: ");
            scanf("%d", &n);
            int resultado = fibonacciRecursiva(n);
            printf("El termino %d de la serie de Fibonacci es: %d\n", n, resultado);
            break;

        case 3:
            printf("Ingrese el numero de filas del Triangulo de Pascal que desea generar: ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf("El numero de filas debe ser un numero positivo.\n");
            }
            else
            {
                generarTrianguloPascal(n);
                break;

            default:
                break;
            }
        }
    } while (op != 0);
}

/*
    Funcion: Fibonacci sin Recursion.
    Descripcion: Funcion que calcule y muestre los primeros n terminos
    de la serie Fibonacci sin utilizar recursion.
    Parametros: -N: el numero de veces que se repetira la serie.
    Valor de retorno: ninguno.
*/

void fibonacci(void)
{
    int n, ant, sig, num, i;
    printf("Cuantas veces desea repetir Fibonacci: ");
    scanf("%d", &n);
    ant = -1;
    sig = 1;
    for (i = 0; i <= n; i++)
    {
        num = ant + sig;
        printf(" %d ", num);
        ant = sig;
        sig = num;
    }
}

/*
    Funcion: Fibonacci con Recursion.
    Descripcion: Funcion que calcule y muestre el termino n de la serie
    de Fibonacci utilizando una funcion Recursiva.
    Parametros: -N: el numero de veces que se repetira la serie.
    Valor de retorno: El valor de la serie de Fibonacci.
*/

int fibonacciRecursiva(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (fibonacciRecursiva(n - 1) + fibonacciRecursiva(n - 2));
    }
}

unsigned long long calcularCoeficienteBinomial(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    else
    {
        unsigned long long coeficiente = 1;
        for (int i = 1; i <= k; i++)
        {
            coeficiente *= (n - i + 1);
            coeficiente /= i;
        }
        return coeficiente;
    }
}

/*
    Funcion: Triangulo de Pascal.
    Descripcion: Funcion que genere y muestre las primeras n 
    filas del triangulo de Pascal.
    Parametros: -N: el numero de veces que se repetira la serie.
    Valor de retorno: El valor de la serie de Fibonacci.
*/

void generarTrianguloPascal(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            unsigned long long coeficiente = calcularCoeficienteBinomial(i, j);
            printf("%llu ", coeficiente);
        }

        printf("\n");
    }
}