#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gera num numero aleatorio 
    srand(time(0));
    numeroComputador = rand()%100 + 1;

    printf("Jogo de Adivinhaçao \n");
    printf("M, maior \n");
    printf("N, menor \n");  
    printf("I, igual \n");
    printf("Escolha a comparaçao:  \n");
    scanf("%c", &tipoComparacao);
    printf("Escolha um numero entre 1 e 100:  \n");
    printf("Digite o seu numero (1-100): \n");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao){
    case 'M':
    case 'm': // coloquei para quando o usuario digitar m maiusculo ou minusculo
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n': // coloquei para quando o usuario digitar n maiusculo ou minusculo
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i': // coloquei para quando o usuario digitar i maiusculo ou minusculo
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
    default:
        printf("Opçao invalida! \n");
        break;
    }

    if (resultado == 1){
        printf("Parabens, voce ganhou! \n");
        printf("Numero do jogador: %d \n", numeroJogador);
        printf("Numero do computador: %d \n", numeroComputador);
    }else{
        printf("Voce perdeu! \n!");
        printf("Numero do jogador: %d \n", numeroJogador); 
        printf("Numero do computador: %d \n", numeroComputador);
    }


 return 0;
}
