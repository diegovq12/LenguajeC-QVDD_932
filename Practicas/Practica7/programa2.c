#include <stdio.h>
#include <string.h>

int main() {
    // Inicializamos el arreglo de palabras
    char *palabras[] = {"manzana", "banana", "cereza", "uva", "naranja"};
    //obtenemos el tamanio del vector
    int tamano = sizeof(palabras) / sizeof(palabras[0]);

    // Ordenar las palabras en orden alfabético
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = i + 1; j < tamano; j++) {
            if (strcmp(palabras[i], palabras[j]) > 0) {
                // Ordenamos mediante el metodo de la burbuja
                char *temp = palabras[i];
                palabras[i] = palabras[j];
                palabras[j] = temp;
            }
        }
    }

    // Imprimir las palabras ordenadas
    for (int i = 0; i < tamano; i++) {
        printf("%s\n", palabras[i]);
    }

    return 0;
}
