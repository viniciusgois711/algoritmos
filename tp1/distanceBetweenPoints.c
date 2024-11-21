#include <stdio.h>
#include <math.h>

double distance(double aX, double aY, double bX, double bY){
    double result;
    result = sqrt((bX-aX)*(bX-aX) + (bY-aY)*(bY-aY));
    return result;
}

int main(){
    double aX, aY;
    double bX, bY;
    printf("Type x and y point from A: \n");
    scanf("%lf%lf", &aX, &aY);
    printf("Type x and y point from B: \n");
    scanf("%lf%lf", &bX, &bY);

    printf("%lf", distance(aX,aY,bX,bY));
    return 0;
}