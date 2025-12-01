#include <stdio.h>

int main() {

    // Valores constantes definidos no código
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    /* =========================================================
       1) MOVIMENTO DA TORRE → 5 casas para a direita
       Usando estrutura de repetição: FOR
       ========================================================= */
    printf("Movimentando a TORRE:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // espaço entre peças

    printf("Movimentando o BISPO:\n");

    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");  // diagonal = duas direções
        contadorBispo++;
    }

    printf("\n");

    printf("Movimentando a RAINHA:\n");

    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    return 0;
}
