#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escribir un programa en C que cuente la cantidad de caracteres ingresados por entrada estándar

int main () {

    int contador = 0;
    int caracter;

    while ((caracter = getchar()) != EOF ){
        if(caracter != '\n' ){
            contador++;
        }
        
    }
    printf("\n la cantidad de caracteres es %d \n" , contador);

    return 0;
}