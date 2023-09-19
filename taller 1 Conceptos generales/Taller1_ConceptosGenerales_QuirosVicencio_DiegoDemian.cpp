#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TASA_DESCUENTO 0.1

int menu(){
	int op;
	printf("\t Taller 1. Conceptos generales");
	printf("\nEscoge el ejercicio a ejecutar: ");
	printf("\n1) Definir dos variables de tipo flotante, x y y. Asignarles valores iniciales.");
	printf("\n2) Calcular y mostrar el resultado de la expresion (x + 2 * y) / (3 * x - y).");
	printf("\n3) Usar #define para definir una constante simbulica llamada TASA_DESCUENTO con el valor 0.1. Calcular y mostrar el precio despues de aplicar un descuento del 10% \\ a un producto. ");
	printf("\n4) Pedir al usuario que ingrese un numero entero positivo n. Imprimir los primeros numeros primos.");
	printf("\n5) Implementar una calculadora que pueda realizar operaciones de suma, resta,multiplicacion y division. El usuario debe ingresar dos numeros y el operador.");
	printf("\n6) Implementar un programa que simule un juego de adivinar el numero. El programa debe generar un numero aleatorio entre 1 y 100 y permitir al usuario adivinar hasta que lo acierte. Dar pistas como \"Demasiado alto\" o \"Demasiado bajo""");
	printf("\n7) Pedir al usuario que ingrese un numero. Calcular el factorial del numero utilizando una funcion recursiva.");
	printf("\n8) Definir un arreglo de enteros llamado calificaciones con capacidad para 10 elementos. Pedir al usuario que ingrese 10 calificaciones y almacenarlas en el arreglo. Luego, mostrar las calificaciones ingresadas y sacar el promedio. Y Ordenar el arreglo calificaciones en orden ascendente.");
	printf("\n9) Definir una funcion llamada esPrimo() que tome un numero entero como argumenyo y devuelva 1 si es primo y 0 si no lo es. Usar esta funcion para encontrar los primeros 5 numeros primos");
	printf("\n10) Definir una funcion llamada calcular Potencia() que tome dos argumentos: la base b y el exponente e, y devuelva el resultado de b elevado a la e");
	
	printf("\nEscoge el ejercicio a ejecutar: ");
	scanf("%d",&op);

	return op;
}

int factorial(int n){
	int i,factorial=1;
	
	for(i=n;i>1;i--){
		
		factorial=factorial*i;
		
	}
	printf("Factorial = %d ",factorial);
	
	return factorial;
}

int calcularPotencia(int b,int e){
	int i;
	int potencia;
	potencia=b;
	for(i=1;i<e;i++){

		potencia*=b;
	}

	printf(" %d^%d = %d",b,e,potencia);

	return potencia;
}

void esPrimo(int nom){

	int divs,residuo;

	do
	{
		if (nom%divs==0)
		{
			residuo++;
		}
		divs++;
	} while (divs<=nom);
	
	if (residuo==2)
	{
		printf("El numero %d es primo",nom);
	}
	else{
		printf("El numero %d no es primo",nom);
	}
}


int main(){
	int op;
	op=menu();
	
	switch(op){
		case 1:
			float x,y;
			printf("Declaramos las variables \"x\" y \"y\"como \"float\" y a continuacion ingresaras sus  ");
			scanf("%f %f",&x,&y);
			printf("Los valores de \"x\" y \"y\" son: %.2f %.2f respectivamente",x,y);				
		break;
		case 2:
			float x1,y1,res;
			printf("Ingrese el valor de \"x\" y \"y\": ");
			scanf("%f %f",&x1,&y1);
			res= (x1 + 2 * y1) / (3 * x1 - y1) ;
			printf("el resultado de la expresi�n (x + 2 * y) / (3 * x - y) = %.2f", res);
		break;
		case 3:
			float precio,descuento,preciofinal;
			printf("Ingresar valor del producto: ");scanf("%f",&precio);
			descuento=precio*TASA_DESCUENTO;
			preciofinal=precio-descuento;
			printf("Precio inicial: %.2f\n",precio);
			printf("Descuento: %.2f\n",descuento);
			printf("Precio Final: %.2f",preciofinal);
		break;
		case 4:
			int n,i;
			printf("Ingrese un numero entero positivo: ");scanf("%d",&n);
			printf("Los numeros primos anteriores a tu numero son: ");
			for(i=1;i<n;i++){
				if(i%2==0){
					printf(" %d ",i);
				}
			}
		break;
		case 5:
				int n1,n2,op2,result;
				printf("\t CALCULADORA");
				printf("\n1) Suma");
				printf("\n2) Resta");
				printf("\n3) Multiplicacion");
				printf("\n4) Division");
				printf("\nQue operacion deseas realizar?");
				scanf("%d",&op2);
				printf("Ingresa 2 numeros: ");
				scanf("%d %d",&n1,&n2);
				switch(op2){
					case 1:
						result=n1+n2;
						printf("El resultado de la suma es = %d",result);
					break;
				case 2:
						result=n1-n2;
						printf("El resultado de la resta es = %d",result);
					break;					
				case 3:
						result=n1*n2;
						printf("El resultado de la Multiplicacion es = %d",result);
					break;
				case 4:
						result=n1/n2;
						printf("El resultado de la division es = %d",result);
					break;
				}		
		break;
		case 6:
			int j,m;
			printf("Adivina el numero del 1-100\n");
			
			srand(time(NULL)); 
			m=rand() % 100+1; 
			printf("%d",m);
			do{
				printf("\nIngresa tu numero: ");
				scanf("%d",&j);

				if(j>m){
					printf("alto!");
				}
				else if (m>j){
					printf("bajo!");
				}
			}while(j!=m);	
			printf("Ganaste!");
		break;
		case 7:
			int numero;
			printf("\tFactorial de un numero: ");
			printf("Ingresa tu numero: ");scanf("%d",&numero);
			factorial(numero);
		break;
		case 8:
			int calificiones[10],k,aux;
			printf("Ingresa las calificaciones: ");

			for(int i=0 ; i<10 ; i++){

				scanf("%d",&calificiones[i]);

			}
			int sum,promedio;
			for (i = 0; i < 10; i++)
			{
				sum+=calificiones[i];
			}
			
			promedio=sum/10;


			for ( i = 0; i < 10; i++)
			{
				for (k=i+1; k<10; k++)
				{
					if (calificiones[i]<calificiones[k])
					{
						aux=calificiones[i];
						calificiones[i]=calificiones[k];
						calificiones[k]=aux;
					}

				}

				printf("%d. [%d] ",i+1,calificiones[i]);
				
			}
		break;

		case 9:
			int nom;
			printf("Ingresa un numero y te dire si es o no es primo: ");scanf("%d",&nom);
			esPrimo(nom);
		break;

		case 10:
			int b,e;
			printf("Ingrese el numero base: ");scanf("%d",&b);
			printf("Ingrese el exponente: ");scanf("%d",&e);

			calcularPotencia(b, e);
			
		break;
	}
	
	
	
	return 0;
}
