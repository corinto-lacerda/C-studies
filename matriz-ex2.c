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

int main() {

int NumMATERIAS, materias, trimestre;

printf("\n_____________________________________");
printf("\n|_________calculadora de notas______|");
printf("\n|___________________________________|");

printf("\n\n\n Me informe o numero de Materias\n");
 fflush(stdin);
scanf ("%d", &NumMATERIAS);

printf("\n %d \n", NumMATERIAS);
float NAno[NumMATERIAS][NumTRIMESTRE];





for (materias = 0 ; materias < NumMATERIAS ; materias++ ) { 
    
    
    for(trimestre = 0 ; trimestre < NumTRIMESTRE ; trimestre++) { 
        printf("Informe a nota da materia %d\n", materias+1);
       
        scanf("%f", &NAno[materias][trimestre]);
    }
    printf("\n");
} 




 
for (materias =0 ; materias<NumMATERIAS ; materias++){

    for (trimestre = NumTRIMESTRE - 1 ; trimestre >= 0 ; trimestre --){
        
        printf ("%.2f ", NAno[materias][trimestre]);
    }
    printf ("\n");
}

}
