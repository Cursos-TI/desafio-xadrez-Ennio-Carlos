#include <stdio.h>

/*
 * Desafio: Movimentando as Peças do Xadrez (Nível Novato)
 *
 * Objetivo: Simular o movimento de Torre, Bispo e Rainha
 * utilizando as estruturas de repetição for, while e do-while,
 * uma para cada peça.
 */
int main() {
    // Definindo as constantes para o número de casas a mover, conforme o requisito.
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // Variáveis de controle para os loops (todas do tipo inteiro, conforme requisito).
    int contador_for;      // Para o loop 'for' (Torre)
    int contador_while = 0; // Para o loop 'while' (Bispo)
    int contador_do_while = 0; // Para o loop 'do-while' (Rainha)

    // --- Simulação da Torre (Usando 'for') ---
    // A Torre move-se em linha reta. Simulação: 5 casas para a direita.
    printf("--- Movimento da Torre (usando 'for') ---\n");
    for (contador_for = 1; contador_for <= MOVIMENTOS_TORRE; contador_for++) {
        printf("Casa %d: Direita\n", contador_for);
    }
    printf("Movimento da Torre finalizado.\n\n");


    // --- Simulação do Bispo (Usando 'while') ---
    // O Bispo move-se na diagonal. Simulação: 5 casas na diagonal para cima e à direita.
    printf("--- Movimento do Bispo (usando 'while') ---\n");
    // O loop 'while' continua enquanto o contador for menor que o número de movimentos.
    while (contador_while < MOVIMENTOS_BISPO) {
        contador_while++; // Incrementa antes da impressão para começar em "Casa 1"
        // Para a diagonal, imprimimos a combinação das duas direções.
        printf("Casa %d: Cima, Direita\n", contador_while);
    }
    printf("Movimento do Bispo finalizado.\n\n");


    // --- Simulação da Rainha (Usando 'do-while') ---
    // A Rainha move-se em todas as direções. Simulação: 8 casas para a esquerda.
    printf("--- Movimento da Rainha (usando 'do-while') ---\n");
    // O loop 'do-while' garante que o corpo do loop execute pelo menos uma vez.
    if (MOVIMENTOS_RAINHA > 0) { // Garante que a lógica rode apenas se houver movimentos
        do {
            contador_do_while++; // Incrementa antes da impressão para começar em "Casa 1"
            printf("Casa %d: Esquerda\n", contador_do_while);
        } while (contador_do_while < MOVIMENTOS_RAINHA);
    } else {
        printf("A Rainha nao tem movimentos para simular.\n");
    }
    printf("Movimento da Rainha finalizado.\n\n");

    return 0;
}
