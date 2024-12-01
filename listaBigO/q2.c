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