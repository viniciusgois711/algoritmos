// Faça um programa que calcule se dois endereços IPs que compartilham a mesma máscara fazem parte da mesma rede.
// - Devem ter 3 parâmetros de entrada: IP1 (xxx.xxx.xxx.xxx), IP2 (xxx.xxx.xxx.xxx) e Mascara(1 a 32)
// - Deve retornar verdadeiro ou falso

#include <stdio.h>

int mascara(int n){
    int contador = 0;
    int primeiro, segundo, terceiro, quarto;
    for(contador; contador <= 8; contador++){
        
    }
}

int converterBinario(int n){
    int primeiro[8];
    int copia[8];
    int contador = 0;

    while(n>0){
        primeiro[contador] = n%2; 
        n = n/2;
        contador++;
    }

    while (contador < 8) {
        primeiro[contador] = 0;
        contador++;
    }

    for(int i = 0; i<8; i++){
        copia[i] = primeiro[7-i];
    }

    for(int i = 0; i<8; i++){
        printf("%d", copia[i]);
    }

    printf(".");

}

int main(){
    int primeiroIP1, segundoIP1, terceiroIP1, quartoIP1;
    int primeiroIP2, segundoIP2, terceiroIP2, quartoIP2;
    int mascara;
    // int segundoIP1;
    // int terceiroIP1;
    // int quartoIP1;

    scanf("%d.%d.%d.%d", &primeiroIP1, &segundoIP1, &terceiroIP1, &quartoIP1);
    scanf("%d.%d.%d.%d", &primeiroIP2, &segundoIP2, &terceiroIP2, &quartoIP2);
    scanf("%d", &mascara);
   
   converterBinario(primeiroIP1);
   converterBinario(segundoIP1);
   converterBinario(terceiroIP1);
   converterBinario(quartoIP1);
   
}