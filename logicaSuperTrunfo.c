#include <stdio.h>

int main(){
    
    //Declaração de variáveis de ambas cartas
    int pontos, pontos2, escolhaJogador;
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
    printf("\nCarta 1:\n");
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
    printf("\nCarta 2:\n");
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

    //JOGADOR ESCOLHE O ATRIBUTO DE COMPARAÇÃO
    printf("\n### ESCOLHA O ATRIBUTO ###\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("ESCOLHA:\n");
    scanf("%d", &escolhaJogador);

    //IMPRIME O NOME DAS CIDADES
    printf("\n### Carta 1 - %s x Carta 2 - %s ###\n", cidade, cidade2);
    
    //IDENTIFICA E IMPRIME A ESCOLHA DO JOGADOR
    switch (escolhaJogador)
    {
    case 1: //ATRIBUTO POPULACAO
        printf("Atributo escolhido: Populacao\n");
        printf("[CARTA 1] Populacao - %u x [CARTA 2] Populacao - %u\n", populacao, populacao2);
        if (populacao == populacao2){
            printf("O JOGO EMPATOU!\n");
        }else if (populacao > populacao2)
        {
            printf("CARTA 1 VENCEU!\n");
        }else{
            printf("CARTA 2 VENCEU!\n");
        }        
        break;
    case 2: //ATRIBUTO AREA
        printf("Atributo escolhido: Area\n");
        printf("[CARTA 1] Area - %.2f x [CARTA 2] Area - %.2f\n", area, area2);
        if (area == area2){
            printf("O JOGO EMPATOU!\n");
        }else if (area > area2)
        {
            printf("CARTA 1 VENCEU!\n");
        }else{
            printf("CARTA 2 VENCEU!\n");
        }        
        break;
    case 3: //ATRIBUTO PIB
        printf("Atributo escolhido: PIB\n");
        printf("[CARTA 1] PIB - %.2f x [CARTA 2] PIB - %.2f\n", pib, pib2);
        if (pib == pib2){
            printf("O JOGO EMPATOU!\n");
        }else if (pib > pib2)
        {
            printf("CARTA 1 VENCEU!\n");
        }else{
            printf("CARTA 2 VENCEU!\n");
        }
        break;
    case 4: //PONTOS TURISTICOS
        printf("Atributo escolhido: Pontos turisticos\n");
        printf("[CARTA 1] Pontos turisticos - %d x [CARTA 2] Pontos turisticos - %d\n", pontos, pontos2);
        if (pontos == pontos2){
            printf("O JOGO EMPATOU!\n");
        }else if (pontos > pontos2)
        {
            printf("CARTA 1 VENCEU!\n");
        }else{
            printf("CARTA 2 VENCEU!\n");
        }
        break;
    case 5: //ATRIBUTO DENSIDADE POPULACIONAL
        printf("Atributo escolhido: Densidade populacional\n");
        printf("[CARTA 1] Densidade populacional - %d x [CARTA 2] Densidade populacional - %d\n", densidade, densidade2);
        if (densidade == densidade2){
            printf("O JOGO EMPATOU!\n");
        }else if (densidade < densidade2)
        {
            printf("CARTA 1 VENCEU!\n");
        }else{
            printf("CARTA 2 VENCEU!\n");
        }
        break;
    
    default:
        printf("Escolha invalida!\n");
        break;
    }
    return 0;
}