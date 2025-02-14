#include <stdio.h>

int main() {

    int index;

    char * nomesAlunos [3][3]= { //O primeiro [] é o que numero as linhas e o segunda [] demomina a coluna.
        //        0           1          2  
        /*0*/ {"Aluno 0", "Pt: 30", "Mat: 90"},
        /*1*/ {"Aluno 1", "Pt: 60", "Mat: 60"},
        /*2*/ {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno que queira ver as notas... \n");
    printf("Para o aluno 0, digite 0 \n");
    printf("Para o aluno 1, digite 1 \n");
    printf("Para o aluno 2, digite 2 \n");

    scanf("%d", &index);// "index" vai virar 0, 1 ou 2 dando assim a linha que vai ser mostrada, por isso no "printf" a baixo ele fica como fixo.

    printf("As notas do %s são: %s , %s ... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}