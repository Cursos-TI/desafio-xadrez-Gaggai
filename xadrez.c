#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Aluno: Edgar Nicolau Fardin

int main() {
    
    //variavel contador
    int i = 0;

    //variavel movimentos
    int movTorre = 5; // 5 casas para direita
    int movBispo = 5; // 5 casas para cima e direita
    int movRainha = 8; // 8 casas para esquerda
    int movCavalo = 1; // 2 casas para baixo e uma para esquerda

    //movimentação da torre
    printf("\nTorre:\n");
    while (i != movTorre)
    {
        printf("Direita\n");
        i++;
    }

    i = 0; // zerar contator

    //movimentação do Bispo

    printf("\nBispo:\n");
    do
    {
        printf("Cima, Direita\n");
        i++;
    } while (i != movBispo);

    //movimentação da Rainha
    printf("\nRainha:\n");
    for (i = 0; i != movRainha; i++)
    {
        printf("Esquerda\n");
    } 
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCavalo:\n");
    while (movCavalo--)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
