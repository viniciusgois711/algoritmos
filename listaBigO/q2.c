// Escreva um algoritmo que receba valores em um vetor e imprima ORDENADO se o vetor estiver em ordem crescente.
// Qual e função de custo de pior caso e sua ordem de complexidade O?
#include <stdio.h>


char *ordenado(int vetor[], int tamanho){
    int ultimo = vetor[0];
    for(int i = 1; i<tamanho; i++){ 
        if(vetor[i]<ultimo){ 
            return "Não ordenado"; 
        }
        ultimo = vetor[i]; 
    }
    return "Ordenado"; 
}

int main()
{
    int vetor[5] = {1,2,3,4,3};

    printf("%s", ordenado(vetor, 5));
    return 0;
}