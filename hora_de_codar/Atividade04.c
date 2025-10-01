#include <stdio.h>
int main() {
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 60){
        printf("Voce é idoso! \n");
    } else if (idade >= 18 && idade < 60){
        printf("Voce é adulto! \n");
    }else if (idade >=12 && idade <18){
        printf("Voce é adolescente! \n");
    }else{
        printf("Voce é uma criança! \n");
    }

    return 0;
}