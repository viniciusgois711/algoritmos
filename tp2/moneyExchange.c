// Escreva um programa que converta valores entre diferentes moedas (USD, EUR, BRL).
//  Utilize switch-case para selecionar a moeda de origem e destino, e if-else para validar as entradas. 
//  O programa deve manter o usuário em execução até que ele escolha sair.

#include <stdio.h>

int main(){
    int choiceOrigin = 0;
    int choiceDest = 0;
    
    double value = 0;
    double valueExchanged = 0;
    while(choiceOrigin!=4){
        printf("Type the value that you want to exchange: \n");
        scanf("%lf", &value);
        printf("Type the origin money. \n 1 - USD \n 2 - EUR \n 3 - BRL \n 4 - exit \n");
        scanf("%d", &choiceOrigin);
        switch(choiceOrigin){
            case 1:
                printf("Type the destintion money. \n 1 - USD \n 2 - EUR \n 3 - BRL\n");
                scanf("%d", &choiceDest);
                switch(choiceDest){
                    case 1:
                        valueExchanged = value;
                        break;
                    case 2:
                        valueExchanged = value*0.95;
                        break;
                    case 3:
                        valueExchanged = value*5.82;
                        break;
                }

                break;
            case 2:
                printf("Type the destintion money. \n 1 - USD \n 2 - EUR \n 3 - BRL\n");
                scanf("%d", &choiceDest);
                switch(choiceDest){
                    case 1:
                        valueExchanged = value*1.05;
                        break;
                    case 2:
                        valueExchanged = value;
                        break;
                    case 3:
                        valueExchanged = value*6.09;
                        break;
                }
                break;
            case 3:
                printf("Type the destintion money. \n 1 - USD \n 2 - EUR \n 3 - BRL\n");
                scanf("%d", &choiceDest);
                switch(choiceDest){
                    case 1:
                        valueExchanged = value*0.17;
                        break;
                    case 2:
                        valueExchanged = value*0.16;
                        break;
                    case 3:
                        valueExchanged = value;
                        break;
                }
                break;
        }
        printf("%lf\n", valueExchanged);
    }
}