#include <stdio.h>

int main() {

    /* -------------------------------
       Movimento da TORRE
       5 casas para a direita
       usando FOR
    --------------------------------*/
    int casas_torre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }


    /* -------------------------------
       Movimento do BISPO
       5 casas na diagonal (cima e direita)
       usando WHILE
    --------------------------------*/
    int casas_bispo = 5;
    int contador_bispo = 0;

    printf("\nMovimento do Bispo:\n");

    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }


    /* -------------------------------
       Movimento da RAINHA
       8 casas para a esquerda
       usando DO WHILE
    --------------------------------*/
    int casas_rainha = 8;
    int contador_rainha = 0;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);


    return 0;
}