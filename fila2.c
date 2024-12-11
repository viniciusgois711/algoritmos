#include <stdio.h>

struct Pessoa{
    char nome[20];
    int idade;
    char tipoAtendimento[20];
    int preferencial;
};

struct Fila{
    struct Pessoa pessoas[100];
    struct Pessoa* proximo;
};

void inserirNormal(struct Fila *normal, int qtdPessoas){
    printf("\nDigite o nome: ");
    scanf("%s", normal->pessoas[qtdPessoas].nome);

    printf("\nDigite a idade: ");
    scanf("%d", &(normal->pessoas[qtdPessoas].idade));

    printf("\nDigite o tipo de atendimento: ");
    scanf("%s", normal->pessoas[qtdPessoas].tipoAtendimento);

    normal->pessoas[qtdPessoas].preferencial = 0;  
}

void organizarPreferenciais(struct Fila *preferencial, int qtdPessoas){

    struct Pessoa guardar;

    for(int i = 0; i<qtdPessoas-1; i++){
        if(preferencial->pessoas[i].preferencial == 1){
            continue;
        }else{
            for(int j = i+1; j<qtdPessoas; j++){
                if(preferencial->pessoas[j].preferencial < preferencial->pessoas[i].preferencial){
                    guardar = preferencial->pessoas[i];
                    preferencial->pessoas[i] = preferencial->pessoas[j];
                    preferencial->pessoas[j] = guardar;
                }
            }
        }
    }

}

void inserirPreferencial(struct Fila *preferencial, int qtdPessoas){

    printf("\nDigite o nome: ");
    scanf("%s", preferencial->pessoas[qtdPessoas].nome);

    printf("\nDigite a idade: ");
    scanf("%d", &(preferencial->pessoas[qtdPessoas].idade));

    printf("\nDigite o tipo do atendimento: ");
    scanf("%s", preferencial->pessoas[qtdPessoas].tipoAtendimento);

    printf("\nEscolha uma opção\n1-Idosos\n-2-Gestantes/Lactantes\n3-Deficiencia");
    scanf("%d", &(preferencial->pessoas[qtdPessoas].preferencial));

    organizarPreferenciais(preferencial, ++qtdPessoas);
}

void deletarPreferencial(struct Fila *preferencial, int qtdPessoas, int numeroDeletar){

    for(int i = numeroDeletar;i<qtdPessoas;i++){
        preferencial->pessoas[i] = preferencial->pessoas[i+1];
    }
}

void deletarNormal(struct Fila *normal, int qtdPessoas, int numeroDeletar){

    for(int i = numeroDeletar-1; i<qtdPessoas; i++){
        normal->pessoas[i] = normal->pessoas[i+1];
    }
}

void listarFilas(struct Fila *normal, int qtdPessoasNormais, struct Fila *preferencial, int qtdPessoasPrefenciais){

    if(qtdPessoasNormais==0){
        printf("Nenhuma pessoa na fila normal");
    }else{
        printf("\nExistem %d pessoas na fila normal\n", qtdPessoasNormais);
        for(int i = 0; i<qtdPessoasNormais; i++){
            printf("%d - %s\n", i+1, normal->pessoas[i].nome);
        }
    }
    if(qtdPessoasPrefenciais==0){
        printf("Nenhuma pessoa na fila preferencial");
    }else{
        printf("\nExistem %d pessoas na fila preferencial\n", qtdPessoasPrefenciais);
        for(int i = 0; i<qtdPessoasPrefenciais; i++){
            printf("%d - %s - %d\n", i+1, preferencial->pessoas[i].nome, preferencial->pessoas[i].preferencial);
        }
    }
}

void atenderPessoa(struct Fila *normal, int qtdNormais, struct Fila *preferencial, int qtdPreferencial, int *x, int *y) {
    // Caso exista alguém na fila preferencial
    if (qtdPreferencial > 0 && preferencial->proximo->preferencial != 0) {
        deletarPreferencial(preferencial, qtdPreferencial, 1);
        (*x) = --qtdPreferencial;

        // Atualiza o ponteiro para o próximo elemento da fila preferencial
        if (qtdPreferencial > 0) {
            preferencial->proximo = &(preferencial->pessoas[0]);
        } else {
            preferencial->proximo = NULL; // Fila preferencial vazia
        }
    } 
    // Caso não exista preferencial, atender normal
    else if (qtdNormais > 0) {
        deletarNormal(normal, qtdNormais, 1);
        (*y) = --qtdNormais;

        // Atualiza o ponteiro para o próximo elemento da fila normal
        if (qtdNormais > 0) {
            normal->proximo = &(normal->pessoas[0]);
        } else {
            normal->proximo = NULL; // Fila normal vazia
        }
    }
}

int main() {
    struct Fila normal;
    struct Fila preferencial;
    preferencial.proximo = &(preferencial.pessoas[0]);
    normal.proximo = &(normal.pessoas[0]);

    int x = 0;
    int y = 0;
    
    int numeroDeletar;
    int op = 0;
    int qtdPessoasNormal = 0;
    int qtdPessoasPreferenciais = 0;

    while (op != 7) {
        printf("\nMenu:");
        printf("\n\t1-NovoFilaPreferencial\n\t2-NovoFilaNormal\n\t3-RemoverPreferencial\n\t4-RemoverNormal\n\t5-AtenderPessoa\n\t6-ListarFilas\n\t7-Sair\n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                inserirPreferencial(&preferencial, qtdPessoasPreferenciais);
                printf("\nPreferencial adicionado com sucesso");
                qtdPessoasPreferenciais++;
                break;
            case 2:
                inserirNormal(&normal, qtdPessoasNormal);
                printf("\nNormal adicionado com sucesso");
                qtdPessoasNormal++;
                break;
            case 3:
                printf("\nDigite qual você deseja deletar");
                scanf("%d", &numeroDeletar);

                deletarPreferencial(&preferencial, qtdPessoasPreferenciais, numeroDeletar);
                printf("\nPreferencial deletado com sucesso");
                qtdPessoasPreferenciais--;
                break;
            case 4:
                printf("\nDigite qual você deseja deletar");
                scanf("%d", &numeroDeletar);

                deletarNormal(&normal, qtdPessoasNormal, numeroDeletar);
                printf("\nNormal deletado com sucesso");
                qtdPessoasNormal--;
                break;
            case 5:
                atenderPessoa(&normal, qtdPessoasNormal, &preferencial, qtdPessoasPreferenciais, &x, &y);
                qtdPessoasNormal = y;
                qtdPessoasPreferenciais = x;
                break;
            case 6:
                listarFilas(&normal, qtdPessoasNormal, &preferencial, qtdPessoasPreferenciais);
                break;
            case 7:
                printf("\nSaindo do programa...\n");
        }
    }
}
