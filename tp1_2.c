#include <stdio.h>

int cuadradoNumero (int num);
void numCuadrado (int num);
void invertir(int a, int b);
void orden(int a, int b);

int main()
{
    int cuadradoNum, num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    cuadradoNum = cuadradoNumero(num);
    printf("El cuadrado de %d es: %d", num, cuadradoNum);

    //tipo void
    numCuadrado(num);

    //direccion y contenido de la variable
    int *punt;
    punt = &num;
    printf("\nDireccion de la variable: %p", punt);
    printf("\nContenido de la variable: %d", *punt);

    //Dado dos parámetros de entrada, deberá invertir los valores entre ambos
    int a, b;

    printf("\nIngrese 2 valores: ");
    scanf("%d %d", &a, &b);

    invertir(a, b);

    //Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en a el menor y en b el mayor
    int c, d;

    printf("\nIngrese 2 valores: ");
    scanf("%d %d", &c, &d);

    orden(c, d);

    return 0;

}

int cuadradoNumero (int num)
{
    return (num*num);
}

void numCuadrado (int num)
{
    int aux;
    aux = num * num;

    printf("\nEl cuadrado de %d es: %d", num, aux);
}

void invertir(int a, int b)
{
    int temp, *punt_num;

    punt_num = &a;
    temp = *punt_num;
    *punt_num = b;
    b = temp;

    printf("\nEl valor nuevo de a es %d y el valor de b es %d", a, b);
}

void orden(int a, int b)
{
    int temp;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    
    printf("El valor mas chico es %d y el valor mas grande es %d", a, b);
}