#include <stdio.h>
#include <string.h>

int main() {
    char nome1[6] = "texto";
    char nome2[6] = "teto";
    if (strcmp(nome1, nome2) == 0) {
        printf("As strings são iguais\n");
    } else {
        printf("As strings são diferentes\n");
    }
    return 0;
}