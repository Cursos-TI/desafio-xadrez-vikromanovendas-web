#include <stdio.h>

int main (){
    int i = 1;  // mover a torre 5 casas para a direita (do-while)

    do{ // Entrada ( 1x pelo menos)
        printf("Direita\n"); // imprime a direção do movimento
        i ++; // Incremento
            } while (i <= 5); //Condição
            return 0;
}