#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Atributos cidade 1
    int codigo1 = 1;
    char nome1[50] = "São Paulo";
    int populacao1 = 50000;
    float area1 = 456.89;
    float pib1 = 3000.63;
    int qtdPontosTuristicos1 = 12;
    float densidadeDemografica1 = (float) populacao1 / area1;
    
    // Atributos cidade 2
    int codigo2 = 2;
    char nome2[50] = "Rio de Janeiro";
    int populacao2 = 45063;
    float area2 = 10034.00;
    float pib2 = 4050.00;
    int qtdPontosTuristicos2 = 12;
    float densidadeDemografica2 = (float) populacao2 / area2;
 
    int escolha;

    // Menu para seleção do atributo
    printf("\n\nInforme o atributo que será comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &escolha);

    switch (escolha) {
        // Atributo 1 - população
        case 1:
            printf("\nAtributo escolhido: população.\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 - %s venceu!\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("Carta 2 - %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }        
            break;        
      
        // Atributo 2 - área
        case 2:
            printf("\nAtributo escolhido: área.\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);
            if (area1 > area2) {
                printf("Carta 1 - %s venceu!\n", nome1);
            } else if (area1 < area2) {
                printf("Carta 2 - %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }        
            break;        
        
        // Atributo 3 - PIB
        case 3:
            printf("\nAtributo escolhido: PIB.\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Carta 1 - %s venceu!\n", nome1);
            } else if (pib1 < pib2) {
                printf("Carta 2 - %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }        
            break;        
            
        // Atributo 4 - número de pontos turísticos
        case 4:
            printf("\nAtributo escolhido: número de pontos turísticos.\n");
            printf("%s: %d\n", nome1, qtdPontosTuristicos1);
            printf("%s: %d\n", nome2, qtdPontosTuristicos2);
            if (qtdPontosTuristicos1 > qtdPontosTuristicos2) {
                printf("Carta 1 - %s venceu!\n", nome1);
            } else if (qtdPontosTuristicos1 < qtdPontosTuristicos2) {
                printf("Carta 2 - %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }        
            break;        

        // Atributo 5 - densidade demográfica
        case 5:
            printf("\nAtributo escolhido: densidade demográfica.\n");
            printf("%s: %.2f\n", nome1, densidadeDemografica1);
            printf("%s: %.2f\n", nome2, densidadeDemografica2);
            if (densidadeDemografica1 < densidadeDemografica2) {
                printf("Carta 1 - %s venceu!\n", nome1);
            } else if (densidadeDemografica1 > densidadeDemografica2) {
                printf("Carta 2 - %s venceu!\n", nome2);
            } else {
                printf("Empate!\n");
            }        
            break;

        default:
            printf("Não existe um atributo com a opção selecionada.");
        }
        
    return 0;
}
