// Crie um programa que resolva equações quadráticas (ax² + bx + c = 0). 
// Utilize if-else para determinar o número de raízes reais.

#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    double delta;
    printf("Type the A, B, C values\n");
    scanf("%lf%lf%lf", &a,&b,&c);
    delta = (b*b)-4*a*c;

    if(delta>0){
        printf("2 raizes\n");
        printf("%lf\n", (-b + (sqrt(delta)))/2*a);
        printf("%lf", (-b - (sqrt(delta)))/2*a);
    }else if(delta == 0){
        printf("1 raiz\n");
        printf("%lf", (-b/(2*a)));
    }else{
        printf("0 raizes");
    }

}