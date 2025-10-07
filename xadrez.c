#include <stdio.h>

// --- Declaração das Funções Recursivas (Torre, Bispo, Rainha) ---

// Simula o movimento da Torre recursivamente.
void moverTorreRecursivo(int casas_restantes, int passo_atual) {
    // Caso base: A recursão para quando não há mais casas para mover.
    if (casas_restantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento (Torre: Direita)
    printf("Casa %d: Direita\n", passo_atual);

    // Chamada recursiva: Move para a próxima casa.
    moverTorreRecursivo(casas_restantes - 1, passo_atual + 1);
}


// Simula o movimento do Bispo usando Recursividade e Loops Aninhados.
// Movimento: 5 casas na diagonal para cima e à direita.
void moverBispoRecursivo(int casas_restantes, int passo_atual) {
    // Constantes para os loops aninhados
    const int MOV_VERTICAL = 1; // 1 passo Cima
    const int MOV_HORIZONTAL = 1; // 1 passo Direita

    // Caso base
    if (casas_restantes <= 0) {
        return;
    }

    // Lógica do Bispo com Loops Aninhados (Requisito Mestre)
    // Loop Externo: Vertical
    for (int v = 1; v <= MOV_VERTICAL; v++) {
        // Loop Interno: Horizontal
        for (int h = 1; h <= MOV_HORIZONTAL; h++) {
            // Ação: Imprime o movimento de diagonal
            printf("Casa %d: Cima, Direita\n", passo_atual);
        }
    }

    // Chamada recursiva: Move para a próxima casa na diagonal.
    moverBispoRecursivo(casas_restantes - 1, passo_atual + 1);
}

// Simula o movimento da Rainha recursivamente.
void moverRainhaRecursivo(int casas_restantes, int passo_atual) {
    // Caso base
    if (casas_restantes <= 0) {
        return;
    }

    // Ação: Imprime o movimento (Rainha: Esquerda)
    printf("Casa %d: Esquerda\n", passo_atual);

    // Chamada recursiva
    moverRainhaRecursivo(casas_restantes - 1, passo_atual + 1);
}

// ------------------------------------------------------------------
// --- Função Principal ---
// ------------------------------------------------------------------
int main() {
    // Constantes para os movimentos (usadas nas chamadas recursivas)
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    const int MOVIMENTOS_CAVALO_CIMA = 2;
    const int MOVIMENTOS_CAVALO_DIREITA = 1;
    
    // ------------------------------------------------------------------
    // --- Simulação da Torre (Usando Recursividade) ---
    printf("--- Movimento da Torre (usando Recursividade) ---\n");
    moverTorreRecursivo(MOVIMENTOS_TORRE, 1);
    printf("Movimento da Torre finalizado.\n\n");

    // ------------------------------------------------------------------
    // --- Simulação do Bispo (Usando Recursividade + Loops Aninhados) ---
    printf("--- Movimento do Bispo (usando Recursividade e Loops Aninhados) ---\n");
    moverBispoRecursivo(MOVIMENTOS_BISPO, 1);
    printf("Movimento do Bispo finalizado.\n\n");

    // ------------------------------------------------------------------
    // --- Simulação da Rainha (Usando Recursividade) ---
    printf("--- Movimento da Rainha (usando Recursividade) ---\n");
    moverRainhaRecursivo(MOVIMENTOS_RAINHA, 1);
    printf("Movimento da Rainha finalizado.\n\n");

    // ------------------------------------------------------------------
    // --- Simulação do Cavalo (Usando Loops Aninhados Complexos) ---
    // Movimento: Duas casas para cima e uma para a direita.
    printf("--- Movimento do Cavalo (usando Loops Aninhados Complexos) ---\n");

    // Variáveis de controle
    int passo_cavalo = 0;
    int max_passos = MOVIMENTOS_CAVALO_CIMA + MOVIMENTOS_CAVALO_DIREITA;
    
    // Loop Externo: Controla a fase do movimento (Vertical ou Horizontal)
    for (int fase = 1; fase <= 2; fase++) { // Fase 1: Vertical (Cima), Fase 2: Horizontal (Direita)

        int contador_fase; // Variável de controle do loop interno

        // Se for a Fase 1 (Movimento Vertical - Cima)
        if (fase == 1) {
            
            // Loop Interno: Controla o número de passos na fase.
            for (contador_fase = 1; contador_fase <= MOVIMENTOS_CAVALO_CIMA; contador_fase++) {
                passo_cavalo++;
                printf("Casa %d: Cima\n", passo_cavalo);
                
                // Condição de interrupção (exemplo de 'break' em uso)
                if (passo_cavalo == max_passos) {
                    break;
                }
            }
        } 
        // Se for a Fase 2 (Movimento Horizontal - Direita)
        else {
            
            // Loop Interno (do-while para variar): Controla o passo único horizontal.
            contador_fase = 0;
            do {
                contador_fase++;
                passo_cavalo++;
                printf("Casa %d: Direita\n", passo_cavalo);
                
                // Exemplo de 'continue' (demonstrativo da complexidade)
                if (passo_cavalo % 2 == 0) {
                   continue;
                }

            } while (contador_fase < MOVIMENTOS_CAVALO_DIREITA);
        }
        
        // Uso de 'break' para sair do loop externo após a segunda fase ser concluída.
        if (fase == 2) {
            break;
        }
    }

    printf("Movimento do Cavalo finalizado.\n");

    return 0;
}
