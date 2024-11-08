#include <stdio.h>
#include <math.h>

double distanceFunc(double x_1, double y_1, double x_2, double y_2){
    double calcX = x_2 - x_1;
    double calcY = y_2 - y_1;
    double r = (calcX*calcX) + (calcY*calcY);
    double distance = sqrt(r);
    return distance;
}

int main(){
    double x_1, x_2, y_1, y_2;
    scanf("%lf %lf %lf %lf", &x_1, &y_1, &x_2, &y_2);
    printf("%lf\n", distanceFunc(x_1,y_1,x_2,y_2));
    return 0;
}