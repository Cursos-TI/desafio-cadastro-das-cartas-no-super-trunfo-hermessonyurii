#include <stdio.h> 
// Biblioteca para entrada e saída (printf, scanf)

/*
 * Tarefa da Faculdade
 * DISCIPLINA: PROGRAMAÇÃO EM C
 *
 * Desafio: Super Trunfo = Nível Aventureiro
 * Objetivo: Cadastrar e exibir cartas para o jogo Super Trunfo com dados de cidades, incluindo cálculos de densidade populacional e PIB per capita
 * Autor: Hermesson Yuri
 * Data: 22/06/2025
 * GitHub: https://github.com/hermessonyurii
 *
 */

int main() {
    
    // CARTA 1: ALAGOAS (MACEIÓ)
    
    // Variáveis da Carta 1
    char estado1 = 'A'; // Estado: Alagoas
    char codigo1[4] = "A01"; // Código da Carta
    char cidade1[] = "Maceio"; // Nome da Cidade
    
    // Dados demográficos e econômicos
    int populacao1 = 957916; // População (Fonte: IBGE)
    float area1 = 509.6f; // Área em km² (Fonte: IBGE)
    double pib1 = 27484016310.31; // PIB em R$ (Fonte: Prefeitura de Maceió)
    int pontos_turisticos1 = 15; // Pontos Turísticos (Fonte: TripAdvisor)
    
    // Novos cálculos para o nível aventureiro
    float densidade1 = populacao1 / area1; // Densidade populacional (hab/km²)
    float pib_per_capita1 = pib1 / populacao1; // PIB per capita (R$/hab)

    // CARTA 2: SANTA CATARINA (FLORIANÓPOLIS)
    
    // Variáveis da Carta 2
    char estado2 = 'B'; // Estado: Santa Catarina
    char codigo2[4] = "B02"; // Código da Carta
    char cidade2[] = "Florianopolis"; // Nome da Cidade
    
    // Dados demográficos e econômicos
    int populacao2 = 7610361; // População (Fonte: IBGE)
    float area2 = 674.844f; // Área em km² (Fonte: IBGE)
    double pib2 = 65296490000.0f; // PIB em R$ (Fonte: SCTD)
    int pontos_turisticos2 = 15; // Pontos Turísticos (Fonte: TripAdvisor)
    
    // Novos cálculos para o nível aventureiro
    float densidade2 = populacao2 / area2; // Densidade populacional (hab/km²)
    float pib_per_capita2 = pib2 / populacao2; // PIB per capita (R$/hab)

    // EXIBIÇÃO DAS CARTAS COM OS NOVOS CÁLCULOS

    // Exibindo a Carta 1 com informações adicionais
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1 / 1000000000.0f);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);

    // Exibindo a Carta 2 com informações adicionais
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2 / 1000000000.0f);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}