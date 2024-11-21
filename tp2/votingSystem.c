// Crie um programa que simule um sistema de votação. 
// O usuário deve poder votar em diferentes candidatos e o programa deve exibir o resultado final.
//  Utilize while para manter o sistema ativo e if-else para validar os votos.
//  O sistema de votação deve ter pelo menos 3 candidatos.

#include <stdio.h>

int main(){
    int choice = 0;
    int candidate1 = 0;
    int candidate2 = 0;
    int candidate3 = 0;
    
    while(choice!=-1){
        printf("---------------------");
        printf("\nType your choice: \n1 - candidate1, \n2 - candidate2, \n3 - candidate3\n or type -1 to finish \n");
        scanf("%d", &choice);

        if(choice == 1){
            candidate1 +=1;
        }else if(choice == 2){
            candidate2 +=1;
        }else if(choice == 3){
            candidate3 +=1;
        }else{
            printf("\nInvalid Vote");
        }
    }
    printf("\nThe candidate1 had %d votes", candidate1);
    printf("\nThe candidate2 had %d votes", candidate2);
    printf("\nThe candidate3 had %d votes", candidate3);

}