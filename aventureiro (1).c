#include <stdio.h>

int main() {

    // Variáveis para a carta 1
    char estado1;
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapita1;

    // Variáveis para a carta 2
    char estado2;
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapita2;

    
    // **Entrada de dados para a carta 1** //

    // Nome da variável: estado1
    printf("Digite o estado da carta 1 (A-H): \n");
    scanf(" %c", &estado1);

    //Nome da variável: codigo1
    printf("Digite o código da carta 1 (ex: A02): \n");
    scanf("%s", codigo1);

    //Nome da variável: cidade1
    //A função fgets lê uma linha inteira, incluindo espaços
    //A função getchar consome o caractere de nova linha deixado pelo scanf
    printf("Digite a cidade da carta 1: \n");
    getchar(); 
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;  

    //Nome da variável: populacao1
    printf("Digite a população da carta 1 (em milhões): \n");
    scanf("%d", &populacao1);

    //Nome da variável: area1
    printf("Digite a área da carta 1 (em km²): \n");
    scanf("%f", &area1);

    //Nome da variável: pib1
    printf("Digite o PIB da carta 1 (em bilhões de reais): \n");
    scanf("%f", &pib1);

    //Nome da variável: pontosTuristicos1
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontosTuristicos1);

    // **Entrada de dados para a carta 2** //

    // Nome da variável: estado2
    printf("Digite o estado da carta 2 (A-H): \n");
    scanf(" %c", &estado2);

    //Nome da variável: codigo2
    printf("Digite o código da carta 2 (ex: A01): \n");
    scanf("%s", codigo2);

    //Nome da variável: cidade2
    //A função fgets lê uma linha inteira, incluindo espaços
    //A função getchar consome o caractere de nova linha deixado pelo scanf
    printf("Digite a cidade da carta 2: \n");
    getchar();  
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;  

    //Nome da variável: populacao2
    printf("Digite a população da carta 2 (em milhões): \n");
    scanf("%d", &populacao2);

    //Nome da variável: area2
    printf("Digite a área da carta 2 (em km²): \n");
    scanf("%f", &area2);

    //Nome da variável: pib2
    printf("Digite o PIB da carta 2 (em bilhões de reais): \n");
    scanf("%f", &pib2);

    //Nome da variável: pontosTuristicos2
    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

   
    // Cálculo da densidade populacional
    // A densidade populacional é dada pela fórmula: Densidade = População / Área
    // A população está em milhões e a área em km², então a densidade será calculada em hab/km²
    densidadepopulacional1 = (float)populacao1 / area1;  // Densidade populacional em hab/km²
    densidadepopulacional2 = (float)populacao2 / area2;  // Densidade populacional em hab/km²

    // Cálculo do PIB per capita (convertendo PIB de bilhões para reais)
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;  // PIB per capita em reais/hab
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;  // PIB per capita em reais/hab


    // **Exibição dos dados carta 1** //
    printf("\nExibição da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1); 
    printf("População: %d milhões\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    
    // Exibindo a densidade populacional e PIB per capita
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$%.2f/hab\n", pibpercapita1);


    // **Exibição dos dados carta 1** //
    printf("\nExibição da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2); 
    printf("População: %d milhões\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    // Exibindo a densidade populacional e PIB per capita para a carta 2
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$%.2f/hab\n", pibpercapita2);

    return 0;
}