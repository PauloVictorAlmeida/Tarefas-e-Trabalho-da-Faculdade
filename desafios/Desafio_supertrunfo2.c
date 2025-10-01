#include <stdio.h>
int main() {

    struct Carta{      //procurei entender para conseguir usar, vai me ajudar a agrupar as duas cartas.
    char codigo[4]; //ex: A01
    int pontos_turisticos;
    unsigned long int populacao;
    float area, pib;
    char nome[50];
    float pibcapital;
    float densidadepopulacional;
    float superpoder;
    };
    
   //criaçao das duas cartas
    struct Carta carta01;
    struct Carta carta02; //vou utilizar para "facilitar na manipulação "
    
    //Cadastro da primeira carta 
    printf("Cadastro da carta 01 \n");

    printf("Digite o codigo: (ex: A01) \n");
    scanf ("%s", &carta01.codigo);

    printf("Digite o nome da Cidade: \n");
    getchar(); //limpa o buffer do teclado
    fgets(carta01.nome, sizeof(carta01.nome), stdin); //nao to conseguindo colocar nome composto

    printf("Digite o numero de habitantes: \n");
    scanf("%u", &carta01.populacao);

    printf("Digite a área dessa regiao: \n");
    scanf("%f", &carta01.area);

    printf("Digite quantos pontos turistos esse estado tem: \n");
    scanf("%d", &carta01.pontos_turisticos);

    printf("Digite o PIB desse estado: \n");
    scanf("%f", &carta01.pib);

    carta01.pibcapital = carta01.pib / carta01.populacao;

    carta01.densidadepopulacional = carta01.populacao /carta01.area;

    //Cadastro da segunda carta 
    printf("\n Cadastro da carta 02 \n");

    printf("Digite o codigo: (ex: A02) \n");
    scanf("%s", &carta02.codigo);

    printf("Digite o nome da Cidade: \n");
    getchar(); //limpa o buffer do teclado
    fgets(carta02.nome, sizeof(carta02.nome), stdin); //nao to conseguindo colocar nome

    printf("Digite o numero de habitantes: \n");
    scanf("%u", &carta02.populacao);

    printf("Digite a área dessa regiao: \n");
    scanf("%f", &carta02.area);

    printf("Digite quantos pontos turistos esse estado tem: \n");
    scanf("%d", &carta02.pontos_turisticos);

    printf("Digite o PIB desse estado: \n");
    scanf("%f", &carta02.pib);

    carta02.pibcapital = carta02.pib / carta02.populacao;

    carta02.densidadepopulacional = carta02.populacao / carta02.area;
    

    //Exibiçao dos dados das cartas
    printf("\n--------Carta01--------\n");

    printf("Codigo: %s \n", carta01.codigo);
    printf("Cidade: %s \n", carta01.nome);
    printf("População: %u \n", carta01.populacao);
    printf("Área: %.2f \n", carta01.area);
    printf("Pontos turisticos: %d \n", carta01.pontos_turisticos);
    printf("PIB: %.2f \n", carta01.pib);
    printf("PIB per capital: %.2f \n", carta01.pibcapital);
    printf("Densidade populacional: %.2f \n", carta01.densidadepopulacional);

    printf("\n--------Carta02--------\n");

    printf("Codigo: %s \n", carta02.codigo);
    printf("Cidade: %s \n", carta02.nome);
    printf("População: %u \n", carta02.populacao);
    printf("Área: %.2f \n", carta02.area);
    printf("Pontos turisticos: %d \n", carta02.pontos_turisticos);
    printf("PIB: %.2f \n", carta02.pib);
    printf("PIB per capital: %.2f \n", carta02.pibcapital);
    printf("Densidade populacional: %.2f \n", carta02.densidadepopulacional);

    //Comparaçao das cartas (com o super poder)
    
    carta01.superpoder = carta01.populacao + carta01.area + carta01.pib + carta01.pontos_turisticos + carta01.pibcapital + carta01.densidadepopulacional;
    carta02.superpoder = carta02.populacao + carta02.area + carta02.pib + carta02.pontos_turisticos + carta02.pibcapital + carta02.densidadepopulacional;

    printf("------Comparação das Cartas: ------\n");
    if(carta01.populacao > carta02.populacao){
        printf("\nPopulação: Carta01 venceu (1)\n");
    } else {
        printf("\nPopulação: Carta02 venceu (0)\n");
    }
   
    if(carta01.area > carta02.area){
        printf("\nArea: Carta01 venceu (1)\n");
    } else {
        printf("\nArea: Carta02 venceu (0)\n");
    }
   
    if(carta01.pib> carta02.pib){
        printf("\nPIB: Carta01 venceu (1)\n");
    } else {
        printf("\nPIB: Carta02 venceu (0)\n");
    }
    
    if(carta01.pontos_turisticos > carta02.pontos_turisticos){
        printf("\nPontos Turisticos: Carta01 venceu (1)\n");
    } else {
        printf("\nPontos Turisticos: Carta02 venceu (0)\n");
    }
    
   if( carta01.densidadepopulacional < carta02.densidadepopulacional){
        printf("\nDensidade Populacional: Carta01 venceu (1)\n");
    } else {
        printf("\nDensidade Populacional: Carta02 venceu (0)\n");
    }

    if (carta01.pibcapital > carta02.pibcapital){
    printf("\nSuperpoder: Carta01 venceu (1)\n");
    } else {
        printf("\nSuperpoder: Carta02 venceu (0)\n");
    }    
    if (carta01.superpoder > carta02.superpoder) {
        printf("\nSuperpoder: Carta01 venceu (1)\n");
    } else {
        printf("\nSuperpoder: Carta02 venceu (0)\n");
    } 
    
    
    return 0;
}