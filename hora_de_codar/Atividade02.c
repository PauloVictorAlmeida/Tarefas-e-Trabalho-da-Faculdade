//Atividade de calcular a media de um estudante

#include <stdio.h>

int main (){

    //exemplo utilizando o int (nao muito recomendado)

    /*int media1, media2, media3;
    int mediafinal;
    
    printf("------ Calculador de Media ------ \n");

    printf("Digite a sua primeira nota: \n");
    scanf("%d", &media1);

    printf("Digite a sua segunda nota: \n");
    scanf("%d", &media2);
    
    printf("Digite a sua terceira nota: \n");
    scanf("%d", &media3);

    mediafinal = (media1 + media2 + media3) /3;

    printf("A sua media é = %d", mediafinal);*/

    //exemplo utilizando o float
    float media1, media2, media3;
    float mediafinal;
    
    printf("------ Calculador de Media ------ \n");

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &media1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f", &media2);
    
    printf("Digite a sua terceira nota: \n");
    scanf("%f", &media3);

    mediafinal = (media1 + media2 + media3) /3;

    printf("A sua media é = %.2f", mediafinal);


    return 0;
}