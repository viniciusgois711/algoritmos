// Escreva um algoritmo que determine se um valor V encontra-se em um arranjo de n elementos.
// Escreva a equação de tempo de execução do seu algoritmo.

#include <stdio.h>

char *presente(int lista[], int n, int tamanho){
    for(int i = 0; i<tamanho; i++){ 
        if(n == lista[i]){ 
            return "EstaPresente"; 
        }
    }
    return "naoEsta"; 
}

//

int main(){
    int n = 8;
    int lista[5] = {1,2,3,4,5};

    printf("%s\n", presente(lista, n, 5));

}