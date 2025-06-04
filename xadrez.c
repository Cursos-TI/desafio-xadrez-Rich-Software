#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a Direita
    // Utiliza estrutura de repetição "for"
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima Direita)
    // Utiliza estrutura de repetição "while"
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a Esquerda
    // Utiliza estrutura de repetição "do-while"
    int k = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}