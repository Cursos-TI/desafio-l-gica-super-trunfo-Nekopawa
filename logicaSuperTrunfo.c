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
    int resultado1, resultado2;

    /* CARTA 1 */
    // Menu para seleção do atributo da carta 1
    printf("\n\nInforme o primeiro atributo que será comparado:\n");
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
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
      
        // Atributo 2 - área
        case 2:
            printf("\nAtributo escolhido: área.\n");
            resultado1 = area1 > area2 ? 1 : 0;        
            break;        
        
        // Atributo 3 - PIB
        case 3:
            printf("\nAtributo escolhido: PIB.\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;        
            
        // Atributo 4 - número de pontos turísticos
        case 4:
            printf("\nAtributo escolhido: número de pontos turísticos.\n");
            resultado1 = qtdPontosTuristicos1 > qtdPontosTuristicos2 ? 1 : 0;        
            break;        

        // Atributo 5 - densidade demográfica
        case 5:
            printf("\nAtributo escolhido: densidade demográfica.\n");
            resultado1 = densidadeDemografica1 > densidadeDemografica2 ? 1 : 0;
            break;

        default:
            printf("Não existe um atributo com a opção selecionada.");
            break;
    }

    /* CARTA 2 */
    // Menu para seleção do atributo da carta 2
    printf("\n\nInforme o segundo atributo que será comparado:\n");
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
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
      
        // Atributo 2 - área
        case 2:
            printf("\nAtributo escolhido: área.\n");
            resultado2 = area1 > area2 ? 1 : 0;        
            break;        
        
        // Atributo 3 - PIB
        case 3:
            printf("\nAtributo escolhido: PIB.\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;        
            
        // Atributo 4 - número de pontos turísticos
        case 4:
            printf("\nAtributo escolhido: número de pontos turísticos.\n");
            resultado2 = qtdPontosTuristicos1 > qtdPontosTuristicos2 ? 1 : 0;        
            break;        

        // Atributo 5 - densidade demográfica
        case 5:
            printf("\nAtributo escolhido: densidade demográfica.\n");
            resultado2 = densidadeDemografica1 > densidadeDemografica2 ? 1 : 0;
            break;

        default:
            printf("Não existe um atributo com a opção selecionada.");
            break;    
    }
    
    //Verificar resultados
    if (resultado1 && resultado2) {
        printf("\nCarta 1 - %s venceu!", nome1);
    } else if (resultado1 != resultado2) {
        printf("\nEmpate!");
    } else {
        printf("\nCarta 2 - %s venceu!", nome2);
    }

    return 0;
}
