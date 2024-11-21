// Escreva um programa onde o computador escolhe um número aleatório entre 1 e 100, e o usuário deve adivinhar.
//  O programa deve fornecer dicas se o palpite é maior ou menor que o número escolhido, utilizando while e if-else.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int try = -1;
    int randomNumber = rand() % 100 +1;
    
    while(try!=randomNumber){
        printf("\nType a number: \n");
        scanf("%d", &try);
        if(try<randomNumber){
            printf("Your try was smaller than the number, try again");
        }else if(try>randomNumber){
            printf("Your try was bigger than the number, try again");
        }
    }
    printf("Congratulations, you win, the number was %d", randomNumber);
}