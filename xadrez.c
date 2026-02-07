#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

 void movBispo(int mBispo){                     //criando uma funcao recursiva para movimentacao do bispo
    if ( mBispo > 0 ){                          // condicao para executar

        printf("Cima, ");                       // impressão do movimento vertical

        for(int i = 1; i <= 1; i++){            // teste para movimento horizontal
            printf("Direita!\n");
        }

        movBispo(mBispo-1);                     // decrementação da funcao para funcao chegar ao fim das 5 casas
        
        
    }
 }

 void movTorre(int mTorre){                     // criando uma funcao recursiva para movimentar a Torre
    if ( mTorre > 0) {                          // condicao para executar

        printf("Direita!\n");                   // impressão do movimento a cada execução enquanto atender a condição acima
        movTorre(mTorre-1);                     // decrementação
    }
 }

 void movRainha(int mRainha){
        if ( mRainha > 0) {

            printf("Esquerda!\n");
            movRainha(mRainha-1);

        }
 }

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    //declaração de variaveis
    const int mov_torre = 5;
    const int mov_bispo = 5;
    const int mov_rainha = 8;
    const int mov_cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // estrutura WHILE, para representar o movimento do bispo 5 casas na diagonal para cima/direita
    
    //int b=1;                                                // váriavel utilizada para contagem dos movimentos
   // while( b <= mov_bispo) {                                // condição para repetir 5x

   //     printf("Cima, ");

        movBispo(mov_bispo);      //exibição na tela, enquanto mov_bispo <= 5, para andar 5 casas na diagonal.

   //     b++;

  //  }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //  estrutura FOR para representar o movimento da torre 5 casas para direita.

     /* for(int i = 1; i <= mov_torre; i++){        //inicio da estrutura

        printf("Direita!\n");       //exibição na tela enquanto i <= 5 para andar 5 casas a direita.
    }

    */

        movTorre(mov_torre);

        printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // estrutura do-while para representar o movimento da rainha 8 casas a esquerda
    
   // int r = 1;                                  // váriavel utilizada para contagem dos movimentos
   //do{
   //     printf("Esquerda!\n");                  // exibição na tela enquanto r <=8 para andar 8 casas a esquerda
   //     r++;

  //  }while ( r <= mov_rainha);                  // condição para parar a execução
        
        movRainha(mov_rainha);

    printf("\n");///

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    /*
        Requisitos funcionais

        Entrada de Dados: Os valores para o número de casas a serem movidas (duas para baixo, uma para a esquerda) devem ser definidos
        no código como variáveis ou constantes.
 
        Lógica de Movimentação: O programa deverá implementar a lógica específica do movimento em "L" do Cavalo usando loops aninhados
        (um loop for e um loop while ou do-while).
 
        Saída de Dados: O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", 
        "Esquerda"), utilizando o comando printf. Para as outras peças as saídas devem seguir o padrão: printf("Cima\n");, 
        printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");.
        
        Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.
    */

    
    for (int ch = 1; ch <= mov_cavalo; ch++) {
        
        // Loop aninhado para o movimento vertical (2 casas para Cima)
        // Usamos múltiplas variáveis e uma condição de controle
       
        for (int v = 1, limite = 2; v <= 10; v++) { 
            if (v > limite) break; // Interrompe ao atingir as 2 casas
            
            printf("Cima!\n");
        }

        // Movimento horizontal (1 casa para a Direita)
        // Exemplo usando uma variável de controle simples
        int horizontal = 0;
        while (horizontal < 1) {
            printf("Direita!\n");
            horizontal++;
        }
        
        printf("\n"); // Pula linha para organizar a saída
    }

    return 0;
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.    
