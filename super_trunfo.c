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

  int opcao1 = 0, opcao2 = 0;
  int atributosUsados[6] = {0}; // Marca os atributos já usados
  float soma1 = 0, soma2 = 0;

  printf("\n=== Cartas Pré-Cadastradas ===\n");
  printf("\nCarta 1: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f USD\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\n",
         nomePais1, populacao1, area1, pib1, pontosTuristicos1, densidade1);

  printf("\nCarta 2: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f USD\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\n",
         nomePais2, populacao2, area2, pib2, pontosTuristicos2, densidade2);

  // Escolha do primeiro atributo com validação
  do {
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\nOpcao: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 5) {
      printf("\nOpcao invalida. Por favor, escolha um valor entre 1 e 5.\n");
    }
  } while (opcao1 < 1 || opcao1 > 5);

  atributosUsados[opcao1] = 1;

  // Escolha do segundo atributo com validação e exclusão do primeiro
  do {
    printf("\nEscolha o SEGUNDO atributo para comparar:\n");
    for (int i = 1; i <= 5; i++) {
      if (!atributosUsados[i]) {
        switch(i) {
          case 1: printf("1 - Populacao\n"); break;
          case 2: printf("2 - Area\n"); break;
          case 3: printf("3 - PIB\n"); break;
          case 4: printf("4 - Pontos Turisticos\n"); break;
          case 5: printf("5 - Densidade Demografica\n"); break;
        }
      }
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 5) {
      printf("\nOpcao invalida. Por favor, escolha um valor entre 1 e 5.\n");
    } else if (atributosUsados[opcao2]) {
      printf("\nAtributo ja foi escolhido. Por favor, escolha um atributo diferente do primeiro.\n");
    }
  } while (opcao2 < 1 || opcao2 > 5 || atributosUsados[opcao2]);

  // Comparacao e soma dos atributos
  for (int i = 1; i <= 5; i++) {
    if (i == opcao1 || i == opcao2) {
      float v1 = 0, v2 = 0;
      switch(i) {
        case 1: v1 = populacao1; v2 = populacao2; break;
        case 2: v1 = area1; v2 = area2; break;
        case 3: v1 = pib1; v2 = pib2; break;
        case 4: v1 = pontosTuristicos1; v2 = pontosTuristicos2; break;
        case 5: v1 = densidade1; v2 = densidade2; break;
        default: break;
      }
      soma1 += (i == 5) ? (1 / v1) : v1;
      soma2 += (i == 5) ? (1 / v2) : v2;

      printf("\nComparando atributo %d:\n", i);
      printf("%s: %.2f vs %s: %.2f\n", nomePais1, v1, nomePais2, v2);
      if (i == 5) {
        v1 < v2 ? printf("%s vence no atributo Densidade!\n", nomePais1) :
        (v2 < v1 ? printf("%s vence no atributo Densidade!\n", nomePais2) : printf("Empate neste atributo!\n"));
      } else {
        v1 > v2 ? printf("%s vence neste atributo!\n", nomePais1) :
        (v2 > v1 ? printf("%s vence neste atributo!\n", nomePais2) : printf("Empate neste atributo!\n"));
      }
    }
  }

  printf("\nSoma total dos atributos:\n");
  printf("%s: %.2f\n", nomePais1, soma1);
  printf("%s: %.2f\n", nomePais2, soma2);

  if (soma1 > soma2) {
    printf("\nResultado final: %s venceu!\n", nomePais1);
  } else if (soma2 > soma1) {
    printf("\nResultado final: %s venceu!\n", nomePais2);
  } else {
    printf("\nResultado final: Empate!\n");
  }

  return 0;
}
