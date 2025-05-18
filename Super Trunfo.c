#include <stdio.h>

int main()
{
  //Esse programa serve para inserir os dados de duas cartas do jogo Super Trunfo.
  
  char letra1, letra2; //Lê o Estado.
  int atrativos1, atrativos2; //Lê o número de pontos turisticos.
  unsigned long int pessoas1, pessoas2; //Lê a população.
  float terreno1, riqueza1, terreno2, riqueza2; //Lê o o tamanho da area e o PIB.
  char estado1[20], estado2[20]; //Lê o codigo da carta. 
  char nomenclatura1[20], nomenclatura2[20] ; //Lê o nome do cidade.
  
//Inserção dos dados da carta 1.  

    printf("Leia as instruções a seguir para inserir os dados da CARTA 1\n");
    
    printf("Digite uma letra de 'A' a 'H' que servirá como identificação do Estado: \n"); 
    scanf(" %c", &letra1);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) que servirá como código da carta: \n"); 
    scanf("%s", estado1);
    
    printf("Digite o nome da cidade: \n"); 
    scanf("%s", nomenclatura1);
    
    printf("Digite o número de habitantes da cidade: \n"); 
    scanf("%lu", &pessoas1);
    
    printf("Digite a área da cidade em quilômetros quadrados: \n"); 
    scanf("%f", &terreno1);
    
    printf("Digite o Produto Interno Bruto da cidade: \n"); 
    scanf("%f", &riqueza1);
    
    printf("Digite a quantidade de pontos turísticos na cidade: \n"); 
    scanf("%d", &atrativos1);
    
    printf("\n");
    printf("Parabéns!Inserção dos dados da Carta 1 concluída com sucesso.\n");
    printf("\n");
    
//Inserção dos dados da carta 2. 

    printf("Leia as instruções a seguir para inserir os dados da CARTA 2\n");
    
    printf("Digite uma letra de 'A' a 'H' que servirá como identificação do Estado: \n"); 
    scanf(" %c", &letra2);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03) que servirá como código da carta: \n"); 
    scanf("%s", estado2);
    
    printf("Digite o nome da cidade: \n"); 
    scanf("%s", nomenclatura2);
    
    printf("Digite o número de habitantes da cidade: \n"); 
    scanf("%lu", &pessoas2);
    
    printf("Digite a área da cidade em quilômetros quadrados: \n"); 
    scanf("%f", &terreno2);
    
    printf("Digite o Produto Interno Bruto da cidade: \n"); 
    scanf("%f", &riqueza2);
    
    printf("Digite a quantidade de pontos turísticos na cidade: \n"); 
    scanf("%d", &atrativos2);
    
    printf("\n");
    printf("Parabéns!Inserção dos dados da Carta 2 concluída com sucesso.\n");
    printf("\n");
    
float densidade1, densidade2, pib1, pib2, poder1, poder2;
densidade1 = pessoas1 / terreno1;
densidade2 = pessoas2 / terreno2;
pib1 = riqueza1 / pessoas1;
pib2 = riqueza2 / pessoas2;
poder1 = pessoas1 + atrativos1 + terreno1 + riqueza1 + pib1;
poder2 = pessoas2 + atrativos2 + terreno2 + riqueza2 + pib2;
    
//Visualização dos dados das Cartas.
    
    printf("Carta 1\n");
    printf("Estado: %c\n", letra1); 
    printf("Código: %s\n", estado1);
    printf("Nome da Cidade: %s\n", nomenclatura1);
    printf("População: %lu\n", pessoas1);
    printf("Área: %.2f\n", terreno1);
    printf("PIB: %.2f\n", riqueza1);
    printf("Número de Pontos Turísticos: %d\n", atrativos1);
    printf("Densidade Pupulacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", pib1);
    
    printf("\n");
    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %c\n", letra2); 
    printf("Código: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nomenclatura2);
    printf("População: %lu\n", pessoas2);
    printf("Área: %.2f\n", terreno2);
    printf("PIB: %.2f\n", riqueza2);
    printf("Número de Pontos Turísticos: %d\n", atrativos2);
    printf("Densidade Pupulacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pib2);
    
//Comparação das cartas.

    int resultadopessoas, resultadoatrativos;
    float resultadoterreno, resultadoriqueza, resultadodensidade, resultadopib, resultadosp;
    
    resultadopessoas = pessoas1 > pessoas2;
    resultadoatrativos = atrativos1 > atrativos2;
    resultadoterreno = terreno1 > terreno2;
    resultadoriqueza = riqueza1 > riqueza2;
    resultadodensidade = densidade1 > densidade2;
    resultadopib = pib1 > pib2;
    resultadosp = poder1 > poder2;
    
    printf("\n");
    printf("---------------------\n");
    printf("COMPARAÇÃO DAS CARTAS\n");
    printf("Se o resultado for 1: A carta 1 ganhou!\n");
    printf("Se o resultado for 0: A carta 2 ganhou!\n");
    printf("---------------------\n");
    printf("\n");
    
    printf("População: %d\n", resultadopessoas);
    printf("Área: %0.f\n", resultadoterreno);
    printf("PIB: %0.ff\n", resultadoriqueza);
    printf("Pontos Turísticos: %d\n", resultadoatrativos);
    printf("Densidade Populacional: %0.ff\n", resultadodensidade);
    printf("PIB per Capita: %0.ff\n", resultadopib);
    printf("Super Poder: %0.ff\n", resultadosp);
    
    return 0;
}