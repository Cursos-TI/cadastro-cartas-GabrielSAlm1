#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, codCarta[4], nomeCidade[20], estado2, codCarta2[4], nomeCidade2[20];
  int populacao, numTuristicos, populacao2, numTuristicos2;
  float pib, area, pib2, area2, densPop1, densPop2, PIBperCap1, PIBperCap2;

  // Área para entrada de dados
  printf("Letra estado: ");
  scanf("%c", &estado);

  printf("Código da carta: ");
  scanf("%s", &codCarta);

  printf("Nome da cidade: ");
  scanf("%s", &nomeCidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Área: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Numero de Pontos Turísticos: ");
  scanf("%d", &numTuristicos);

  printf("Agora a proxima carta... \n");
  printf("Letra estado: ");
  scanf(" %c", &estado2);

  printf("Código da carta: ");
  scanf("%s", &codCarta2);

  printf("Nome da cidade: ");
  scanf("%s", &nomeCidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turísticos: ");
  scanf("%d", &numTuristicos2);


  densPop1  = populacao / area;
  densPop2  = populacao2 / area2;

  PIBperCap1 = pib / populacao;
  PIBperCap2 = pib2 / populacao2;

  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Código: %c%s\n", estado, codCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de pontos Turísticos: %d\n", numTuristicos);
  printf("Densidade Populacional: %.2f \n", densPop1);
  printf("PIB per Capita: %.2f \n", PIBperCap1);

  printf("\nCarta 2: \n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codCarta2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos Turísticos: %d\n", numTuristicos2);
  printf("Densidade Populacional: %.2f \n", densPop2);
  printf("PIB per Capita: %.2f \n", PIBperCap2);

  return 0;
 
}
