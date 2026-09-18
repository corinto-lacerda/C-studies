#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main (){
    //declarando um ponteiro utilizando
    int *ponteiro;
    int b;
    /*Variavel possui 2 campos [sua posição na memoria][valor que armazena]
      Ponteiro possui [posição na memoria][posição da memoria que está armazenando]
      
      ponteiro aponta rsrs:)*/


    printf("defina o valor de b : ");
    scanf(" %d", &b);
    printf("\no valor de b é :%d\n",b);

    //o '&' indica alocação na memoria para um valor. então o ponteiro é igual ao lugar na memoria que a variavel b
    ponteiro = &b;
    /*como a variavel 'ponteiro' está recebendo o local na memoria onde está a variavel 'b'
    e o atesrisco  sinaliza o apontamento, algo como o apontamento de conteudo da variavel
    ao colocar *ponteiro = 40, 'b' irá valer 40"*/
    *ponteiro = 40;

    printf("agora o valor de b é: %d",b);





return 0;
}