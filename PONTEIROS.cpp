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



    printf("defina o valor de b : ");
    scanf(" %d", &b);
    printf("\no valor de b é :%d\n",b);

    //o '&' indica alocação na memoria para um valor. então o ponteiro é igual ao lugar na memoria que a variavel b
    ponteiro = &b;
    *ponteiro = 40;

    printf("agora o valor de b é: %d",b);



return 0;
}