#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Aluno: Edgar Nicolau Fardin

// Área paara as funções recursivas

//Torre
void moverTorre(int movimentos){
    if(movimentos == 0){
        return;
    }
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

//Bispo
void moverBispo(int movimentos){
    if(movimentos == 0){
        return;
    }
    for (int i = 0; i < 1; i++)
    {
        printf("Direita\n");
        for (int j = 0; j < 1; j++)
        {
            printf("Cima\n");
        }        
    }
    moverBispo(movimentos - 1);    
}

//Rainha
void moverRainha(int movimentos){
    if(movimentos == 0){
        return;
    }
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

//Cavalo
void moverCavalo(int movimentos){
    if(movimentos == 0){
        return;
    }
    for (int i = 0; i < 3; i++)//tres movimentos no total
    {
        if(i < 2){
            printf("Baixo\n");
            continue;
        }
        for (int j = 0; j < 1; j++)
        {
            printf("Esquerda\n");
        }
        
    }
    moverCavalo(movimentos - 1);
    
}

int main() {

    //variavel movimentos
    int movTorre = 5; // 5 casas para direita
    int movBispo = 5; // 5 casas para cima e direita
    int movRainha = 8; // 8 casas para esquerda
    int movCavalo = 1; // 2 casas para baixo e uma para esquerda

    //movimentação da torre
    printf("\nTorre:\n");
    moverTorre(movTorre);

    //movimentação do Bispo
    printf("\nBispo:\n");
    moverBispo(movBispo);
    

    //movimentação da Rainha
    printf("\nRainha:\n");
    moverRainha(movRainha);

    //movimentação do Cavalo
    printf("\nCavalo:\n");
    moverCavalo(movCavalo);

    return 0;
}
