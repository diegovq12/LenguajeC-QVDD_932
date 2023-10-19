#include <stdio.h>
#include <time.h>

void apuntador(int *ptr);
void multiplicarPorDos(int *num);
void modificarVector(int vector[], int n, int *apuntarVector);
void llena_vectorRandom (int vector[10],int m,int ri,int rf);

 int main()
{
    srand(time(NULL));
    int x=4;

    int n=7, i;
    int vector[n];
    int *apuntarVector;
    apuntarVector = &vector;
    
    apuntador(&x);

    multiplicarPorDos(&x);

    printf(" = %d\n\n", x);
    llena_vectorRandom (vector,n,1,50);

    for(i=0; i<n; i++)
    {
        printf("%d\n", vector[i]);
        apuntarVector++;
    }
    printf("\n");

    modificarVector(vector, n, *apuntarVector);

    for( i = 0; i<n; i++)
    {
        printf("%d\n", vector[i]);
        
    }
    return 0;
}

void apuntador(int *ptr)
{
    printf("ptr = %p\n\n", ptr);
}

void multiplicarPorDos(int *num)
{
    *num= *num * 2;
    printf("el apuntador num = %d \n", *num);
}

void modificarVector(int vector[], int n, int *apuntarVector)
{
    int sumar=7, i;

    for(i=0; i<n; i++)
    {
        apuntarVector=&vector[i];
        *apuntarVector= *apuntarVector + sumar;
    }
}

void llena_vectorRandom (int vector[10],int m,int ri,int rf)
{
    srand(time(NULL));
    int aux,num,i,j;
    for (i = 0; i < m; i++)
    {  
        aux=0;
        num=(rand()%(ri-rf))+ri;
        for (j = 0; j<m; j++)
        {
            if (num==vector[j])
            {
                aux=1;
            }
        }
        
        if (aux==1)
        {
            i--;
        }
        else
        {
            vector[i]=num;
        }
    }
    printf("\nEl Vector 2 ha sido llenado con valores del %d hasta %d\n",ri,rf);
}