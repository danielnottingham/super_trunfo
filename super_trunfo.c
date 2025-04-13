#include <stdio.h>

int main()
{
  // Declaração das variáveis para a primeira carta
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float superPoder1;

  // Declaração das variáveis para a segunda carta
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  // Leitura dos dados da primeira carta
  printf("Insira os dados da Carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]s", nomeCidade1);
  printf("População: ");
  scanf("%lu", &populacao1);
  printf("Área (em km²): ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  // Cálculo da densidade populacional e PIB per capita para a primeira carta
  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  // Leitura dos dados da segunda carta
  printf("\nInsira os dados da Carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Código da Carta (ex: A01): ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]s", nomeCidade2);
  printf("População: ");
  scanf("%lu", &populacao2);
  printf("Área (em km²): ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculo da densidade populacional e PIB per capita para a segunda carta
  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Cálculo do Super Poder para a primeira carta
  superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

  // Cálculo do Super Poder para a segunda carta
  superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

  // Exibição dos dados da primeira carta
  printf("\n******************************\n");
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  // Exibição dos dados da segunda carta
  printf("\n******************************\n");
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // Exibição dos dados finais
  printf("\n******************************\n");

  // Comparação das cartas
  printf("\nComparação de Cartas:\n");

  // Comparação de População
  if (populacao1 > populacao2) {
      printf("População: Carta 1 venceu\n");
  } else if (populacao1 < populacao2) {
      printf("População: Carta 2 venceu\n");
  } else {
      printf("População: Empate\n");
  }

  // Comparação de Área
  if (area1 > area2) {
      printf("Área: Carta 1 venceu\n");
  } else if (area1 < area2) {
      printf("Área: Carta 2 venceu\n");
  } else {
      printf("Área: Empate\n");
  }

  // Comparação de PIB
  if (pib1 > pib2) {
      printf("PIB: Carta 1 venceu\n");
  } else if (pib1 < pib2) {
      printf("PIB: Carta 2 venceu\n");
  } else {
      printf("PIB: Empate\n");
  }

  // Comparação de Pontos Turísticos
  if (pontosTuristicos1 > pontosTuristicos2) {
      printf("Pontos Turísticos: Carta 1 venceu\n");
  } else if (pontosTuristicos1 < pontosTuristicos2) {
      printf("Pontos Turísticos: Carta 2 venceu\n");
  } else {
      printf("Pontos Turísticos: Empate\n");
  }

  // Comparação de Densidade Populacional (menor valor vence)
  if (densidadePopulacional1 < densidadePopulacional2) {
      printf("Densidade Populacional: Carta 1 venceu\n");
  } else if (densidadePopulacional1 > densidadePopulacional2) {
      printf("Densidade Populacional: Carta 2 venceu\n");
  } else {
      printf("Densidade Populacional: Empate\n");
  }

  // Comparação de PIB per Capita
  if (pibPerCapita1 > pibPerCapita2) {
      printf("PIB per Capita: Carta 1 venceu\n");
  } else if (pibPerCapita1 < pibPerCapita2) {
      printf("PIB per Capita: Carta 2 venceu\n");
  } else {
      printf("PIB per Capita: Empate\n");
  }

  // Comparação de Super Poder
  if (superPoder1 > superPoder2) {
      printf("Super Poder: Carta 1 venceu\n");
  } else if (superPoder1 < superPoder2) {
      printf("Super Poder: Carta 2 venceu\n");
  } else {
      printf("Super Poder: Empate\n");
  }

  return 0;
}
