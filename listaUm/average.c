#include <stdio.h>

double average(int a, int b, int c, int d){
    return (a+b+c+d)/4;
}

int main(){
    int a,b,c,d;
    printf("Type four numbers to calculate their average: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%lf",average(a,b,c,d));
    return 0;
}