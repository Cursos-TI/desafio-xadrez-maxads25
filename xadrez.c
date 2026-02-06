#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //declaração de variaveis
    const int mov_torre = 5, mov_bispo = 5, mov_rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // estrutura WHILE, para representar o movimento do bispo 5 casas na diagonal para cima/direita
    
    int b=1;
    while( b <= mov_bispo) {                                //condição para repetir 5x

        printf("cima, ");
        printf("direita!\n");      //exibição na tela, enquanto bispo <= 5, para andar 5 casas na diagonal.
        b++;

    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //  estrutura FOR para representar o movimento da torre 5 casas para direita.

    for(int i = 1; i <= mov_torre; i++){        //inicio da estrutura

        printf("Direita!\n");       //exibição na tela enquanto torre <= 5 para andar 5 casas a direita.
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // estrutura do-while para representar o movimento da rainha 8 casas a esquerda
    
    int r = 1;
    do{
        printf("Esquerda!\n");
        r++;

    }while ( r <= mov_rainha);


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
