#include <stdio.h>

void movimentotorre(int casastorre) {
    if (casastorre > 0) {
    printf("A torre se moveu 1 casa para direita!\n");
    movimentotorre(casastorre - 1);
    }
}

void movimentorainha(int casasrainha) {
    if (casasrainha > 0) {
    printf("A rainha se moveu 1 casa para esquerda!\n");
    movimentorainha(casasrainha - 1);
    }
}

int main()
{
    //Introdução do código
    printf("PRESSIONE ENTER PARAR INICIAR OS MOVIMENTOS\n");
    getchar();
    
    //Movimento do bispo.
    
    printf("\n~MOVIMENTO DO BISPO~\n\n");
    
    for (int bispo1 = 1; bispo1 <= 5; bispo1++) {
        for (int bispo2 = bispo1; bispo2 == bispo1; bispo2++) {
        printf("O bispo se move 1 casa para cima! \n");  
        }
    printf("O bispo se move 1 casa para direita! \n"); 
    }
    
    printf("\nPressione qualquer tecla para prosseguir.\n");
    getchar();
    
    //Movimento da torre.
    
    printf("\n~MOVIMENTO DA TORRE~\n\n");
    
    movimentotorre(5);
    
    printf("\n");
    printf("Pressione qualquer tecla para prosseguir.\n");
    getchar();
    
    //Movimento da rainha.
    
    printf("\n~MOVIMENTO DA RAINHA~\n\n");
    
    movimentorainha(8);
    
    printf("\nPressione qualquer tecla para prosseguir.\n");
    getchar();
    
    //Movimento do Cavalo
    
    printf("\n~MOVIMENTO DO CAVALO~\n\n");
   
   int cavalo1 = 1;
   
   while (cavalo1 == 1) {
   
        for (int cavalo2 = 1; cavalo2 <= 2; cavalo2++) {
        printf("O cavalo se moveu 1 casa para cima\n");
   }
   cavalo1++;
   printf("O cavalo se moveu 1 casa para esquerda\n");
   }
    
    printf("\nPressione qualquer tecla para finalizar.\n");
    getchar();
    
    //Fechamento do código

    printf("\nFIM DOS MOVIMENTOS\n");

    return 0;
}