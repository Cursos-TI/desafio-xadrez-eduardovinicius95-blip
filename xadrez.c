#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    
    // Vamos usar 'while' para o Bispo
    int contador_bispo = 0; // Inicia o contador
    
    while (contador_bispo < passos_bispo) { // Condição: "Enquanto o contador for menor que os passos"
        printf("Cima, Direita\n");
        contador_bispo++; // Incrementa o contador para o loop não ser infinito
    }


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("\n--- Movimento da Torre (%d passos) ---\n", passos_torre);
    
    // Vamos usar 'for' para a Torre, que é ótimo para contagens definidas
    int i; // Variável de controle do loop
    
    // O loop 'for' faz tudo em uma linha:
    // 1. Inicia (i=0); 2. Testa a condição (i < passos_torre); 3. Incrementa (i++)
    for (i = 0; i < passos_torre; i++) {
        printf("Direita\n");
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("\n--- Movimento da Rainha (%d passos) ---\n", passos_rainha);
    
    // Vamos usar 'do-while' para a Rainha, para praticar a terceira estrutura
    int contador_rainha = 0; // Inicia o contador
    
    do {
        // O 'do' (fazer) garante que o bloco execute pelo menos UMA vez
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador

    } while (contador_rainha < passos_rainha); // A condição é verificada no final


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    // (Vamos fazer este depois)
    printf("\n--- Nível Aventureiro (A implementar) ---\n");


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // (Vamos fazer este depois)
    printf("\n--- Nível Mestre (A implementar) ---\n");

    return 0; // Indica que o programa terminou com sucesso
}