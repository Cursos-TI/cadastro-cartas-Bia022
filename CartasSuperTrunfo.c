#include <stdio.h>
#include <stdlib.h>

void limpa_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Cadastro da carta 1
    char estado1[50];
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    
    double densidade1, pib_per_capita1, super_poder1;

    // Cadastro da carta 2
    char estado2[50];
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    
    double densidade2, pib_per_capita2, super_poder2;

    // Entrada de dados - Carta 1
    printf("CADASTRO DA CARTA 1\n");

    printf("Estado: ");
    scanf(" %49[^\n]", estado1);
    limpa_buffer();

    printf("Codigo: ");
    scanf(" %3s", codigo1);
    limpa_buffer();

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome1);
    limpa_buffer();

    printf("Populacao: ");
    scanf("%lu", &populacao1);
    limpa_buffer();

    printf("Area (em km²): ");
    scanf("%f", &area1);
    limpa_buffer();

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    limpa_buffer();

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    limpa_buffer();

    // Entrada de dados - Carta 2
    printf("\nCADASTRO DA CARTA 2\n");

    printf("Estado: ");
    scanf(" %49[^\n]", estado2);
    limpa_buffer();

    printf("Codigo: ");
    scanf(" %3s", codigo2);
    limpa_buffer();

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", nome2);
    limpa_buffer();

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    limpa_buffer();

    printf("Area (em km²): ");
    scanf("%f", &area2);
    limpa_buffer();

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    limpa_buffer();

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    limpa_buffer();

    // Cálculos
    densidade1 = (area1 > 0) ? (double)populacao1 / area1 : 0.0;
    densidade2 = (area2 > 0) ? (double)populacao2 / area2 : 0.0;

    pib_per_capita1 = (populacao1 > 0) ? ((double)pib1 * 1.0e9) / populacao1 : 0.0;
    pib_per_capita2 = (populacao2 > 0) ? ((double)pib2 * 1.0e9) / populacao2 : 0.0;

    super_poder1 = (double)populacao1 + area1 + pib1 + pontos_turisticos1 
                   + pib_per_capita1 + (densidade1 > 0 ? (1.0 / densidade1) : 0.0);
    super_poder2 = (double)populacao2 + area2 + pib2 + pontos_turisticos2 
                   + pib_per_capita2 + (densidade2 > 0 ? (1.0 / densidade2) : 0.0);

    // Exibição das cartas
    printf("\nCARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita1);
    printf("Super Poder: %.2lf\n", super_poder1);

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pib_per_capita2);
    printf("Super Poder: %.2lf\n", super_poder2);

    // Comparação das cartas
    printf("\nRESULTADO DA BATALHA\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (Menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return EXIT_SUCCESS;
}
