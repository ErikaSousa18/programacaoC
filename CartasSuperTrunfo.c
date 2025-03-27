#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Digite o estado da carta 1 (A-H): \n");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o código da carta 1 (ex: A02): \n");
    scanf("%s", codigo1);
    getchar();

    printf("Digite a cidade da carta 1: \n");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a população da carta 1 (em milhões): \n");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1 (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1 (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontosTuristicos1);
    getchar();

    printf("Digite o estado da carta 2 (A-H): \n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da carta 2 (ex: A01): \n");
    scanf("%s", codigo2);
    getchar();

    printf("Digite a cidade da carta 2: \n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a população da carta 2 (em milhões): \n");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2 (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2 (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\nExibição da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d milhões\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nExibição da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d milhões\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
