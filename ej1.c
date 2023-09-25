#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
int n;
int numero;
int suma = 0; 

puts("Introduce la cantidad de números que deseas sumar: ");
scanf("%d" , &n);

printf("ahora introduci que numeros queres sumar de los %d numeros que queres sumar\n" , n);


for (int i = 0 ; i < n ; i++){
    scanf("%d" , &numero);
    suma += numero;

}


printf("la suma de los %d numeros es: %d" , n , suma);

return 0;
}