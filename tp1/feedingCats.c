#include <stdio.h>

int main(){
    double foodWeight, cat1, cat2, rest;
    printf("Type the food weight: \n");
    scanf("%lf", &foodWeight);
    printf("Type how much food the first and second cats eat: \n");
    scanf("%lf%lf", &cat1, &cat2);
    rest = foodWeight*1000 - ((cat1+cat2)*5);
    printf("%lf", rest);
    return 0;
}