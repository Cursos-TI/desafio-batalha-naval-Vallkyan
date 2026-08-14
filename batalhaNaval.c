#include <stdio.h>

// Desafio Batalha Naval - MateCheck: Nível Novato - Posicionamento dos Navios

int main() {
    
   //Representação do tabuleiro com uma matriz 10x10, inicializada cada posição com valor zero
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}     
    };
    // Representação e Posicionamento do Navio Horizontal 
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

    // Representação e Posicionamento do Navio Vertical
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    
    //Saída de Dados para o Usuário
     for (int i = 0; i < 10; i++) {//loop para imprimir as linhas
        for (int j = 0; j < 10; j++) {//loop para imprimir as colunas
            printf("%d ", tabuleiro[i][j]);}//impressão do tabuleiro
            printf("\n");} // Quebra linha ao fim de cada linha da matriz
    // Fechamento do aplicativo
return 0;}
