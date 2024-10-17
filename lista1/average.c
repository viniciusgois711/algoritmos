#include <stdio.h>

double average(double a, double b, double c, double d){
    double result;
    result = (a+b+c+d)/4;
    return result;
}

int main(){
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("%lf\n", average(a,b,c,d));
    return 0;
}
