#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*Escribir un programa que elija al azar un número entre uno y mil. Pedir al usuario que ingrese un número
intentando adivinar. Indicar si el número correcto es menor o mayor al número ingresado. Darle al usuario un
número limitado de preguntas, cinco por ejemplo. ¿Cuántas preguntas necesita el usuario para poder adivinar
siempre el número?*/

int main () {
    srand (time(NULL));

    int num = rand () % 1000 + 1; 

    puts("empieza el juego muajaja");
    puts("adivina el numero que esta entre 1 y 1000, te voy a ir ayudando y tenes 5 intentos");

    //printf("%d\n" , num);
    int i = 0;

    for( i ; i < 5 ; i++){
        int intento;
        scanf("%d" , &intento);

        if(intento == num){
            puts("GANASTEE SOS CRACK");
            break;

        } 
        else if (intento > num){
            puts("es mas chiquito el numero");
        }
         else if (intento < num){
            puts("es mas grande el numero");
        }  
    }

     if(i == 5){
        puts("perdiste rey segui intentando");
     }
    return 0;
}