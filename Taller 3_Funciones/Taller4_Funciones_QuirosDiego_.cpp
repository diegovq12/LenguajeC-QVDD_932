#include <stdio.h>

void factorial(double n);
double factorialRecursivo(double num);

int main()
{
    double num,fact;
    int op;
    
    do
    {
        printf("Ingresa un numero para calcular su factorial:\n");
        scanf("%lf",&num);
        fact=factorialRecursivo(num);
        printf("El factorial del numero es = %.lf \n",fact);
        printf("Desea calcular el factorial de otro numero\n");
        printf("( [1]Si/[2])No)\t");scanf("%d",&op);
        
    }while(op!=2);

    return 0;
}

void factorial(double n)
{
    double fact=1;
    for (int i = n; i > 0; i--)
    {
        fact*=i;
    } 
    printf("El factorial del numero es = %.lf \n",fact);
}

double factorialRecursivo(double num)
{
    if (num==0)
    {
        return 1;
    }
    
    return num*factorialRecursivo(num-1);
}