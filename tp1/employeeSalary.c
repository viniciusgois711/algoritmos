#include <stdio.h>

int main(){
    double fixedSalary, sales;
    double commission, finalSalary;
    printf("Type the fixed salary: \n");
    scanf("%lf", &fixedSalary);
    printf("Type the sales: \n");
    scanf("%lf", &sales);
    
    commission = sales*0.04;
    finalSalary = fixedSalary+commission;
    printf("%lf\n%lf", commission, finalSalary);
}