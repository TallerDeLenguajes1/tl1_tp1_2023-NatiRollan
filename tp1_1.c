#include <stdio.h>

int main()
{
    int a, *punt;

    a= 5;
    punt = &a;
    
    printf("Hola mundo");

    printf("\nContenido del puntero: %d", *punt);
    printf("\nDireccion de memoria almacenada por el puntero: %p", punt);
    printf("\nDireccion de memoria de la variable: %p", &a);
    printf("\nDireccion de memoria del puntero: %p", &punt);
    printf("\nTamanio de memoria utilizada por la variable a: %d", sizeof(a));

    return 0;

}