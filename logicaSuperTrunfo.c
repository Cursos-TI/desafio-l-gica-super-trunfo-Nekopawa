#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
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
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\nCarta 1 - %s: PIB %.2f\n", nome1, pib1);
    printf("Carta 2 - %s: PIB %.2f\n", nome2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 venceu!");
    } else  {
        printf("Resultado: Carta 2 venceu!");
    }

    return 0;
}
