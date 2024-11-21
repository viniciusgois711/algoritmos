// Crie um programa que simule a concessão de empréstimos bancários. 
// O usuário deve simular a concessão de empréstimos como, valor a ser solicitado e total de parcelas desejadas. 
// O programa deve calcular os juros anuais, baseado na alíquota SELIC atual, e exibir o valor de cada parcela e o
// valor total a ser pago.

#include <stdio.h>

int main(){
    double value;
    int months;

    printf("Type the value that you want to loan: \n");
    scanf("%lf", &value);
    printf("Type how many months do you want to pay: \n");
    scanf("%d", &months);
    int qtd = 1;
    while(qtd<=months){
        value = value*1.01;
        qtd++;
    }
    printf("The complete value is: %lf \n", value);
    printf("You will pay: %lf in each month \n", value/months);

}