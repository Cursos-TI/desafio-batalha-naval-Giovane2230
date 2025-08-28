#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    // Nível Novato - Posicionamento dos Navios
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10] = {0};        // Tabuleiro 10x10
    int navioHorizontal[3] = {3, 3, 3}; // Navios inicializados
    int navioVertical[3] = {3, 3, 3};
    int navio = 3; // Tamanho dos navios

    for (int i = 0; i < navio; i++) // Posicionamento do navio horizontal
    {
        tabuleiro[2][3 + i] = navioHorizontal[i];
    }

    for (int i = 0; i < navio; i++) // Posicionamento do navio vertical
    {
        tabuleiro[4 + i][7] = navioVertical[i];
    }

    printf("   ");               // Alinhamento das linhas
    for (int i = 0; i < 10; i++) // Impressão das linhas
    {
        printf(" %c", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) // Imprime o tabuleiro usando loops
    {
        printf(" %2d", i + 1); // Imprime as colunas
        for (int j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n"); // Garante que haja quebra de linha entre as colunas
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
