#include <stdio.h>


int main () {


//Declaração de Variáveis:

    char estado1[20], estado2[20];
    char cidade1[20], cidade2[20];
    char codigo1[10], codigo2[10];

    int populacao1, populacao2;
    int pontos1, pontos2;

    float area1, area2;
    float pib1, pib2;

    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;


    //Espaço para inserir as informações da primeira carta:
    
    printf ("--- Carta 01 --- \n");

    printf ("Estado: ");
    scanf ("%s", estado1);

    printf ("Codigo: ");
    scanf ("%s", codigo1);

    printf ("Nome da cidade: ");
    scanf ("%s", cidade1);

    printf ("Populacao: ");
    scanf ("%d", &populacao1);

    printf ("Area: ");
    scanf ("%f", &area1);
   
    printf ("PIB: ");
    scanf ("%f", &pib1);

    printf ("Numero de Pontos Turisticos: ");
    scanf ("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    
    printf ("\n");

    //Espaço para inserir as informações da segunda carta:
    
    printf ("--- Carta 02 --- \n");

    printf ("Estado: ");
    scanf ("%s", estado2);

    printf ("Codigo: ");
    scanf ("%s", codigo2);

    printf ("Nome da cidade: ");
    scanf ("%s", cidade2);

    printf ("Populacao: ");
    scanf ("%d", &populacao2);

    printf ("Area: ");
    scanf ("%f", &area2);
   
    printf ("PIB: ");
    scanf ("%f", &pib2);

    printf ("Numero de Pontos Turisticos: ");
    scanf ("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf ("\n");

    //Espaço para exibir as informações das cartas:
    
    printf ("--- Informacoes das cartas --- \n");

    printf ("Carta 01: \n");
    printf ("Estado: %s \n", estado1);
    printf ("Codigo: %s \n", codigo1);
    printf ("Cidade: %s \n", cidade1);
    printf ("Populacao: %d habitantes \n", populacao1);
    printf ("Area: %.2f Km \n", area1);
    printf ("PIB: %.2f bilhoes de reais \n", pib1);
    printf ("Numero de Pontos Turisticos: %d \n", pontos1);
    printf ("Densidade: %.2f habitantes/Km \n", densidade1);
    printf ("PIB per Capita: %.2f reais \n", pib_per_capita1);

    printf ("\n");

    printf ("Carta 02: \n");
    printf ("Estado: %s \n", estado2);
    printf ("Codigo: %s \n", codigo2);
    printf ("Cidade: %s \n", cidade2);
    printf ("Populacao: %d habitantes \n", populacao2);
    printf ("Area: %.2f Km \n", area2);
    printf ("PIB: %.2f bilhoes de reais \n", pib2);
    printf ("Numero de Pontos Turisticos: %d \n", pontos2);
    printf ("Densidade: %.2f habitantes/Km \n", densidade2);
    printf ("PIB per Capita: %.2f reais \n", pib_per_capita2);

    return 0;
}
