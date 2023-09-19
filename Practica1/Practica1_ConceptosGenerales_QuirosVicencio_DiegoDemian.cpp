#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu(){
	int op;
	printf("\t Taller 1. Conceptos generales");
	printf("\n1) Calculadora basica.");
	printf("\n2) Juego: Adivina el numero!.");
	printf("\n3) Calculadora Areas ");
	printf("\nEscoge el ejercicio a ejecutar: ");
}
int main(){

    int op;
    menu();
    scanf("%d",&op);

    switch (op)
    {
    case 1:
			int n1,n2,result;
			int op2;
		while(op2!=5){
				printf("\t CALCULADORA");
				printf("\n1) Suma");
				printf("\n2) Resta");
				printf("\n3) Multiplicacion");
				printf("\n4) Division");
				printf("\n5) Salir");	
				printf("\nQue operacion deseas realizar?");
				scanf("%d",&op2);
				
				switch(op2){
				case 1:
					printf("Ingresa 2 numeros: ");
					scanf("%d %d",&n1,&n2);
					result=n1+n2;
					printf("El resultado de la suma es = %d\n",result);
				break;
				case 2:
					printf("Ingresa 2 numeros: ");
					scanf("%d %d",&n1,&n2);
					result=n1-n2;
					printf("El resultado de la resta es = %d\n",result);
				break;					
				case 3:
					printf("Ingresa 2 numeros: ");
					scanf("%d %d",&n1,&n2);
					result=n1*n2;
					printf("El resultado de la Multiplicacion es = %d\n",result);
				break;
				case 4:
					printf("Ingresa 2 numeros: ");
					scanf("%d %d",&n1,&n2);
					result=n1/n2;
					printf("El resultado de la division es = %d\n",result);
			break;
			}
		}
		printf("Gracias por usar!");
		break;
        case 2:
        int j,m,intentos;
		printf("Adivina el numero del 1-100\n");
		srand(time(NULL)); 
		m=rand() % 100+1; 
		do{
			printf("\nIngresa tu numero: ");
			scanf("%d",&j);
				if(j>m){
				printf("alto!");
			}
			else if (m>j){
				printf("bajo!");
			}
			intentos++;
		}while(j!=m);	
		if(intentos<10){
			printf("\nGanaste! en %d intentos ERES EL MEJOR",intentos);
		}
		else{
			printf("\nGanaste! en %d intentos buuu caca",intentos);
		}
		system("pause()");  
    break;
    case 3:
         int op3,area;
		printf("\t CALCULADORA AREAS");
		printf("\n1) Triangulo");
		printf("\n2) Circulo");
		printf("\n3) Rectangulo");
		printf("\n4) Cubo");
        printf("\n5) Cilindro");
		printf("\nQue operacion deseas realizar?");
		scanf("%d",&op3);
		
		switch(op3){
		case 1:
			printf("Dame la base y la altura: ");scanf("%d %d",&n1,&n2);
            area=(n1*n2)/2;
            printf("El area de el Triangulo es = %d",area);
		break;
		case 2:
            printf("Dame el radio: ");scanf("%d",&n1);
            area=3.1416*(n1*n1);
			printf("El Area del circulo es = %d",result);
		break;					
		case 3:
            printf("Dame la base y la altura: ");scanf("%d %d",&n1,&n2);
			area=n1*n2;
			printf("El area del Rectangulo es = %d",area);
		break;
		case 4:
            printf("Dame la medida del lado de tu cubo: ");scanf("%d",&n1);
			area=n1*n1*n1;
			printf("El Area de el cubo es = %d",area);
	    break;
        case 5:
            printf("Dame el radio y la altura: ");scanf("%d %d",&n1,&n2);
            area= ((3.1416*2)*n1*n2)+((2*3.1416)*(n1*n1));
            printf("El Area de el cilindro es = %d",area);
        break;
        }
    break;
    default:
        break;
    }

    return 0;
}
