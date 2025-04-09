#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
#include <stdio.h>

    // Nivel novato - Implementação de movimento das peças
int main() {
    int torre = 1, bispo = 1, rainha = 1;

    for (bispo = 1; bispo <= 5; bispo++) {
        printf("O bispo se moveu para a diagonal para frente esquerda\n");
    }

    for (torre = 1; torre <= 5; torre++) {
        printf("A torre se moveu para a direita\n");
    }

    for (rainha = 1; rainha <= 8; rainha++) {
        printf("A rainha se moveu para a esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    for (int horizontal = 1; horizontal <= 2; horizontal++) {
        for (int vertical = 1; vertical <= 2; vertical++) {
            if (horizontal != vertical) { // Garante o movimento em L (2x1 ou 1x2)
                printf("O cavalo se moveu em L: %d horizontal e %d vertical\n", horizontal, vertical);
            }
        }
    }

    return 0;
}


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
