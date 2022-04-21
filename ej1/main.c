#include <stdio.h>

int main () {
    char nombre[20];
    int edad;

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Hola, %s. Veo que tenes %d anios", nombre, edad);

    return(0);
}