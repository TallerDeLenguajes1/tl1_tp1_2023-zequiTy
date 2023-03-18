#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

printf("hola mundo\n");

int *punt;

int f = 3;

punt = &f;

//punt = malloc(f*sizeof(int));

printf("El contenido del puntero es %d\n", *punt);
printf("La direccion almacenada por el puntero es %d\n", punt);
printf("La direccion de memoria de la variable es %d\n", &f);
printf("La direccion de memoria del puntero es %d\n", &punt);
printf("El tamaño de memoria utilizado por la variable %d es %d\n", f, sizeof(f));

    return 0;
}