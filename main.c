#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main()
{
    int edad;
    int nota;
    int legajo;

    edad=pedirEntero("\ningrese edad: ");
    printf("%d", &edad);
    nota=pedirEntero("\ningrese nota: ");
    printf("%d", &nota);
    legajo=pedirEntero("\ningrese legajo: ");
    printf("%d", &legajo);
    return 0;
}

