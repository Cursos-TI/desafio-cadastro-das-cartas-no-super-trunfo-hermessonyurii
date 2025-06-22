#include <stdio.h> 
// Biblioteca  para entrada e saída (printf, scanf)

/*
 * Tarefa da Faculdade
 * DISCIPLINA: PROGRAMAÇÃO EM C
 *
 * Desafio: Super Trunfo = Nível Novato
 * Objetivo: Cadastrar e exibir cartas para o jogo Super Trunfo com dados de cidades
 * Autor: Hermesson Yuri
 * Data: 19/06/2025 Finalizei em 20/06/2025
 * GitHub: https://github.com/hermessonyurii
 *
 */

 int main(){

    // CARTA 1: Alagoas
    // Variáveis da Carta 1
    char estado1 = 'A'; //  Estado: Alagoas
    char codigo1[4] = "A01"; // Código da Carta
    char cidade1[] = "Maceio"; // Nome da Cidade
    int populacao1 = 957916; // População Fonte "https://www.ibge.gov.br/cidades-e-estados/al/maceio.html"
    float area1 =  509.6f; // Área em km² Fonte "https://www.ibge.gov.br/cidades-e-estados/al/maceio.html"
    double pib1 = 27484016310.31; // PIB em R$ Fonte "https://maceio.al.gov.br/noticias/sefaz/maceio-registra-maior-crescimento-do-pib-entre-as-capitais-do-nordeste"
    int pontos_turisticos1 = 15; // Pontos Turísticos Fonte "https://www.tripadvisor.com.br/Attractions-g303216-Activities-Maceio_State_of_Alagoas.html"

    // Exibindo a Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d  habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000.0f);
    printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos1);

    // CARTA 2: Santa Catarina
    // Variáveis da Carta 2
    char estado2 = 'B'; // Estado: Santa Catarina
    char codigo2[4] = "B02"; // Código da Carta 
    char cidade2[] = "Florianopolis"; // Nome da Cidade
    int populacao2 = 7610361; // População Fonte "https://cidades.ibge.gov.br/brasil/sc/panorama"
    float area2 = 674.844f; // Aréa em km² Fonte "https://www.ibge.gov.br/cidades-e-estados/sc/florianopolis.html"
    double pib2 = 65296490000.0f; // PIB em R$ Fonte "https://sctd.com.br/economia/sc-lidera-crescimento-do-pib-com-alta-de-69/#:~:text=Apenas%20nos%20primeiros%20quatro%20meses,US%5C%24%2011%2C9%20bilh%C3%B5es."
    int pontos_turisticos2 = 15; // Pontos Turísticos Fonte "https://www.tripadvisor.com.br/Attractions-g303570-Activities-State_of_Santa_Catarina.html"


    // Exibindo a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000.0f);
    printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
 }