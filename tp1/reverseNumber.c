#include <stdio.h>

int reverse(int number){
    int newUnd = number/100;
    int newDec = (number%100)/10;
    int newCent = number%10;
    int newNumber = newCent*100 + newDec*10 + newUnd;
    return newNumber;
}

int main(){

    int number;
    printf("Type a number: \n");
    scanf("%d", &number);
    printf("%d", reverse(number));

}