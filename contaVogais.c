#include <stdio.h>

int main(){
    char nome[10];
    int qtd = 0;
    scanf("%s", nome);

    for(int i = 0; nome[i] != '\0'; i++){
        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'){
            qtd++;
        }
    }
    printf("%s\n", nome);
}