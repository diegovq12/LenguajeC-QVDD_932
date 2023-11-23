#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_REGS 10

typedef struct _animal
{
    int clave;
    char especie[20];
    char raza[20];
    char sexo[10];
    char nombre[20];
} Tanimal;

int msges(void);
void menu(void);
void registrar(Tanimal regs[], int i);
int buscar(Tanimal regs[], int index, int id);
void historial(Tanimal reg[], int i);
void consultar (Tanimal vect[],int index);
void almacenar(Tanimal vect[],int i);
int leer(char nombre[]);


int main()
{
    srand(time(NULL));
    menu();

    return 0;
}

int msges(void)
{
    int op;

    printf("\nREGISTROS VETERINARIA UABC\n");
    printf("1. REGISTRAR MASCOTA\n");
    printf("2. HISTORIAL MEDICO(MOSTRAR Y ACTUALIZAR)\n");
    printf("3. CONSULTAR REGISTROS\n");
    printf("4. ALMACENAR REGISTROS\n");
    printf("5. CARGAR REGISTROS\n");
    printf("0. SALIR\n");
    printf("INGRESE OPCION A UTILIZAR: ");
    scanf("%d", &op);
    return op;
}

void menu()
{
    int op;
    Tanimal vect[MAX_REGS];
    int index = 0;
    do
    {
        op = msges();
        switch (op)
        {
        case 1:
            registrar(vect, index);
            index++;
            break;
        case 2:
            historial(vect,index);
            break;
        case 3:
            consultar(vect,index);
            break;
        case 4:
            almacenar(vect,index);
            break;

        case 5:
            leer("registros.txt");
            break;
        default:
            break;
        }
    } while (op != 0);
}

void registrar(Tanimal regs[], int i)
{
    regs[i].clave = rand() % 100 + 1;
    printf("INGRESE LA ESPECIE DEL ANIMAL: ");
    gets(regs[i].especie);
    gets(regs[i].especie);
    printf("INGRESE LA RAZA DEL ANIMAL: ");
    gets(regs[i].raza);
    printf("INGRESE EL SEXO DEL ANIMAL: ");
    gets(regs[i].sexo);
    printf("INGRESE EL NOMBRE DEL ANIMAL: ");
    gets(regs[i].nombre);
    printf("\nSE HA REGISTRADO CORRECTAMENTE");

}

int buscar(Tanimal regs[], int index, int id)
{
    for (int i = 0; i < index; i++)
    {
        if (id == regs[i].clave)
        {
            return i;
        }
    }
    return -1;
}

void historial(Tanimal reg[], int i)
{
    int clave;
    int id;
    int op;
    printf("INGRESA CLAVE A BUSCAR: ");
    scanf("%d", &clave);
    id = buscar(reg, i, clave);

    if (clave != -1)
    {
        printf("CLAVE: %d\n", reg[id].clave);
        printf("ESPECIE: %s\n", reg[id].especie);
        printf("RAZA: %s\n", reg[id].raza);
        printf("SEXO: %s\n", reg[id].sexo);
        printf("NOMBRE: %s\n", reg[id].nombre);

        printf("\n1) ESPECIE \t2)RAZA\n3)SEXO \t 4)NOMBRE\nINGRESAR OPCION A MODIFICAR 0) NINGUNA: ");
        scanf("%d", &op);
        if (op != 0)
        {
            if (op == 1)
            {
                printf("INGRESE ESPECIE: ");
                gets(reg[id].especie);
                gets(reg[id].especie);

            }
            else if (op == 2)
            {
                printf("INGRESE RAZA: ");
                gets(reg[id].raza);
            }
            else if (op == 3)
            {
                printf("INGRESE SEXO: ");
                gets(reg[id].sexo);
            }
            else if (op == 4)
            {
                printf("INGRESE NOMBRE: ");
                gets(reg[id].nombre);
            }
        }
        else
        {
            printf("EL REGISTRO SE MANTENDRA IGUAL");
        }
    }
}

void consultar (Tanimal vect[],int index)
{
    printf("\nCLAVE   ESPECIE      RAZA     SEXO      NOMBRE\n");
    for(int i =0; i <index;i++)
    {
        printf("%d     %s     %s     %s     %s\n",
        vect[i].clave,vect[i].especie,vect[i].raza,vect[i].sexo,
        vect[i].nombre);
    }
}

void almacenar(Tanimal vect[],int i)
{
    FILE *fa;
    fa =fopen("registros.txt", "w");

    if (fa)
    {
        for (int j = 0; j < i; j++)
        {
            fprintf(fa, "%d %s %s %s %s", 
            vect[j].clave,vect[j].especie,
            vect[j].raza,vect[j].sexo,vect[j].nombre);
        }
        printf("ARCHIVO CREADO EXITOSAMENTE!");
        fclose(fa);
    }
    
}

int leer(char nombre[])
{
    FILE *fa;
    char caracter;

    fa = fopen(nombre, "r");

    if (fa)
    {
        while ((caracter = fgetc(fa)) != EOF)
        {
            putchar(caracter);
        }

        fclose(fa);
    }

    return 1;
}