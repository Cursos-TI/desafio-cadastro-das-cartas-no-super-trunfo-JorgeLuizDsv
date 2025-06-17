#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char cidade[30];
    float area;
    float pib;
    int pontos_turisticos;
    unsigned long int populacao;
    float super_poder;
    float densidade;
    float pib_per_capita;   
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

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

    // Cálculos para a carta 1
    densidade1 = carta1.populacao / carta1.area;
    pib_per_capita1 = (carta1.pib * 1000000000) / carta1.populacao;

    // Cálculos para a carta 2
    densidade2 = carta2.populacao / carta2.area;
    pib_per_capita2 = (carta2.pib * 1000000000) / carta2.populacao;

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("---------------------------\n");

    // Cálculo da densidade populacional
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // Cálculo do PIB per capita
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    // Cálculo do Super Poder
    carta1.super_poder = 
        carta1.populacao + 
        carta1.area + 
        carta1.pib + 
        carta1.pontos_turisticos + 
        carta1.pib_per_capita + 
        (1.0 / carta1.densidade);

    carta2.super_poder = 
        carta2.populacao + 
        carta2.area + 
        carta2.pib + 
        carta2.pontos_turisticos + 
        carta2.pib_per_capita + 
        (1.0 / carta2.densidade);

    // Comparações
    int vencedor_populacao = carta1.populacao > carta2.populacao;
    int vencedor_area = carta1.area > carta2.area;
    int vencedor_pib = carta1.pib > carta2.pib;
    int vencedor_pontos = carta1.pontos_turisticos > carta2.pontos_turisticos;
    int vencedor_densidade = carta1.densidade < carta2.densidade; // MENOR vence
    int vencedor_pib_per_capita = carta1.pib_per_capita > carta2.pib_per_capita;
    int vencedor_super_poder = carta1.super_poder > carta2.super_poder;

    // Exibir os resultados
    printf("========================================\n");
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", vencedor_populacao ? 1 : 2, vencedor_populacao);
    printf("Área: Carta %d venceu (%d)\n", vencedor_area ? 1 : 2, vencedor_area);
    printf("PIB: Carta %d venceu (%d)\n", vencedor_pib ? 1 : 2, vencedor_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vencedor_pontos ? 1 : 2, vencedor_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedor_densidade ? 1 : 2, vencedor_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencedor_pib_per_capita ? 1 : 2, vencedor_pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", vencedor_super_poder ? 1 : 2, vencedor_super_poder);
    printf("========================================\n");

    return 0;

    
}