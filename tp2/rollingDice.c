// Escreva um programa que simule o lançamento de dois dados e exiba a soma dos valores.
//  O usuário deve poder lançar os dados quantas vezes quiser. 
//  Utilize do-while para repetir o lançamento e if-else para verificar 
//  condições especiais de para (como soma igual a 7 ou 11).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int option = 0;
    while(option!=2){
        printf("1 - Roll Dice\n2 - finish \n");
        scanf("%d", &option);
        srand(time(0));
        int firstDice = rand() % 6 + 1;
        int secondDice = rand() %6 + 1;
        int sum = firstDice+secondDice;
    
        printf("%d\n", firstDice+secondDice);
        if(sum==7 || sum == 11){
            printf("Especial Condition\n");
        }
    }
    return 0;
}