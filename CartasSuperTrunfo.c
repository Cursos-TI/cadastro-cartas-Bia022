#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int PontosTuristicos1;

  //Carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int PontosTuristicos2;

  // Área para entrada de dados
  
  // Carta 1
  printf("Cadastro de carta 1:\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", cidade1);
  printf("Digite a populacao: ");
  scanf("%d", &populacao1);
  printf("Digite a area (em km2): ");
  scanf("%f", &area1);
  printf("Digite o Pib (Em bilhoes de reais): ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &PontosTuristicos1);

  //Carta 2

  printf("\nCadastro da carta 2:\n");
  printf("Digite o estado: "); 
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta: "); 
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: "); 
  scanf(" %[^\n]", cidade2);
  printf("Digite a populacao: "); 
  scanf("%d", &populacao2);
  printf("Digite a area (em km2): "); 
  scanf("%f", &area2);
  printf("Digite o Pib (em bilhoes de reais): "); 
  scanf("%f",&pib2);
  printf("Digite o numero de pontos turisticos: "); 
  scanf("%d", &PontosTuristicos2);


  // Área para exibição dos dados da cidade

  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de pontos turisticos: %d\n", PontosTuristicos1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de pontos turisticos: %d\n", PontosTuristicos2);

  // Tipos de variáveis usados:
  // char   -> um caractere (ex: estado)
  // char[] -> array de caracteres (string: código, cidade)
  // int    -> números inteiros (ex: população, pontos turísticos)
  // float  -> números decimais (ex: área, PIB)

  return 0;
}

