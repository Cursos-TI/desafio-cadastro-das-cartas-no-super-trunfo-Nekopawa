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
    
    // Atributos cidade 2
    int codigo2;
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastrando cidade 1...\n\n");
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
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\nListando cidade 1...\n\n");
    printf("Código: %d\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", qtdPontosTuristicos1);
    
    printf("\n\nListando cidade 2...\n\n");
    printf("Código: %d\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", qtdPontosTuristicos2);

    return 0;
}
