// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h> // Biblioteca para funções de entrada e saída

int main() {
    
    printf("--- Desafio MateCheck - NÍVEL NOVATO ---\n\n");

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    // Variáveis que definem quantos passos cada peça dará
    int passos_bispo = 5;
    int passos_torre = 5;
    int passos_rainha = 8;


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("--- Movimento do Bispo (%d passos) ---\n", passos_bispo);
    
    // usar 'while' para o Bispo
    int contador_bispo = 0; // Inicia o contador
    
    while (contador_bispo < passos_bispo) { // Condição: "Enquanto o contador for menor que os passos"
        printf("Cima, Direita\n");
        contador_bispo++; // Incrementa o contador para o loop não ser infinito
    }


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("\n--- Movimento da Torre (%d passos) ---\n", passos_torre);
    
    //'for' para a Torre, que é ótimo para contagens definidas
    int i; // Variável de controle do loop
    
    // O loop 'for' faz tudo em uma linha:
    // 1. Inicia (i=0); 2. Testa a condição (i < passos_torre); 3. Incrementa (i++)
    for (i = 0; i < passos_torre; i++) {
        printf("Direita\n");
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("\n--- Movimento da Rainha (%d passos) ---\n", passos_rainha);
    
    //'do-while' para a Rainha, para praticar a terceira estrutura
    int contador_rainha = 0; // Inicia o contador
    
    do {
        // O 'do' (fazer) garante que o bloco execute pelo menos UMA vez
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador

    } while (contador_rainha < passos_rainha); // A condição é verificada no final


    // =======================================================
    // Nível Aventureiro - Movimentação do Cavalo
    // =======================================================
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // REQUISITO: Mover 2 "Baixo" e 1 "Esquerda", usando um 'for' e um 'while' aninhados.
    
    printf("\n--- Nível Aventureiro (Movimento do Cavalo) ---\n");

    // Definindo as variáveis pedidas no requisito
    int passos_vertical = 2;
    int passos_horizontal = 1;
    
    int v; // Variável de controle do loop 'for' (vertical)
    int h = 0; // Variável de controle do loop 'while' (horizontal)
    
    // 1. Loop 'for' (Obrigatório) para os passos verticais
    // Usei v=1; v <= passos_vertical para a contagem ficar mais natural (passo 1, passo 2)
    for (v = 1; v <= passos_vertical; v++) {
        
        printf("Baixo\n"); // Executa o movimento vertical
        
        // 2. Loop aninhado (Obrigatório, 'while')
        // Quando o loop 'for' chegar no seu ÚLTIMO passo (v == 2),
        // ele executa o loop interno para fazer o movimento horizontal.
        if (v == passos_vertical) {
            
            while (h < passos_horizontal) {
                printf("Esquerda\n"); // Executa o movimento horizontal
                h++; // Incrementa o contador do loop 'while'
            }
        }
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // (Vamos fazer este depois)
    printf("\n--- Nível Mestre (A implementar) ---\n");

    return 0; // Indica que o programa terminou com sucesso
}