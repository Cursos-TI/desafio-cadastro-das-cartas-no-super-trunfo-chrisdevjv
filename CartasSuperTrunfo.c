#include <stdio.h>

int main() {
    char estadoC1[2];
    char codigoCarta1[200], nomeCidadeC1[200];
    char estadoC2[2];
    char codigoCarta2[200], nomeCidadeC2[200];
    int populacaoC1, numeroPontosTuristicosC1;
    int populacaoC2, numeroPontosTuristicosC2;
    float areaC1, pibC1;
    float areaC2, pibC2;
    

    // ---- Carta 1 ----
    printf("Digite o estado:");
    scanf("%s", estadoC1);
    printf("Digite o código da carta:");
    scanf("%s", codigoCarta1); 
    printf("Digite o nome da cidade:\n");
    scanf(" %20[^\n]", nomeCidadeC2);
    printf("Digite a população:\n");
    scanf("%d", &populacaoC1);
    printf("Digite a area:\n");
    scanf("%f", &areaC1);
    printf("Digite o PIB:\n");
    scanf("%f", &pibC1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%i", &numeroPontosTuristicosC1); 
    float densidadePopulacionalC1 = populacaoC1 / areaC1;
    float pibPerCapitaC1 = (pibC1 * 1000000000.0) / populacaoC1;
    // ---- Carta 2 ----
    printf("Digite o estado:");
    scanf("%s", estadoC2);
    printf("Digite o código da carta:");
    scanf("%s", codigoCarta2); 
    printf("Digite o nome da cidade:\n");
    scanf(" %20[^\n]", nomeCidadeC2);
    printf("Digite a população:\n");
    scanf("%d", &populacaoC2);
    printf("Digite a area:\n");
    scanf("%f", &areaC2);
    printf("Digite o PIB:\n");
    scanf("%f", &pibC2);
    printf("Digite o número de pontos turísticos:\n ");
    scanf("%i", &numeroPontosTuristicosC2); 
    float densidadePopulacionalC2 = populacaoC2 / areaC2;
    float pibPerCapitaC2 = (pibC2 * 1000000000.0) / populacaoC2;

    // ---- Saída Carta 1 ----
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estadoC1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidadeC1);
    printf("População: %d\n", populacaoC1);
    printf("Área: %.2f\n", areaC1);
    printf("PIB: %.2f\n", pibC1);
    printf("Número de Pontos Turísticos: %i\n", numeroPontosTuristicosC1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalC1);
    printf("PIB per Capita: %.2f reais", pibPerCapitaC1);

    // ---- Saída Carta 2 ----
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estadoC2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidadeC2);
    printf("População: %d\n", populacaoC2);
    printf("Área: %.2f\n", areaC2);
    printf("PIB: %.2f\n", pibC2);
    printf("Número de Pontos Turísticos: %i\n", numeroPontosTuristicosC2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalC2);
    printf("PIB per Capita: %.2f reais", pibPerCapitaC2);

    return 0;
}
