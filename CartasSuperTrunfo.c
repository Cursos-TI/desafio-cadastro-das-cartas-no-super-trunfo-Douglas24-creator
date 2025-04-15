#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1;
    char codigo1[10];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turistico1;

    char estado2;
    char codigo2[10];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turistico2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Carta 1 \n");
    printf("Digite a sigla do estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a quantidade da população: \n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico1);
    
    printf("Carta 2 \n");
    printf("Digite a sigla do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade da população: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1 \n");
    printf("A sigla do estado é: %c \n", estado1);
    printf("O código da carta é: %s \n", codigo1);
    printf("O nome da cidade é: %s \n", cidade1);
    printf("A quantidade da população é: %d \n", populacao1);
    printf("O tamanho da área é: %.2f km² \n", area1);
    printf("O valor do PIB é: %.2f bilhões de reais \n", pib1);
    printf("A quantidade de pontos turísticos é: %d \n", turistico1);

    printf("\nCarta 2 \n");
    printf("A sigla do estado é: %c \n", estado2);
    printf("O código da carta é: %s \n", codigo2);
    printf("O nome da cidade é: %s \n", cidade2);
    printf("A quantidade da população é: %d \n", populacao2);
    printf("O tamanho da área é: %.2f km² \n", area2);
    printf("O valor do PIB é: %.2f bilhões de reais \n", pib2);
    printf("A quantidade de pontos turísticos é: %d \n", turistico2);

    return 0;
}
