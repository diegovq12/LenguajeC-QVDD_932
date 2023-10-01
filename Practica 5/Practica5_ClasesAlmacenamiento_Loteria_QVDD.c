/*
    Nombre del archivo: ClasesDeAlmacenamiento_QVDD.c
    Autor: Quiros Vicencio Diego Demian
    Fecha de creación: 30/09/23
    Descripción: Juego de loteria y carrera de coches.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Prototipos de las funciones
int msges (void);
void menu (void);

int generarNumeroLoteria (void);
void loteria (void);
int generarVelocidad (void);
void iniciarCarrera (void);
//*****************************
int main()
{
    menu();
    return 0;
}

//Desarrollo de las funciones

//Funcion que genera un numero random entre 1 y 100
int generarNumeroLoteria(void)
{
    return rand()%100+1;
 
}

//Funcion que simula un juego de loteria utilizando
//variables estaticas y automaticas
void loteria (void)
{
    static int numeroGanador=0;
    //se genera el numero ganador mediante la
    //funcion generarNumeroLoteria
    if(numeroGanador==0)
    {
        numeroGanador=generarNumeroLoteria();
    }

    //Generando el numero del usuario utilizando
    //variable automatica
    auto int numeroUsuario=generarNumeroLoteria();
    printf("\nNumero ganador: %d\n",numeroGanador);
    printf("\nNumero del usuario: %d\n",numeroUsuario);

    if (numeroGanador==numeroUsuario)
    {
        printf("Felicidades, ganaste la loteria!!.");
    }
    else
    {
        printf("Lo siento, no ganaste esta vez.");
    }
}

int msges(void)
{
    int op;
    printf("\n \tM E N U\n");
    printf("1- Juego de Loteria\n");
    printf("2- Carrera de Coches\n");
    printf("0- Salir\n");
    printf("Ingrese opcion a utilizar:\n");
    scanf("%d",&op); 
    return op;
}

void menu (void)
{
    srand(time(NULL));
    int op;
    do{
        op=msges();
        
        switch (op)
        {
        case 1:
            loteria();
            break;
        case 2:
            iniciarCarrera();
            break;
        case 0:
            printf("Gracias por usar!");
            break;
        default:
            break;
        }  
    } while (op!=0);
}

//funcion que genera un valor aleatorio entre 100 y 200
int generarVelocidad (void)
{
    return rand() % 101 + 100;
}

void iniciarCarrera (void)
{
    //Asignacion de nombre a las variables
    char coche1[15] = "Ferrari";
    char coche2[15] = "Red Bull";
    char coche3[15] = "Honda";

    //Obtienen una velocidad a partir de la funcion
    //generarVelocidad()
    register int vel_Coche1=generarVelocidad();
    register int vel_Coche2=generarVelocidad();
    register int vel_Coche3=generarVelocidad();

    int distancia = 1000;
    //Calcular el tiempo que les tomara a los coches recorrer la pista
    float tiempoC1= (float) distancia/vel_Coche1;
    float tiempoC2= (float) distancia/vel_Coche2;
    float tiempoC3= (float) distancia/vel_Coche3;

    printf("Tiempo %s : %.2f\n",coche1,tiempoC1);
    printf("Tiempo %s : %.2f\n",coche2,tiempoC2);
    printf("Tiempo %s : %.2f\n",coche3,tiempoC3);

    //Comparar los tiempos para determinar un ganador
    //Gana el que haga menos tiempo
    if (tiempoC1<tiempoC2)
    {
        if (tiempoC1<tiempoC3)
        {
            //ganaC1
            printf("Gana %s! Con un tiempo de %f segundos\n",coche1,tiempoC1);

        }
        else
        {
            //ganaC3
            printf("Gana %s! Con un tiempo de %f segundos\n",coche3,tiempoC3);

        }
    }
    else
    {
        if (tiempoC2<tiempoC3)
        {
            //GanaC2
            printf("Gana %s! Con un tiempo de %f segundos\n",coche2,tiempoC2);
        }
        else
        {
            //ganaC3
            printf("Gana %s! Con un tiempo de %f segundos\n",coche3,tiempoC3);
        }
    }
    
}