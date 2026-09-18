/*A atividade passada pelo professor pedia que eu fizesse um programa que utilizasse uma matriz
com valores previamente declarados e imprimisse na tela os valores invertidos

EXEMPLO : foi declarado [1][2][3] 
                        [4][5][6]

O programa irá retornar [6][5][4] 
                        [3][2][1]                        
                        */ 


#include <stdlib.h>
#include <stdio.h>

#define NumTRIMESTRE 4
void limpar_tela();
void calculadora_notas();

int main() {
limpar_tela();
int NumMATERIAS, materias, trimestre;

calculadora_notas();

printf("\n\n\n Me informe o numero de Materias\n");
 //fflush(stdin);
scanf ("%d", &NumMATERIAS);

printf("\n %d \n", NumMATERIAS);
float NAno[NumMATERIAS][NumTRIMESTRE];




/*Esse for coleta as notas inseridas pelo usuario e guarda na memoria
*/
for (materias = 0 ; materias < NumMATERIAS ; materias++ ) { 
    
    
    for(trimestre = 0 ; trimestre < NumTRIMESTRE ; trimestre++) { 
        limpar_tela();
        calculadora_notas();
        
        
        printf("\nInforme a nota da materia %d\n", materias+1);

        
       
        scanf("%f", &NAno[materias][trimestre]);
    }
    printf("\n");
} 

limpar_tela();
calculadora_notas();


/*aqui faz a impressão inversa, começando a imprimir pela ultima
fazendo o inverso, a ultima primeiro e a primeira por ultimo
*/ 


for (materias = NumMATERIAS-1;materias>=0 ; materias --){
/*/for (materias =0 ; materias<NumMATERIAS ; materias++){ essa linha não estava correta, ela só invertia os valores dentro das linhas
mas não as linhas, agora estará correto */


    for (trimestre = NumTRIMESTRE - 1 ; trimestre >= 0 ; trimestre --){
        
        
        printf ("%.2f ", NAno[materias][trimestre]);
    }
    printf ("\n");
}

}





/*funções de escrita e limpeza de tela*/
void calculadora_notas(){
printf("\n_____________________________________");
printf("\n|_________calculadora de notas______|");
printf("\n|___________________________________|\n");
}



void limpar_tela(){
    system("clear");
}
