#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Atributos cidade 1
    int codigo1;
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int qtdPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;
    
    // Atributos cidade 2
    int codigo2;
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nCadastrando cidade 1...\n\n");
    printf("Informe o código:\n");
    scanf("%d", &codigo1);
    printf("Informe o nome:\n");
    scanf("%s", &nome1);
    printf("Informe a população:\n");
    scanf("%d", &populacao1);
    printf("Informe a área:\n");
    scanf("%f", &area1);
    printf("Informe o PIB:\n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &qtdPontosTuristicos1);


    printf("\nCadastrando cidade 2...\n\n");
    printf("Informe o código:\n");
    scanf("%d", &codigo2);
    printf("Informe o nome:\n");
    scanf("%s", &nome2);
    printf("Informe a população:\n");
    scanf("%d", &populacao2);
    printf("Informe a área:\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%d", &qtdPontosTuristicos2);
    
    // Calcular densidade populacional e PIB per capita das cartas
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;
    
    // Calcular super poder das cartas
    superPoder1 = populacao1 + area1 + pib1 + qtdPontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);            
    
    superPoder2 = populacao2 + area2 + pib2 + qtdPontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\nListando cidade 1...\n\n");
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", qtdPontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super poder: %.2f\n", superPoder1);
    
    printf("\n\nListando cidade 2...\n\n");
    printf("Código: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    // Imprimir comparação entre as cartas
    printf("\n\nComparação de cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", qtdPontosTuristicos1 > qtdPontosTuristicos2);
    printf("Densidade populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
