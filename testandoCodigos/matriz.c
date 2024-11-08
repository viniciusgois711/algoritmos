#include <stdio.h>

int modulo(numero, divisor){
    if(numero<divisor){
        return numero;
    }else{
        return modulo(numero-divisor, divisor);
    }
}

int divisao(numero, divisor){
    if(numero-divisor == 0 || numero-divisor < 0){
        return divisor;
    }else if(numero-divisor == 1){
        return divisor;
    }else{
        return 0+(modulo(numero, divisor+2));
    }
}

int main(){
    
    printf("%d\n", modulo(7,8));
    // printf("%d\n", modulo(10,5));


}