#include <stdio.h>

int main(){
    char estado1[50], estado2[50], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2, codigo_carta1, codigo_carta2;
    float area1, area2, PIB1, PIB2;

    printf("\nINFORMAÇÕES DA CARTA 1\n");
    printf("\nDigite o estado: ");
    scanf("%s", &estado1);
    printf("Digite o Código: ");
    scanf("%d", &codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);
    printf("Digite o Nº da população: ");
    scanf("%d", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o Nº de pontos turisticos: ");
    scanf("%d", &ponto_turistico1);

    printf("\nINFORMAÇÕES DA CARTA 2\n");
    printf("\nDigite o estado: ");
    scanf("%s", &estado2);
    printf("Digite o Código: ");
    scanf("%d", &codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);
    printf("Digite o Nº da população: ");
    scanf("%d", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o Nº de pontos turisticos: ");
    scanf("%d", &ponto_turistico2);

    printf("__________________________________________\n");

    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s0%d \n", estado1, codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \nÁrea: %f Km² \nPIB: %f bilhões de Reais \n", populacao1, area1, PIB1);
    printf("Número de pontos turísticos: %d\n", ponto_turistico1);

    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s0%d \n", estado1, codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \nÁrea: %f Km² \nPIB: %f bilhões de Reais \n", populacao2, area2, PIB2);
    printf("Número de pontos turísticos: %d", ponto_turistico2);

}