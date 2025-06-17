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
    // Definindo a primeira carta
    struct Carta carta1 = {
        'A',
        "A01",
        "São Paulo",
        12300000,
        1521.11,
        2.3,
        15
    };

    // Definindo a segunda carta
    struct Carta carta2 = {
        'B',
        "B02",
        "Rio de Janeiro",
        6748000,
        1182.30,
        1.5,
        20
    };

    // Exibindo a primeira carta
    printf("CARTA 1\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("---------------------------\n");

    // Exibindo a segunda carta
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
