#include <stdio.h>

int main()
{
  // Declaração das variáveis para a primeira carta
  char estado1[3];
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
  char estado2[3];
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
  scanf(" %2s", estado1);
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
  scanf(" %2s", estado2);
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

  // Exibição dos dados da primeira carta
  printf("\n******************************\n");
  printf("\nCarta 1:\n");
  printf("Estado: %s\n", estado1);
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
  printf("Estado: %s\n", estado2);
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

  // Comparação com base em um único atributo (exemplo: PIB per capita)
  printf("\nComparação de cartas (Atributo: PIB per capita):\n");
  printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
  printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

  if (pibPerCapita1 > pibPerCapita2) {
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
  } else if (pibPerCapita1 < pibPerCapita2) {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
  } else {
      printf("Resultado: Empate!\n");
  }

  return 0;
}
