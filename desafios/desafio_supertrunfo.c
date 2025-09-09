#include <stdio.h>
int main() {

    struct Carta{      //procurei entender para conseguir usar, vai me ajudar a agrupar as duas cartas.
    char codigo[4]; //ex: A01
    int populacao, pontos_turisticos;
    float area, pib;
    char nome[50];
    float pibcapital;
    float densidadepopulacional;
    };
    
   //criaçao das duas cartas
    struct Carta carta01;
    struct Carta carta02; //vou utilizar para "facilitar na manipulação "
    
    //Cadastro da primeira carta 
    printf("Cadastro da carta 01 \n");

    printf("Digite o codigo: (ex: A01) \n");
    scanf ("%s", &carta01.codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &carta01.nome);  //nao to conseguindo colocar nome composto

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &carta01.populacao);

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
    scanf("%s", &carta02.nome); //nao to conseguindo colocar nome

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &carta02.populacao);

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
    printf("População: %d \n", carta01.populacao);
    printf("Área: %.2f \n", carta01.area);
    printf("Pontos turisticos: %d \n", carta01.pontos_turisticos);
    printf("PIB: %.2f \n", carta01.pib);
    printf("PIB per capital: %.2f \n", carta01.pibcapital);
    printf("Densidade populacional: %.2f \n", carta01.densidadepopulacional);

    printf("\n--------Carta02--------\n");

    printf("Codigo: %s \n", carta02.codigo);
    printf("Cidade: %s \n", carta02.nome);
    printf("População: %d \n", carta02.populacao);
    printf("Área: %.2f \n", carta02.area);
    printf("Pontos turisticos: %d \n", carta02.pontos_turisticos);
    printf("PIB: %.2f \n", carta02.pib);
    printf("PIB per capital: %.2f \n", carta02.pibcapital);
    printf("Densidade populacional: %.2f \n", carta02.densidadepopulacional);

    return 0;
}