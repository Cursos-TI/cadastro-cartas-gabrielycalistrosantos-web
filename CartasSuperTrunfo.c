#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Cada carta deve conter os seguintes atributos:
int main() {
  char estado[20];
  char codigo[5];
  char cidade[20];
  int populacao;
  float area;
  float pib;
  int turismo;

  // variáveis da segunda carta
  char estado2[20];
  char codigo2[5];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int turismo2;


printf("Bem vindo(a) ao jogo Super-Trunfo. Vamos iniciar coletando dados de suas cartas. \n");

// dados da primeira carta:

printf("Vamos cadastrar os dados da sua primeira carta. \n");

printf("Estado da carta 1:\n");
scanf(" %s", estado);

printf("Código da carta 1:\n");
scanf("%s", codigo);

printf("Nome da cidade carta 1:\n");
scanf("%s", cidade);

printf("População total carta 1:\n");
scanf("%d", &populacao);

printf("Tamanho da área em Km² carta 1:\n");
scanf("%f", &area);

printf("Produto Interno Bruto - PIB carta 1:\n");
scanf("%f", &pib);

printf("Quantidade de pontos turísticos carta 1:\n");
scanf("%d", &turismo);
printf("\n");

// dados da segunda carta:

printf("Agora vamos cadastrar os dados da sua segunda carta. \n");

printf("Estado da carta 2:\n");
scanf("%s", estado2);

printf("Código da carta 2:\n");
scanf("%s", codigo2);

printf("Nome da cidade carta 2:\n");
scanf("%s", cidade2);

printf("População total carta 2:\n");
scanf("%d", &populacao2);

printf("Tamanho da área em Km² carta 2:\n");
scanf("%f", &area2);

printf("Produto Interno Bruto - PIB carta 2:\n");
scanf("%f", &pib2);

printf("Quantidade de pontos turísticos carta 2:\n");
scanf("%d", &turismo2);
printf("\n\n");

printf("Carta 1: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n", estado, codigo, cidade);
printf(" População: %d \n Área: %f \n PIB: %f bilhões \n Número de pontos turísticos: %d  \n", populacao, area, pib, turismo);

printf("\n");

printf("Carta 2: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n", estado2, codigo2, cidade2);
printf(" População: %d \n Área: %f \n PIB: %f bilhões \n Número de pontos turísticos: %d \n", populacao2, area2, pib2, turismo2);

return 0;
} 
