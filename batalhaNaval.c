#include <stdio.h>

#define linhas 10 // Define os valores
#define colunas 10
#define navio 3 // Tamanho fixo dos navios

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    char cabecalho[linhas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[linhas][colunas] = {0};   // Tabuleiro 10x10
    int navioHorizontal[navio] = {3, 3, 3}; // Navios inicializados
    int navioVertical[navio] = {3, 3, 3};
    int navioDiagonal1[navio] = {3, 3, 3};
    int navioDiagonal2[navio] = {3, 3, 3};

    for (int i = 0; i < navio; i++) // Posicionamento do navio horizontal
    {
        tabuleiro[2][3 + i] = navioHorizontal[i];
    }

    for (int i = 0; i < navio; i++) // Posicionamento do navio vertical
    {
        tabuleiro[4 + i][7] = navioVertical[i];
    }

    for (int i = 0; i < navio; i++) // Posicionamento do navio diagonal 1
    {
        tabuleiro[5 - i][3 - i] = navioDiagonal1[i];
    }

    for (int i = 0; i < navio; i++) // Posicionamento do navio diagonal 2
    {
        tabuleiro[6 + i][5 - i] = navioDiagonal2[i];
    }

    printf("   ");               // Alinhamento das linhas do cabecalho
    for (int i = 0; i < 10; i++) // Impressao das linhas do cabecalho
    {
        printf(" %c", cabecalho[i]);
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
