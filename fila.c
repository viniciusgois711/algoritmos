#include <stdio.h>

struct Pessoa{
    char nome[20];
    int idade;
    char tipoAtendimento[20];
    int preferencial;
};


void inserirNormal(struct Pessoa normal[], int qtdPessoas){
    printf("\nDigite o nome: ");
    scanf("%s", normal[qtdPessoas].nome);

    printf("\nDigite a idade: ");
    scanf("%d", &normal[qtdPessoas].idade);

    printf("\nDigite o tipo de atendimento: ");
    scanf("%s", normal[qtdPessoas].tipoAtendimento);

    normal[qtdPessoas].preferencial = 0;
    
}

void organizarPreferenciais(struct Pessoa preferenciais[], int qtdPessoas){

    struct Pessoa guardar;

    for(int i = 0; i<qtdPessoas-1; i++){
        if(preferenciais[i].preferencial == 1){
            continue;
        }else{
            for(int j = i+1; j<qtdPessoas; j++){
                if(preferenciais[j].preferencial < preferenciais[i].preferencial){
                    guardar = preferenciais[i];
                    preferenciais[i] = preferenciais[j];
                    preferenciais[j] = guardar;
                }
            }
        }
    }

}

void inserirPreferencial(struct Pessoa preferenciais[], int qtdPessoas){

    printf("\nDigite o nome: ");
    scanf("%s", preferenciais[qtdPessoas].nome);

    printf("\nDigite a idade: ");
    scanf("%d", &preferenciais[qtdPessoas].idade);

    printf("\nDigite o tipo do atendimento: ");
    scanf("%s", preferenciais[qtdPessoas].tipoAtendimento);

    printf("\nEscolha uma opção\n1-Idosos\n-2-Gestantes/Lactantes\n3-Deficiencia");
    scanf("%d", &preferenciais[qtdPessoas].preferencial);

    organizarPreferenciais(preferenciais, ++qtdPessoas);
}

void deletarPreferencial(struct Pessoa preferencial[], int qtdPessoas){
    int numeroDeletar;
    printf("\nDigite qual você deseja deletar");
    scanf("%d", &numeroDeletar);

    for(int i = numeroDeletar;i<qtdPessoas;i++){
        preferencial[i] = preferencial[i+1];
    }
}

void deletarNormal(struct Pessoa normal[], int qtdPessoas){
    int numeroDeletar;
    printf("\nDigite qual você deseja deletar");
    scanf("%d", &numeroDeletar);

    for(int i = numeroDeletar-1; i<qtdPessoas; i++){
        normal[i] = normal[i+1];
    }
}

void listarFilas(struct Pessoa normal[], int qtdPessoasNormais, struct Pessoa preferenciais[], int qtdPessoasPrefenciais){

    if(qtdPessoasNormais==0){
        printf("Nenhuma pessoa na fila normal");
    }else{
        printf("\nExistem %d pessoas na fila normal\n", qtdPessoasNormais);
        for(int i = 0; i<qtdPessoasNormais; i++){
            printf("%d - %s\n", i+1, normal[i].nome);
        }
    }
    if(qtdPessoasPrefenciais==0){
        printf("Nenhuma pessoa na fila preferencial");
    }else{
        printf("\nExistem %d pessoas na fila preferencial\n", qtdPessoasPrefenciais);
        for(int i = 0; i<qtdPessoasPrefenciais; i++){
            printf("%d - %s - %d\n", i+1, preferenciais[i].nome, preferenciais[i].preferencial);
        }
    }
}

int main(){
    struct Pessoa preferenciais[100]; 
    struct Pessoa normal[100];
    int op = 0;
    int qtdPessoasNormal = 0;
    int qtdPessoasPreferenciais = 0;

    while(op!=7){
        printf("\nMenu:");
        printf("\n\t1-NovoFilaPreferencial\n\t2-NovoFilaNormal\n\t3-RemoverPreferencial\n\t4-RemoverNormal\n\t5-AtenderPessoa\n\t6-ListarFilas\n\t7-Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                inserirPreferencial(preferenciais, qtdPessoasPreferenciais);
                printf("\nPreferencial adicionado com sucesso");
                qtdPessoasPreferenciais++;
            break;
            case 2:
                inserirNormal(normal, qtdPessoasNormal);
                printf("\nNormal adicionado com sucesso");
                qtdPessoasNormal++;
            break;
            case 3:
                deletarPreferencial(preferenciais, qtdPessoasPreferenciais);
                printf("\nPreferencial deletado com sucesso");
                qtdPessoasPreferenciais--;
            break;
            case 4:
                deletarNormal(normal, qtdPessoasNormal);
                printf("\nNormal deletado com sucesso");
                qtdPessoasNormal--;
            break;
            case 5:

            break;
            case 6:
                listarFilas(normal, qtdPessoasNormal, preferenciais, qtdPessoasPreferenciais);
            break;
            case 7:
                printf("\nSaindo do programa...");
        }
    }
}