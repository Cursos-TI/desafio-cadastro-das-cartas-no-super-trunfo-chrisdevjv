#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    printf("Digite as informações da Carta A: \n");
    //armazena informações da carta A
    char estado[30];
    printf("Digite o estado:");
    scanf("%s",estado);
    char codigo[30];
    printf("Digite o codigo:");
    scanf("%s",codigo);
    char nomeCidadeC1[20];
    printf("Digite o nome da cidade:");
    scanf("%s",nomeCidadeC1);
    int populacaoC1;
    printf("Digite o numero da população:");
    scanf("%i", &populacaoC1);
    float areaC1;
    printf("Digite a área:");
    scanf("%f", &areaC1);
    float pibC1;
    printf("Digite o PIB:");
    scanf("%f", &pibC1);
    int numeroPontosTuristicosC1;
    printf("Digite o número de pontos turísticos:");
    scanf("%i", &numeroPontosTuristicosC1);

    printf("Digite as informações da Carta B: \n");
    //armazena informações da carta B
    char estadoC2[30];
    printf("Digite o estado:");
    scanf("%s",estadoC2);
    char codigoC2[30];
    printf("Digite o codigo:");
    scanf("%s",codigoC2);
    char nomeCidadeC2[20];
    printf("Digite o nome da cidade:");
    scanf("%s",nomeCidadeC2);
    int populacaoC2;
    printf("Digite o numero da população:");
    scanf("%i", &populacaoC2);
    float areaC2;
    printf("Digite a área:");
    scanf("%f", &areaC2);
    float pibC2;
    printf("Digite o PIB:");
    scanf("%f", &pibC2);
    int numeroPontosTuristicosC2;
    printf("Digite o número de pontos turísticos:");
    scanf("%i", &numeroPontosTuristicosC2);


    printf("\n-----\n");
    //imprime informações da carta A
    printf("Carta A\n");
    printf("Estado: %s \nCodigo: %s \nCidade: %s \nPopulação: %i \nÁrea: %f \nPIB: %f \nPontos Turísticos: %i", estado,codigo,nomeCidadeC1,populacaoC1,areaC1,pibC1,numeroPontosTuristicosC1);

    printf("\n-----\n");
    
    //imprime informações da carta B
    printf("Carta B\n");
    printf("Estado: %s \nCodigo: %s \nCidade: %s \nPopulação: %i \nÁrea: %f \nPIB: %f \nPontos Turísticos: %i", estadoC2,codigoC2,nomeCidadeC2,populacaoC2,areaC2,pibC2,numeroPontosTuristicosC2);
  

    return 0;
}
