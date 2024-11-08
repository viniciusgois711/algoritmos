#include <stdio.h>

void imprimir(int a[10], int b){
    for(int i = 0; i<10; i++){
        printf("%d", a[i]);
    }
}

int main(){
    int a[10];
    for(int i = 0; i<10; i++){
        scanf("%d", &a[i]);
    }
    imprimir(a, 10);
}