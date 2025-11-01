// Desafio de Xadrez
// Este código implementa os Níveis Novato, Aventureiro e Mestre.
// O objetivo é utilizar estruturas de repetição e funções 
// (incluindo recursão e loops complexos) para simular
// os movimentos das peças.

#include <stdio.h> // Biblioteca para funções de entrada e saída

/*
 * =======================================================
 * NÍVEL MESTRE: FUNÇÕES RECURSIVAS
 * =======================================================
 * Estas funções substituem os loops simples do Nível Novato.
 */

/**
 * @brief (Recursiva) Simula o movimento do Bispo.
 * A função se chama até que 'passos' chegue a 0.
 * @param passos O número de passos restantes.
 */
void moverBispoRecursivo(int passos) {
    // Caso Base (Condição de Parada): Se não há mais passos, pare.
    if (passos <= 0) {
        return; 
    }
    
    // Ação: Imprime o movimento
    printf("Cima, Direita\n");
    
    // Chamada Recursiva: Chama a si mesma, mas com um passo a menos.
    moverBispoRecursivo(passos - 1);
}

/**
 * @brief (Recursiva) Simula o movimento da Torre.
 * @param passos O número de passos restantes.
 */
void moverTorreRecursivo(int passos) {
    // Caso Base
    if (passos <= 0) {
        return;
    }
    // Ação e Chamada Recursiva
    printf("Direita\n");
    moverTorreRecursivo(passos - 1);
}

/**
 * @brief (Recursiva) Simula o movimento da Rainha.
 * @param passos O número de passos restantes.
 */
void moverRainhaRecursivo(int passos) {
    // Caso Base
    if (passos <= 0) {
        return;
    }
    // Ação e Chamada Recursiva
    printf("Esquerda\n");
    moverRainhaRecursivo(passos - 1);
}


/*
 * =======================================================
 * FUNÇÃO PRINCIPAL
 * =======================================================
 */

int main() { // <-- A função 'main' começa aqui
    
    // --- Nível Novato (Substituído por Recursão) ---
    // A lógica original de while/for/do-while foi
    // substituída pelas chamadas de função do Nível Mestre.
    
    printf("--- Desafio MateCheck - NÍVEL MESTRE ---\n\n");

    // Variáveis que definem quantos passos cada peça dará
    int passos_bispo = 5;
    int passos_torre = 5;
    int passos_rainha = 8;


    // Implementação de Movimentação do Bispo (Recursivo)
    // REQUISITO MESTRE: Substituído por função recursiva.
    printf("--- Movimento do Bispo (%d passos) [Recursivo] ---\n", passos_bispo);
    moverBispoRecursivo(passos_bispo);


    // Implementação de Movimentação da Torre (Recursivo)
    // REQUISITO MESTRE: Substituído por função recursiva.
    printf("\n--- Movimento da Torre (%d passos) [Recursivo] ---\n", passos_torre);
    moverTorreRecursivo(passos_torre);


    // Implementação de Movimentação da Rainha (Recursivo)
    // REQUISITO MESTRE: Substituído por função recursiva.
    printf("\n--- Movimento da Rainha (%d passos) [Recursivo] ---\n", passos_rainha);
    moverRainhaRecursivo(passos_rainha); // <-- Seu erro estava aqui. O CÓDIGO CONTINUA ABAIXO.


    // --- Nível Aventureiro (Substituído por Loops Complexos) ---
    // REQUISITO MESTRE: Aprimorado para "Cima, Cima, Direita"
    // e usando loops complexos com 'continue' e 'break'.
    
    printf("\n--- Nível Mestre (Movimento do Cavalo) ---\n");

    // Definindo as variáveis para o movimento em "L"
    int passos_vertical = 2;
    int passos_horizontal = 1;
    
    int v; // Variável de controle do loop 'for' (vertical)
    int h = 0; // Variável de controle do loop 'while' (horizontal)
    
    // 1. Loop 'for' para os 2 passos verticais
    for (v = 1; v <= passos_vertical; v++) {
        
        printf("Cima\n"); // Executa o movimento vertical
        
        // REQUISITO MESTRE: Uso do 'continue'
        // Se NÃO for o último passo vertical (ou seja, se v for 1),
        // pule o resto do loop e vá para a próxima iteração do 'for'.
        if (v != passos_vertical) {
            continue; 
        }
        
        // 2. Loop aninhado 'while' (só executa quando v == 2)
        // Este bloco só é alcançado no último passo do 'for'.
        while (h < passos_horizontal) {
            printf("Direita\n"); // Executa o movimento horizontal
            h++; 
            
            // REQUISITO MESTRE: Uso do 'break'
            // Demonstra como sair do loop 'while' assim que a condição for
            // satisfeita, sem precisar esperar a próxima verificação.
            break; 
        }
    }


    // --- Nível Mestre (Implementações Adicionais) ---
    
    // REQUISITO MESTRE: Bispo com Loops Aninhados
    // "utilizando o loop mais externo para o movimento vertical, 
    // e o mais interno para o movimento horizontal."
    
    printf("\n--- Nível Mestre (Bispo com Loops Aninhados) ---\n");
    
    int v_bispo; // Loop externo (vertical)
    int h_bispo; // Loop interno (horizontal)
    
    // O loop externo controla os 5 passos na vertical
    for (v_bispo = 0; v_bispo < passos_bispo; v_bispo++) {
        
        // O loop interno controla os 5 passos na horizontal
        for (h_bispo = 0; h_bispo < passos_bispo; h_bispo++) {
            
            // A diagonal verdadeira ocorre quando o passo vertical
            // é igual ao passo horizontal (ex: [0,0], [1,1], [2,2]).
            if (v_bispo == h_bispo) {
                // Imprime o movimento e sai do loop *interno*.
                // Não precisamos continuar o loop 'h_bispo'
                // depois que achamos a posição diagonal.
                printf("Cima, Direita\n");
                break; // Sai do loop 'for' interno (h_bispo)
            }
        }
    }

    printf("\n--- Desafio Mestre Concluído ---\n");

    return 0; // Indica que o programa terminou com sucesso

} 