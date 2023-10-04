#include <stdio.h>


int main()
{
    int num,i;
    int suma=0;
    printf("Ingresa un num: ");scanf("%d",&num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            suma+=i;
        }
    }

    if (suma==num)
    {
        printf("%d Perfecto",num);
    }
    
    
    
}