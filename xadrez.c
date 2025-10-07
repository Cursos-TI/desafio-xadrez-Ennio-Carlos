#include <stdio.h>

/*
 * Desafio: Movimentando as Peças do Xadrez (Nível Aventureiro)
 *
 * Objetivo: Simular o movimento de Torre, Bispo e Rainha (usando for, while e do-while)
 * e adicionar o movimento do Cavalo, obrigatoriamente usando loops aninhados
 * (um for e outro while/do-while).
 */
int main() {
    // --- Constantes para as peças do Nível Novato ---
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // --- Variáveis de controle para os loops (todas do tipo inteiro) ---
    int contador_for;      // Para o loop 'for' (Torre)
    int contador_while = 0; // Para o loop 'while' (Bispo)
    int contador_do_while = 0; // Para o loop 'do-while' (Rainha)

    // --- Simulação da Torre (Usando 'for') ---
    // Simulação: 5 casas para a direita.
    printf("--- Movimento da Torre (usando 'for') ---\n");
    for (contador_for = 1; contador_for <= MOVIMENTOS_TORRE; contador_for++) {
        printf("Casa %d: Direita\n", contador_for);
    }
    printf("Movimento da Torre finalizado.\n\n");


    // --- Simulação do Bispo (Usando 'while') ---
    // Simulação: 5 casas na diagonal para cima e à direita.
    printf("--- Movimento do Bispo (usando 'while') ---\n");
    while (contador_while < MOVIMENTOS_BISPO) {
        contador_while++;
        // Para a diagonal, imprimimos a combinação das duas direções.
        printf("Casa %d: Cima, Direita\n", contador_while);
    }
    printf("Movimento do Bispo finalizado.\n\n");


    // --- Simulação da Rainha (Usando 'do-while') ---
    // Simulação: 8 casas para a esquerda.
    printf("--- Movimento da Rainha (usando 'do-while') ---\n");
    if (MOVIMENTOS_RAINHA > 0) {
        do {
            contador_do_while++;
            printf("Casa %d: Esquerda\n", contador_do_while);
        } while (contador_do_while < MOVIMENTOS_RAINHA);
    } else {
        printf("A Rainha nao tem movimentos para simular.\n");
    }
    printf("Movimento da Rainha finalizado.\n\n");


    // ------------------------------------------------------------------
    // --- Lógica do Cavalo (Nível Aventureiro) ---
    // ------------------------------------------------------------------
    printf("\n"); // Separa o movimento do Cavalo dos anteriores

    // --- Constantes para o Cavalo ---
    const int MOVIMENTOS_CAVALO_VERTICAL = 2; // Duas casas para Baixo
    const int MOVIMENTOS_CAVALO_HORIZONTAL = 1; // Uma casa para Esquerda
    
    // Variável para rastrear o número total de passos no movimento "L" (de 1 a 3)
    int total_passos = 0;
    
    printf("--- Movimento do Cavalo (usando loops ANINHADOS: for, while, do-while) ---\n");

    // Loop Externo: 'for'. Usado para encapsular a ação única do movimento "L"
    // e garantir o requisito de aninhamento com o 'for'.
    for (int i = 0; i < 1; i++) { 

        // Loop Interno 1: 'while'. Simula a parte longa do movimento (2 casas para Baixo).
        int contador_vertical = 0;
        while (contador_vertical < MOVIMENTOS_CAVALO_VERTICAL) {
            contador_vertical++;
            total_passos++;
            // Saída: "Baixo"
            printf("Casa %d: Baixo\n", total_passos);
        }

        // Loop Interno 2: 'do-while'. Simula a parte curta do movimento (1 casa para Esquerda).
        int contador_horizontal = 0;
        do {
            contador_horizontal++;
            total_passos++;
            // Saída: "Esquerda"
            printf("Casa %d: Esquerda\n", total_passos);
        } while (contador_horizontal < MOVIMENTOS_CAVALO_HORIZONTAL);
    }
    
    printf("Movimento do Cavalo finalizado.\n");

    return 0;
}
