/*O intuito central do codigo é exercitar o que estou aprendendo em C, estou documentando num software basicamente tudo que estou aprendendendo
Claro, algumas coisas irão ficar de fora, coisas que eu ainda não vi utilidade, mas as que tem alguma utilidade estarão aqui



no fim, a função do programa será documentar alunos, notas, medias e se eles foram ou não aprovados. tudo 100% em C.

tentarei deixar muito bem comentado e documentado para aqueles que querem começar a estudar programação.*/



//aqui estou envocando bibliotecas, seria como baixar um conjuntos de ferramentas para eu poder usar no codigo, como ex: printf.
#include <stdlib.h>
#include <stdio.h>

//define cria uma constante, é um lugar na memoria com valor fixo no codifo, nada irá mudar o valor dele!
#define NumTrimestre 4

/*estou invocando as funções do programa, é interessante manter a função main, no caso o corpo principal do seu codigo no inicio
então, as funções, por boa pratica devem ser contruidas lá no final.
mas o computador lê linha por linha, ou seja, ele ler 1°,2°,3°. quando ele ve no topo "void função();" ele sabe que há uma função e 
busca a correspondencia no codigo
pronto, o codigo está utilizando sua função em qualquer parte
*/
void LimparTela();
void CalcNotas();
void function_media(float notas, float Materias);


int main() {
    LimparTela();
    int NumMaterias, Materias, Trimestre; //declaração das variaveis

    CalcNotas(); //invocando uma função

    printf("\n\n\n Me informe o numero de Materias\n");
 //fflush(stdin);
    scanf ("%d", &NumMaterias);

    printf("\n %d \n", NumMaterias);
    float NotasAno[NumMaterias][NumTrimestre], SomaMedia;




/*Esse "for" coleta as notas inseridas pelo usuario e guarda na memoria
*/
        for (Materias = 0 ; Materias < NumMaterias ; Materias++ ) { 
    
    
            for(Trimestre = 0 ; Trimestre < NumTrimestre ; Trimestre++) { 
                LimparTela();
                CalcNotas();
        
        
                printf("\nInforme a nota da materia %d no %d° Trimestre\n", Materias+1, Trimestre+1);

        
       
                scanf("%f", &NotasAno[Materias][Trimestre]);
            }
            printf("\n");
        } 

LimparTela();
CalcNotas();


/*esse "for" faz a impressão faz a soma dos valores dos trimestres

logica

materia inicia em 0, se a materia for menor que NumMaterias, adicione 1 a materia ex: materia vale 1? ao fim materia valera 2*/
 
    for (Materias = 0;Materias<NumMaterias ; Materias ++){

        SomaMedia = 0;// sempre que o loop acontecer, essa variavel voltará a valer zero
        printf("Notas : ");
    
    
            for (Trimestre = 0 ; Trimestre < NumTrimestre ; Trimestre ++){/*trimestre começa valendo 0, enquanto trimestre for menor que Num trimestre
                adicione 1 ao ao trimestre
                
                isso o loop que faz a soma das notas ao mesmo tempo que imprime seus valores*/
        
                SomaMedia = SomaMedia + NotasAno[Materias][Trimestre];//aqui vai adicionado ao somamedia os valores informados pelo usuario
        
       
                printf ("%.2f ", NotasAno[Materias][Trimestre]);
        
            }
    /*invocando a função*/
        function_media(SomaMedia, NumTrimestre);//invocando função que calcula a media
    
        printf ("\n");
    }

}





/*funções de escrita e limpeza de tela*/
void CalcNotas(){//função que desenha na tela, ja que seria um desenho complexo, mais facil criar uma função apenas para isso
    printf("\n_____________________________________");
    printf("\n|_________calculadora de notas______|");
    printf("\n|___________________________________|\n");
}
void LimparTela(){ //função que limpa a tela no linux, não funciona no windows
    system("clear");
}
void function_media(float soma,  float materia){ //essa é a função que calcula media e informa se o aluno está ou não aprovado
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
    


        
}