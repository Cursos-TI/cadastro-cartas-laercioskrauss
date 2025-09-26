#include <stdio.h>

int main() {
    char estado1;
    char codigo1[2];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo2[2];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    printf("Cadastro das Cartas SuperTrunfo\n");

    printf("Carta 1\n");
    printf("Estado (escolha uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: Letra escolhida e um numeral): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: (em milhoes de habitantes) ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em milhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000) / (float)populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (densidade1 != 0 ? 1.0f / densidade1 : 0.0f);

    printf("Carta 2\n");
    printf("Estado (escolha uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: Letra escolhida e um numeral): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: (em milhoes de habitantes) ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: (em milhoes de reais) ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000) / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (densidade2 != 0 ? 1.0f / densidade2 : 0.0f);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f milhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %s venceu (%d)\n", populacao1 > populacao2 ? "1" : "2", populacao1 > populacao2);
    printf("Area: Carta %s venceu (%d)\n", area1 > area2 ? "1" : "2", area1 > area2);
    printf("PIB: Carta %s venceu (%d)\n", pib1 > pib2 ? "1" : "2", pib1 > pib2);
    printf("Pontos Turisticos: Carta %s venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? "1" : "2", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", densidade1 < densidade2 ? "1" : "2", densidade1 < densidade2);
    printf("PIB per Capita: Carta %s venceu (%d)\n", pib_per_capita1 > pib_per_capita2 ? "1" : "2", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %s venceu (%d)\n", super_poder1 > super_poder2 ? "1" : "2", super_poder1 > super_poder2);

    return 0;
}