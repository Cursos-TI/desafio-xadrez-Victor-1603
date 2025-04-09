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

void MoverBispo (int casas)
{
    if (casas > 0)
    {
        printf("diagonal direita para cima\n");
        MoverBispo(casas - 1);
    }
    
}

void MoverTorre (int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        MoverTorre(casas - 1);
    }
    
}

void MoverRainha (int casas)
{
    if (casas > 0)
    {
        printf("esquerda\n");
        MoverRainha(casas - 1);
    }
    
}

void MoverCavalo (int casas)
{
    if (casas > 0)
    {
        printf("L para cima à direira\n");
        MoverCavalo(casas - 1);
    }
    
}

int main(int argc, char const *argv[])
{
    int opcao;

    printf("Escolha qual peça você deseja mover:\n");
    printf("1. Bisco\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            MoverBispo(5);
            break;
        case 2:
            MoverTorre(5);
            break;
        case 3:
            MoverRainha(8);
            break;
        case 4:
            MoverCavalo(1);
            break;
        default:
            printf("Opção inválida.\n");
            break;
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
