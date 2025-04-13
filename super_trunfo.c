#include <stdio.h>
#include <string.h>

int main() {
  // Dados da Carta 1
  char nomePais1[50] = "Brasil";
  int populacao1 = 213000000;
  float area1 = 8515767.0;
  float pib1 = 1847020000000.0;
  int pontosTuristicos1 = 50;
  float densidade1 = populacao1 / area1;

  // Dados da Carta 2
  char nomePais2[50] = "Argentina";
  int populacao2 = 45000000;
  float area2 = 2780400.0;
  float pib2 = 491500000000.0;
  int pontosTuristicos2 = 30;
  float densidade2 = populacao2 / area2;

  int opcao;

  // Exibição das cartas pré-cadastradas
  printf("\n=== Cartas Pré-Cadastradas ===\n");
  printf("\nCarta 1:\n");
  printf("Nome do País: %s\n", nomePais1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f USD\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);

  printf("\nCarta 2:\n");
  printf("Nome do País: %s\n", nomePais2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f USD\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);

  printf("\n=== Super Trunfo: Comparar Cartas ===\n");
  printf("Escolha o atributo para comparar:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("Opcao: ");
  scanf("%d", &opcao);

  printf("\nComparando: %s vs %s\n", nomePais1, nomePais2);

  switch(opcao) {
    case 1:
      printf("Populacao: %d vs %d\n", populacao1, populacao2);
      if (populacao1 > populacao2) {
        printf("%s venceu!\n", nomePais1);
      } else if (populacao2 > populacao1) {
        printf("%s venceu!\n", nomePais2);
      } else {
        printf("Empate!\n");
      }
      break;
    case 2:
      printf("Area: %.2f km2 vs %.2f km2\n", area1, area2);
      if (area1 > area2) {
        printf("%s venceu!\n", nomePais1);
      } else if (area2 > area1) {
        printf("%s venceu!\n", nomePais2);
      } else {
        printf("Empate!\n");
      }
      break;
    case 3:
      printf("PIB: %.2f USD(Dolar) vs %.2f USD(Dolar)\n", pib1, pib2);
      if (pib1 > pib2) {
        printf("%s venceu!\n", nomePais1);
      } else if (pib2 > pib1) {
        printf("%s venceu!\n", nomePais2);
      } else {
        printf("Empate!\n");
      }
      break;
    case 4:
      printf("Pontos Turisticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
      if (pontosTuristicos1 > pontosTuristicos2) {
        printf("%s venceu!\n", nomePais1);
      } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("%s venceu!\n", nomePais2);
      } else {
        printf("Empate!\n");
      }
      break;
    case 5:
      printf("Densidade Demografica: %.2f hab/km2 vs %.2f hab/km2\n", densidade1, densidade2);
      if (densidade1 < densidade2) {
        printf("%s venceu!\n", nomePais1);
      } else if (densidade2 < densidade1) {
        printf("%s venceu!\n", nomePais2);
      } else {
        printf("Empate!\n");
      }
      break;
    default:
      printf("Opcao invalida. Por favor, escolha um valor de 1 a 5.\n");
  }

  return 0;
}
