#include <stdio.h>

/* protótipos */
void torre();
void bispo();
void rainha();
void cavalo();

int main (){

    printf("\n--- TORRE ---\n");
    torre();

    printf("\n--- BISPO ---\n");
    bispo();

    printf("\n--- RAINHA ---\n");
    rainha();

    printf("\n--- CAVALO ---\n");
    cavalo();

    return 0;
}

/* -------- TORRE -------- */

void torre (){
    int i = 1;  // mover a torre 5 casas para a direita (do-while)

    do{ // Entrada ( 1x pelo menos)
        printf("Direita\n"); // imprime a direção do movimento
        i ++; // Incremento
    } while (i <= 5); //Condição
}

/* -------- BISPO -------- */

void bispo(){

    int i = 1; // mover a bispo 5 casas para a cima e direita (while)

    while (i <= 5){ // condição
        printf("Cima\n"); // imprime a direção do movimento
        printf("Direita\n"); // imprime a direção do movimento
        i ++; //incremento
    }
}

/* -------- RAINHA -------- */

void rainha (){

    // mover a rainha 8 casas para a esquerda (for-while)
    for (int i = 0; i < 8; i++){
        printf("esquerda\n"); // imprime a direção do movimento
    }
}

/* -------- CAVALO -------- */

void cavalo (){
    int movimentoCompleto = 1; // Flag para controlar  o movimento em 'L'

    while (movimentoCompleto --)
    {
        for (int i = 0; i < 2; i++){
            printf("Cima\n"); // imprime "Cima" duas vezes
        }
        printf("Direita\n"); // imprime "Direita" uma vez
    }
}