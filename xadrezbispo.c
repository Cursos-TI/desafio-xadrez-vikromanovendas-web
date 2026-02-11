#include <stdio.h>

int main(){

    int i = 1; // mover a bispo 5 casas para a cima e direita (while)

    while (i <= 5){ // condição
        printf("Cima\n"); // imprime a direção do movimento
        printf("Direita\n"); // imprime a direção do movimento
        i ++; //incremento
    }
    
    return 0;
}