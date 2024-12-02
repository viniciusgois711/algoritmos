// Escreva um algoritmo que receba um vetor ordenado e um numero extra 
// e insira esse número na sua posição correta no vetor ordenado, 
// deslocando os outros números se for necessario. 
// Quais a sua função de custo e ordens de complexidade O.
#include <stdio.h>

int adicionar(int array[], int tamanho, int n){
    int mediador;
    for(int i = 0; i<tamanho; i++){
        if(array[i]<=n && (array[i+1]>=n || array[i+1] == 0)){
            mediador = array[i+1];
            array[i+1] = n;
            n = mediador;
        }
    }
}

int main(){
    int array[6] = {1,2,3,4,5};

    adicionar(array, 6, 1);

    for(int i = 0; i<6; i++){
        printf("%d ", array[i]);
    }

    return 0;
}