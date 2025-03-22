#include <stdio.h>

int main(){
    
    //Declaração de variáveis de ambas cartas
    int pontos, pontos2;
    unsigned int populacao, populacao2;
    float area, pib, area2, pib2, densidade, pibpc, densidade2, pibpc2, superpoder, superpoder2;

 
    //CRIAÇÃO DE VARIAVEIS TIPO STRING
    char estado[20]; 
    char codigo[20]; 
    char cidade[20];
    char estado2[20]; 
    char codigo2[20]; 
    char cidade2[20];

    //Pede as informações da primeira carta
    printf("Digite as informacoes da primeira carta:\n");
    
    printf("Nome do estado:\n");
    scanf("%s", &estado);
    
    printf("Codigo da carta:\n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Populacao:\n");
    scanf("%u", &populacao);

    printf("Area:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontos);

    //Pede as informações da segunda carta
    printf("Digite as informacoes da segunda carta:\n");
    
    printf("Nome do estado:\n");
    scanf("%s", &estado2);
     
    printf("Codigo da carta:\n");
    scanf("%s", &codigo2);
 
    printf("Nome da cidade:\n");
    scanf("%s", &cidade2);
 
    printf("Populacao:\n");
    scanf("%u", &populacao2);

    printf("Area:\n");        
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);
 
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontos2);
    
 

     /* 
            char estado[] = "Pernambuco";
            char codigo[] = "PE";
            char cidade[] = "Recife";
            populacao = 854789;
            area = 156;
            pib = 652;
            pontos = 15;

            char estado2[] = "Sao Paulo";
            char codigo2[] = "SP";
            char cidade2[] = "Sao Paulo";
            populacao2 = 854787;
            area2 = 154;
            pib2 = 657;
            pontos2 = 10;
       
   */ 

    //CALCULOS CARTA 1:

    //Divide a população pela area e atribui o resultado a variável densidade
    densidade = (float) populacao / area;
    //Divide o PIB pela população e atribui o resultado a variável pibpc
    // Multiplica o valor de pib por 1 bilhão
    pibpc = (float) (pib * 1000000000) / populacao;
    //Calcular o super poder
    superpoder = (float) populacao + area + pib + pontos + pibpc + (-densidade);

    //CALCULOS CARTA 2:

     //Divide a população pela area e atribui o resultado a variável densidade2
    densidade2 = (float) populacao2 / area2;
    //Divide o PIB pela população e atribui o resultado a variável pibpc2
    // Multiplica o valor de pib2 por 1 bilhão
    pibpc2 = (float) (pib2 * 1000000000) / populacao2;
    //Calcular o super poder
    superpoder2 = populacao2 + area2 + pib2 + pontos2 + pibpc2 + (-densidade2);
    
    //Imprime as informações da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %u\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais.\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpc);
    printf("Super Poder: %.2f\n", superpoder);

    //Imprime as informações da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais.\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Comparação de cartas
    printf("Comparacao de Cartas:\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade, codigo, superpoder);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, codigo2, superpoder2);

    if(superpoder > superpoder2){
        printf("A carta 1 (%s) venceu!\n", cidade);
    } else {
        printf("A carta 2 (%s) venceu!", cidade2);
    }

    /*
    //verifica o resultado booleano e imprime o numero da carta vencedora sendo (1) para Carta 1 e (0) para Carta 2
    printf("Populacao: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1:2, populacao > populacao2); 
    printf("Area: Carta %d venceu (%d)\n", (area > area2) ? 1:2, area > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) ? 1:2, pib > pib2);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos > pontos2) ? 1:2, pontos > pontos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade < densidade2) ? 1:2, densidade < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpc > pibpc2) ? 1:2, pibpc > pibpc2);
    printf("Super Poder: Carta %d venceu (%d)\n", (superpoder > superpoder2) ? 1:2, superpoder > superpoder2);
    */
    return 0;
}