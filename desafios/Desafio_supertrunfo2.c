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
    int menu;
    int atributo1, atributo2;;
    
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
    printf("Escolha o atributo para comparar as cartas: \n");
    printf("1 - Pontos Turisticos \n");
    printf("2 - População \n");
    printf("3 - Área \n");
    printf("4 - PIB \n");
    printf("5 - PIB per Capital \n");
    printf("6 - Densidade Populacional \n");
    printf("Digite a sua escolha: \n");
    scanf("%d", &menu);

     printf("Carta 01: %s \n", carta01.nome);
    printf("Carta 02: %s \n", carta02.nome);
    switch (menu){
    case 1:
        if (carta01.pontos_turisticos > carta02.pontos_turisticos){
            printf("A quantidade de pontos turisticos da carta 01 é maior: %d \n", carta01.pontos_turisticos);
            printf("Carta 01 é a vencedora! \n");
        } else if (carta01.pontos_turisticos < carta02.pontos_turisticos){
            printf("A quantidade de pontos turisticos da carta 02 é maior: %d \n", carta02.pontos_turisticos);
            printf("Carta 02 é a vencedora! \n");
        } else {
            printf("Empate! \n");
        }
        break;
    case 2:{
        if (carta01.populacao > carta02.populacao){
            printf("A quantidade de habitantes da carta 01 é maior: %u \n", carta01.populacao);
            printf("Carta 01 é a vencedora! \n");
        }else if (carta01.populacao < carta02.populacao){
            printf("A quantidade de habitantes da carta 02 é maior: %u \n", carta02.populacao);
            printf("Carta 02 é a vencedora! \n");
        } else {
            printf("Empate! \n");
        }
        }
        break;
    case 3:{
        if (carta01.area > carta02.area){
            printf("A área da carta 01 é maior: %.2f \n", carta01.area);
            printf("Carta 01 é a vencedora! \n");
        }else if (carta01.area < carta02.area){
            printf("A área da carta 02 é maior: %.2f \n", carta02.area);
            printf("Carta 02 é a vencedora! \n");
        } else {
            printf("Empate! \n");
        }
        }
        break;
    case 4:{
        if (carta01.pib > carta02.pib){
            printf("O PIB da carta 01 é maior: %.2f \n", carta01.pib);
            printf("Carta 01 é a vencedora! \n", carta01.nome);
        }else if (carta01.pib < carta02.pib){
            printf("O PIB da carta 02 é maior: %.2f \n", carta02.pib);
            printf("Carta 02 é a vencedora! \n");
        } else {
            printf("Empate! \n");
        }
        }
        break;
    case 5:{
        if (carta01.pibcapital > carta02.pibcapital){
            printf("A carta 01 tem o maior PIB per capital: %.2f \n", carta01.pibcapital);
            printf("Carta 01 é a vencedora! \n");
        }else if (carta01.pibcapital < carta02.pibcapital){
            printf("A carta 02 tem o maior PIB per capital: %.2f \n", carta02.pibcapital);
            printf("Carta 02 é a vencedora! \n");
        } else {
            printf("Empate! \n");
        }
        }
        break;
     case 6:{
        if (carta01.densidadepopulacional < carta02.densidadepopulacional){
            printf("A carta 01 tem a menor densidade populacional: %.2f \n", carta02.densidadepopulacional);
            printf("Carta 02 é a vencedora! \n");
        }else if (carta01.densidadepopulacional > carta02.densidadepopulacional){
            printf("A carta 02 tem a menor densidade populacional: %.2f \n", carta01.densidadepopulacional);
            printf("Carta 01 é a vencedora! \n");
        } else {
            printf("Empate! \n");
        }
        }
        break;
    default:
        printf("Opção inválida! \n");
        break;
    }
    //nao soube o que fazer com o supepoder, deixei guardado para caso eu use futuramente com algum feedback do professor

    printf("Escolha o primeiro atributo para ser comparado: \n");
    printf("1 - Pontos Turisticos \n");
    printf("2 - População \n");
    printf("3 - Área \n");  
    printf("4 - PIB \n");
    printf("5 - PIB per Capital \n");
    printf("6 - Densidade Populacional \n");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo (diferete do primeiro): \n");
    if (atributo1 != 1) printf("1 - Pontos Turisticos \n");
    if (atributo1 != 2) printf("2 - Populaçao \n");
    if (atributo1 != 3) printf("3 - Área \n");  
    if (atributo1 != 4) printf("4 - PIB \n");
    if (atributo1 != 5) printf("5 - PIB per Capital \n");
    if (atributo1 != 6) printf("6 - Densidade Populçional \n");

    scanf("%d", &atributo2);
    
    if(atributo1 == atributo2){
        printf("Erro: Voce escolheu o mesmo atributo! \n");
    }
    
    float valor1carta1 = 0, valor1carta2 = 0;
    float valor2carta1 = 0, valor2carta2 = 0;

// Primeiro atributo
switch (atributo1) {
    case 1:
        valor1carta1 = carta01.pontos_turisticos;
        valor1carta2 = carta02.pontos_turisticos;
        break;
    case 2:
        valor1carta1 = carta01.populacao;
        valor1carta2 = carta02.populacao;
        break;
    case 3:
        valor1carta1 = carta01.area;
        valor1carta2 = carta02.area;
        break;
    case 4:
        valor1carta1 = carta01.pib;
        valor1carta2 = carta02.pib;
        break;
    case 5:
        valor1carta1 = carta01.pibcapital;
        valor1carta2 = carta02.pibcapital;
        break;
    case 6:
        valor1carta1 = carta01.densidadepopulacional;
        valor1carta2 = carta02.densidadepopulacional;
        break;
}

// Segundo atributo
switch (atributo2) {
    case 1:
        valor2carta1 = carta01.pontos_turisticos;
        valor2carta2 = carta02.pontos_turisticos;
        break;
    case 2:
        valor2carta1 = carta01.populacao;
        valor2carta2 = carta02.populacao;
        break;
    case 3:
        valor2carta1 = carta01.area;
        valor2carta2 = carta02.area;
        break;
    case 4:
        valor2carta1 = carta01.pib;
        valor2carta2 = carta02.pib;
        break;
    case 5:
        valor2carta1 = carta01.pibcapital;
        valor2carta2 = carta02.pibcapital;
        break;
    case 6:
        valor2carta1 = carta01.densidadepopulacional;
        valor2carta2 = carta02.densidadepopulacional;
        break;
}


float soma1 = valor1carta1 + valor2carta1;
float soma2 = valor1carta2 + valor2carta2;


printf("\n---- COMPARAÇÃO ENTRE CARTAS ----\n");
printf("Carta 01: %s", carta01.nome);
printf("Carta 02: %s", carta02.nome);

printf("\nAtributo 1 (escolha %d):\n", atributo1);
printf("Carta 01: %.2f\n", valor1carta1);
printf("Carta 02: %.2f\n", valor1carta2);

printf("\nAtributo 2 (escolha %d):\n", atributo2);
printf("Carta 01: %.2f\n", valor2carta1);
printf("Carta 02: %.2f\n", valor2carta2);

printf("\nSoma dos atributos:\n");
printf("Carta 01: %.2f\n", soma1);
printf("Carta 02: %.2f\n", soma2);

// Comparação final
if (soma1 > soma2)
    printf("\nResultado: Carta 01 venceu!\n");
else if (soma2 > soma1)
    printf("\nResultado: Carta 02 venceu!\n");
else
    printf("\nResultado: Empate!\n");
return 0;
}
