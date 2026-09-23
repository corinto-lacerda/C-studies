/*O intuito central do codigo é exercitar o que estou aprendendo em C, estou documentando num software basicamente tudo que estou aprendendendo
Claro, algumas coisas irão ficar de fora, coisas que eu ainda não vi utilidade, mas as que tem alguma utilidade estarão aqui



no fim, a função do programa será documentar alunos, notas, medias e se eles foram ou não aprovados. tudo 100% em C.

tentarei deixar muito bem comentado e documentado para aqueles que querem começar a estudar programação.


Lembrando, esse codigo foi escrito pensando no Linux.*/



//aqui estou envocando bibliotecas, seria como baixar um conjuntos de ferramentas para eu poder usar no codigo, como ex: printf.
#include <stdlib.h>
#include <stdio.h>

//define cria uma constante!
#define NumTrimestre 4




/*estou invocando as funções do programa, é interessante manter a função main, no caso o corpo principal do seu codigo no inicio
então, as funções, por boa pratica devem ser contruidas lá no final.
mas o computador lê linha por linha, ou seja, ele ler 1°,2°,3°. quando ele ve no topo "void função();" ele sabe que há uma função e 
busca a correspondencia no codigo
pronto, o codigo está utilizando sua função em qualquer parte
*/
void limpar_tela();
void escrever_titulo();
void calcular_media(float notas, float Materias);
void ler_notas(float matriz[][NumTrimestre], int num_materias);
void calcular_notas(float total ,float matriz[][NumTrimestre], int num_materias);





int main() {
    limpar_tela();
    int NumMaterias, Materias, Trimestre; //declaração das variaveis

    escrever_titulo(); //invocando uma função

    printf("\n\n\n Me informe o numero de Materias\n");

    scanf ("%d", &NumMaterias);

    printf("\n %d \n", NumMaterias);
    float NotasAno[NumMaterias][NumTrimestre], SomaMedia;

ler_notas(NotasAno, NumMaterias );
limpar_tela();
escrever_titulo();
calcular_notas( SomaMedia, NotasAno, NumMaterias);

}







void calcular_notas(float total ,float matriz[][NumTrimestre], int num_materias){
    for(int aluno = 0; aluno <  num_materias ; aluno ++){
        total = 0;
        for(int trimestre = 0 ; trimestre < NumTrimestre ; trimestre ++){
            total = total + matriz[aluno][trimestre];
            printf("%.2f ",matriz[aluno][trimestre]);
        }
        calcular_media(total, NumTrimestre);//invocando função que calcula a media
        printf("\n");
    }
    

}
//função que lê as notas e guarda na matriz
void ler_notas(float matriz[][NumTrimestre], int num_materias){
    

    for (int aluno = 0; aluno < num_materias ; aluno++) {
        for (int trimestre = 0; trimestre < NumTrimestre ; trimestre ++) { 
            printf("\n Informe a nota do %d° trimestre : ", trimestre+1);
            scanf(" %f",&matriz[aluno][trimestre]);
                while(matriz[aluno][trimestre] < 0 || matriz[aluno][trimestre] > 10)//validar se a nota está corretamente inserida
                {
                    printf("\nInforme uma nota valida, entre 0 e 10 por favor\n");
                    scanf(" %f",&matriz[aluno][trimestre]);

                }
                
        }
    }
}

/*funções de escrita e limpeza de tela*/
void escrever_titulo(){//função que desenha na tela, ja que seria um desenho complexo, mais facil criar uma função apenas para isso
    printf("\n_____________________________________");
    printf("\n|_________calculadora de notas______|");
    printf("\n|___________________________________|\n");
}
void limpar_tela(){ //função que limpa a tela no linux, não funciona no windows
    system("clear");
}
void calcular_media(float soma,  float materia){ //essa é a função que calcula media e informa se o aluno está ou não aprovado
    /*função que realiza a soma e divisão para extrair total e media*/
    float media = soma/materia/*pega a variavel media e faz do valor dela uma operação matematica
    soma divido por materia*/;  
    float nota_corte = 6.5; //define a nota de corte, central para saber se o aluno está ou não aprovado

        if(media >= nota_corte){    //se, a media for maior ou igual a 6.5, aparecerá tela VOCÊ FOI APROVADO
            printf("\nVocê foi Aprovado!");
        } else { // se não. VOCÊ FOI REPROVADO
            printf("\nVocê foi Reprovado!");
        }

    
    printf("  o Total = %.2f ---------- a Média = %.2f \n", soma, media);//ao fim da função ela expõe, valor total e media 

/*
_____________________________________
|_________calculadora de notas______|
|___________________________________|
Notas : 1.00 2.00 3.00 4.00 
Você foi Reprovado!  o Total = 10.00 ---------- a Média = 2.50 

Notas : 1.00 2.00 3.00 4.00 
Você foi Reprovado!  o Total = 10.00 ---------- a Média = 2.50 


esse seria o retorno final do codigo até o momento  */

        
}