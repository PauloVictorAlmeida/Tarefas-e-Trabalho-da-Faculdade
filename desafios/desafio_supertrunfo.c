int main() {

    struct Carta{      //procurei entender para conseguir usar, vai me ajudar a agrupar as duas cartas.
    char codigo[4]; //ex: A01
    int populaçao, pontos_turisticos;
    float area, pib;
    char nome[50];
    };
    
   //criaçao das duas cartas
    struct Carta carta01;
    struct Carta carta02; //vou utilizar para "facilitar na manipulação "
    
    //Cadastro da primeira carta 
    printf("Cadastro da carta 01 \n");

    printf("Digite o codigo: (ex: A01) \n");
    scanf ("%d", &carta01.codigo);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &carta01.nome);
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &carta01.populaçao);
    printf("Digite a área dessa regiao: \n");
    scanf("%f", &carta01.area);
    printf("Digite quantos pontos turistos esse estado tem: \n");
    scanf("%d", &carta01.pontos_turisticos);
    printf("Digite o PIB desse estado: \n");
    scanf("%f", &carta01.pib);

    //Cadastro da segunda carta 
    printf("\n Cadastro da carta 02 \n");

    printf("Digite o codigo: (ex: A02) \n");
    scanf("%s", &carta02.codigo);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &carta02.nome);
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &carta02.populaçao);
    printf("Digite a área dessa regiao: \n");
    scanf("%f", &carta02.area);
    printf("Digite quantos pontos turistos esse estado tem: \n");
    scanf("%d", &carta02.pontos_turisticos);
    printf("Digite o PIB desse estado: \n");
    scanf("%f", &carta02.pib);
    

    //Exibiçao dos dados das cartas
    printf("\n--------Carta01--------\n");

    printf("Codigo: %s \n", carta01.codigo);
    printf("Cidade: %s \n", carta01.nome);
    printf("População: %d \n", carta01.populaçao);
    printf("Área: %.2f \n", carta01.area);
    printf("Pontos turisticos: %d \n", carta01.pontos_turisticos);
    printf("PIB: %.2f \n", carta01.pib);

    printf("\n--------Carta02--------\n");

    printf("Codigo: %s \n", carta02.codigo);
    printf("Cidade: %s \n", carta02.nome);
    printf("População: %d \n", carta02.populaçao);
    printf("Área: %.2f \n", carta02.area);
    printf("Pontos turisticos: %d \n", carta02.pontos_turisticos);
    printf("PIB: %.2f \n", carta02.pib);
 

    return 0;
}