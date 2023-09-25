#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escribir un programa en C que sume todos los números enteros que ingresen por entrada estándar. Finalizar de leer números al encontrar EOF (end of file). Imprimir la suma.


int main () {
    
    int numero = 0;
    int suma = 0;

printf("ingresa los numeros pa:\n");

    while(scanf("%d" , &numero) != EOF) {
        suma += numero;
    }
    
    printf("aca estan tus numeros ñeri %d" , suma);

    return 0;
}