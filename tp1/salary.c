#include <stdio.h>

int main(){
    double salary, increase;

    printf("Type the employee salary: \n");
    scanf("%lf", &salary);
    printf("Type the increase: \n");
    scanf("%lf", &increase);
    double increaseAmount = salary*(increase/100);
    double newSalary = salary+increaseAmount;
    printf("%lf %lf", newSalary, increaseAmount);
       
}