#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da primeira carta
    printf("Preencha os dados da CARTA 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código (Ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n");

    // Leitura dos dados da segunda carta
    printf("Preencha os dados da CARTA 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código (Ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    printf("\n");

    // Exibição da primeira carta
    printf("---------------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

    // Exibição da segunda carta
    printf("---------------------------\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("---------------------------\n");

    return 0;
}