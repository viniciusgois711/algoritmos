#include <stdio.h>
#include <math.h>

double distanceFunc(int x_1, int y_1, int x_2, int y_2){
    int calcX = x_2 - x_1;
    int calcY = y_2 - y_1;
    int r = calcX + calcY;
    double distance = sqrt(r);
    return distance;
}

int main(){
    int x_1, x_2, y_1, y_2;
    scanf("%d %d %d %d", &x_1, &x_2, &y_1, &y_2);
    printf("%lf\n", distanceFunc(x_1,x_2,y_1,y_2));
    return 0;
}