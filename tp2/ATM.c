// Crie um programa que simule um caixa eletrônico de um único usuário.
// O usuário deve poder sacar, depositar e verificar o saldo. 
// Utilize while para manter o programa em execução até que o usuário escolha sair, 
// e if-else para validar as operações.
#include <stdio.h>

int main(){
    double totalMoney, money;
    int test = 0;
    while(test!=-1){
        printf("\nWhat do you want to do? \n");
        printf("Type 1 if you want make a withdraw: \n");
        printf("Type 2 if you want make a deposit: \n");
        printf("Type 3 if you want to see how much money you have: \n");
        printf("Type -1 if you want exit: \n");
        scanf("%d", &test);
        
        if(test==1){
            money = 0;
            printf("how much money do you want to withdraw");
            scanf("%lf", &money);
            if(totalMoney<money){
                printf("You can't withdraw this money");
            }else{
                totalMoney-=money;
            }
        }else if(test==2){
            printf("how much money do you want to deposit");
            scanf("%lf", &money);
            totalMoney+=money;
        }else if(test==3){
            printf("You have %lf", totalMoney);
        }

    }
}
