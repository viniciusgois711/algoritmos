#include <stdio.h>

int main(){

    char gabarito[10];
    int qtdAlunos;

    printf("Digite o gabarito\n");
    for(int i = 0; i<10; i++){
        scanf(" %c", &gabarito[i]);
    }    

    printf("Digite a quantidade de alunos");
    scanf("%d", qtdAlunos);
    


}