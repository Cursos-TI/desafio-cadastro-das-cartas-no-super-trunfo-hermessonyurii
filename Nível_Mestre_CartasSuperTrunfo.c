#include <stdio.h>
#include <math.h> // Para a função pow()

/*
 * Tarefa da Faculdade
 * DISCIPLINA: PROGRAMAÇÃO EM C
 *
 * Desafio: Super Trunfo = Nível Mestre
 * Objetivo: Comparar cartas e calcular Super Poder
 * Autor: Hermesson Yuri
 * Professor: Sergio Cardoso
 * Data: 22/06/2025
 * GitHub: https://github.com/hermessonyurii
 *
 */

int main() {

    //CARTA 1: ALAGOAS (MACEIÓ)
    
    // Variáveis da Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[] = "Maceio";
    
    // Dados demográficos e econômicos (população agora é unsigned long)
    unsigned long populacao1 = 957916;
    float area1 = 509.6f;
    double pib1 = 27484016310.31;
    int pontos_turisticos1 = 15;
    
    // Cálculos do nível aventureiro
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // CARTA 2: SANTA CATARINA (FLORIANÓPOLIS)
    
    // Variáveis da Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[] = "Florianopolis";
    
    // Dados demográficos e econômicos
    unsigned long populacao2 = 7610361;
    float area2 = 674.844f;
    double pib2 = 65296490000.0f;
    int pontos_turisticos2 = 15;
    
    // Cálculos do nível aventureiro
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // CÁLCULO DO SUPER PODER
    
    // Super Poder: soma de todos os atributos (com densidade invertida)
    float super_poder1 = (populacao1 + area1 + pib1 + pontos_turisticos1 + 
                         pib_per_capita1 + (1/densidade1));
    
    float super_poder2 = (populacao2 + area2 + pib2 + pontos_turisticos2 + 
                         pib_per_capita2 + (1/densidade2));

    // COMPARAÇÃO ENTRE AS CARTAS

    // Variáveis para armazenar os resultados das comparações
    int resultado_populacao = populacao1 > populacao2 ? 1 : 0;
    int resultado_area = area1 > area2 ? 1 : 0;
    int resultado_pib = pib1 > pib2 ? 1 : 0;
    int resultado_pontos = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
    int resultado_densidade = densidade1 < densidade2 ? 1 : 0; // Menor densidade vence
    int resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    int resultado_super_poder = super_poder1 > super_poder2 ? 1 : 0;

    // EXIBIÇÃO DAS CARTAS E RESULTADOS

    // Exibição da Carta 1
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1 / 1e9);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição da Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2 / 1e9);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Exibição dos resultados da comparação
    printf("\n=== RESULTADOS DA COMPARACAO ===\n");
    printf("Populacao: Carta %d vence\n", resultado_populacao + 1);
    printf("Area: Carta %d vence\n", resultado_area + 1);
    printf("PIB: Carta %d vence\n", resultado_pib + 1);
    printf("Pontos Turisticos: Carta %d vence\n", resultado_pontos + 1);
    printf("Densidade: Carta %d vence (menor valor)\n", resultado_densidade + 1);
    printf("PIB per capita: Carta %d vence\n", resultado_pib_per_capita + 1);
    printf("Super Poder: Carta %d vence\n", resultado_super_poder + 1);

    // Cálculo do vencedor geral (maioria de vitórias)
    int vitorias_carta1 = resultado_populacao + resultado_area + resultado_pib +
                         resultado_pontos + resultado_densidade + 
                         resultado_pib_per_capita + resultado_super_poder;
    
    int vitorias_carta2 = 7 - vitorias_carta1; // Total de 7 comparações
    
    printf("\n=== VENCEDOR GERAL ===\n");
    if (vitorias_carta1 > vitorias_carta2) {
        printf("CARTA 1 (%s) VENCEU COM %d DE %d COMPARACOES!\n", 
               cidade1, vitorias_carta1, 7);
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("CARTA 2 (%s) VENCEU COM %d DE %d COMPARACOES!\n", 
               cidade2, vitorias_carta2, 7);
    } else {
        printf("EMPATE! AMBAS AS CARTAS VENCERAM %d COMPARACOES.\n", vitorias_carta1);
    }

    return 0;
}