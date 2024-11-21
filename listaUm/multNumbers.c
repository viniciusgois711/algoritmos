#include <stdio.h>

int mult(int a, int b){
    return a*b;
}

int main(){
    int a,b;
    printf("Type the first and second number: \n");
    scanf("%d %d", &a, &b);
    printf("%d\n", mult(a,b));
    return 0;
}