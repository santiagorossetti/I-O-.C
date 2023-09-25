#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*Escribir un programa que envíe a salida estándar una cantidad 𝑛 de números aleatorios entre 𝑎 y 𝑏. Ingresar los
parámetros 𝑛, 𝑎 y 𝑏 como argumentos de línea de comandos.*/

int main (int argc, char *argv[]) {

        srand(time(NULL));

        int n = atoi(argv[1]);
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);

        for(int i = 0 ; i < n ; i++){
            int num = rand () % (b - a + 1) + a;
            printf("%d\t" , num);
        }
        
        

    return 0;
}