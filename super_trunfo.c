#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
char estado1;
char codigo1[2];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontos_turisticos1;

char estado2;
char codigo2[2];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;



printf("Cadastro das Cartas SuperTrunfo\n");

printf("Carta1\n");
printf("Estado (escolha uma letra de A a H): ");
scanf(" %c", &estado1);

printf("Codigo da carta (ex: Letra escolhida e um numeral): ");
scanf(" %s", codigo1);

printf("Nome da Cidade: ");
scanf("%s", cidade1);

printf("Populacao: ");
scanf("%d", &populacao1);


printf("Area (km2): ");
scanf("%f", &area1);


printf("PIB: ");
scanf("%f", &pib1);


printf("Numero de Pontos Turisticos: ");
scanf("%d", &pontos_turisticos1);



printf("\nCarta 2\n");
printf("Estado (escolha uma letra de A a H): ");
scanf(" %c", &estado2);


printf("Codigo da carta (ex: Letra escolhida e um numeral): ");
scanf("%s", codigo2);


printf("Nome da Cidade: ");
scanf("%s", cidade2);


printf("Populacao: ");
scanf("%d", &populacao2);


printf("Area (km2): ");
scanf("%f", &area2);


printf("PIB: ");
scanf("%f", &pib2);


printf("Numero de Pontos Turisticos: ");
scanf("%d", &pontos_turisticos2);


printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km2\n", area1);
printf("PIB: %.2f milhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);


printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("PIB: %.2f milhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);


return 0;
} 