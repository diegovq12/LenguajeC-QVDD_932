#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	int	nom,residuo,divs;
	printf("Ingresa un numero y te dire si es o no es primo: ");scanf("%d",&nom);
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
	return 0;
}
