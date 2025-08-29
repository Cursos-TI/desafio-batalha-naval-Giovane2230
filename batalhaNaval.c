#include <stdio.h>

#define linhas 10 // Define os valores
#define colunas 10
#define navio 3 // Tamanho fixo dos navios

// Desafio Batalha Naval - MateCheck

int main()
{
    // Nível Novato - Posicionamento dos Navios
    char cabecalho[linhas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[linhas][colunas] = {0};   // Tabuleiro 10x10
    int navioHorizontal[navio] = {3, 3, 3}; // Navios inicializados
    int navioVertical[navio] = {3, 3, 3};
    int navioDiagonal1[navio] = {3, 3, 3};
    int navioDiagonal2[navio] = {3, 3, 3};
    int habilidade[3][5] = {{5, 5, 5, 5, 5}, {5, 5, 5, 5, 5}, {5, 5, 5, 5, 5}};

    for (int i = 0; i < navio; i++) // Posicionamento do navio horizontal
    {
        tabuleiro[0][7 + i] = navioHorizontal[i];
    }

    for (int i = 0; i < navio; i++) // Posicionamento do navio vertical
    {
        tabuleiro[3 + i][7] = navioVertical[i];
    }

    for (int i = 0; i < navio; i++) // Posicionamento do navio diagonal 1
    {
        tabuleiro[5 - i][3 - i] = navioDiagonal1[i];
    }

    for (int i = 0; i < navio; i++) // Posicionamento do navio diagonal 2
    {
        tabuleiro[6 + i][5 - i] = navioDiagonal2[i];
    }

    for (int i = 0; i < 3; i++) // Posicionamento da habilidade cone
    {
        for (int j = 0; j < 5; j++)
        {
            if ((j - 2 >= -i) && (j - 2 <= i)) // Checa se a posicao faz parte do desenho do cone,
            {
                tabuleiro[7 + i][9 - j] = habilidade[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) // Posicionamento da habilidade cruz
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 1) || (j == 2))
            {
                tabuleiro[0 + i][5 - j] = habilidade[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) // Posicionamento da habilidade octaedro
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i - 1) * (i - 1) + (j - 2) * (j - 2) <= 1)
            {
                tabuleiro[5 + i][3 - j] = habilidade[i][j];
            }
        }
    }

    printf("   ");               // Alinhamento das linhas do cabecalho
    for (int i = 0; i < 10; i++) // Impressao das linhas do cabecalho
    {
        printf(" %c", cabecalho[i]);
    }
    printf("\n");

    for (int i = 0; i < linhas; i++) // Imprime o tabuleiro usando loops
    {
        printf(" %2d", i + 1); // Imprime as colunas
        for (int j = 0; j < colunas; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n"); // Garante que haja quebra de linha entre as colunas
    }

    return 0;
}
