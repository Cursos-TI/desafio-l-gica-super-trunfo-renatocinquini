#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    char codigo1[4], cidade1[20], estado1[20];
    int populacao1, pontos1;
    float area1, pib1;
    

    char codigo2[4], cidade2[20], estado2[20];
    int populacao2, pontos2;
    float area2, pib2;
    
   
    printf("Cadastro de Cartas Super Trunfo\n\n");

    printf("Carta 1\n");
   
    printf("Digite o nome do estado: \n");
    scanf(" %19[^\n]", estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %19[^\n]", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos1);
    
    printf("\n");
    printf("Carta 2\n");
    
    printf("Digite o nome do estado: \n");
    scanf(" %19[^\n]", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %19[^\n]", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em Km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    float densidade1 = populacao1/area1, densidade2 = populacao2/area2;
    float pibcapita1 = pib1/populacao1, pibcapita2 = pib2/populacao2;

    printf("\n");
    printf("RESULTADOS:\n\n");
    
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d hab.\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Nº de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab./Km²\n", densidade1);
    printf("PIB per Capita: %.2f bilhões de reais/hab.\n", pibcapita1);

    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d hab.\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Nº de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab./Km²\n", densidade2);
    printf("PIB per Capita: %.2f bilhões de reais/hab.\n", pibcapita2);

    printf("\n");

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
    
    if (populacao1 > populacao2)
    {        
        printf("Cidade 1 tem maior população.\n");
        printf("\nA cidade vencedora é: %s\n", cidade1);        
    } else {
        printf("Cidade 2 tem maior população.\n");
        printf("\nA cidade vencedora é: %s\n", cidade2);        
    }

    return 0;
}