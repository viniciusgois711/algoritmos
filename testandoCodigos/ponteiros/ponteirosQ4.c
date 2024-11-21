#include <stdio.h>


void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a = 10, b = 20;
    int *pa;
    int *pb;
    
    pa = &a;
    pb = &b;

    swap(pa,pb);

    printf("%d %d", *pa, *pb);

    return 0;
}