#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int numero;
    printf("ingresa cualquier numero menos un cero");
    scanf("%d" , &numero);

    if (numero == 0){
        printf("pero te dije que no ingreses un 0");
    } else {
        printf("muy bien");
    }



return 0;
}