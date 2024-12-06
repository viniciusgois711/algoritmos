#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contatos{
    char nome[50];
    char telefone[15];
};

struct Contatos* criarContatos(char nome[], char telefone[]){
    struct Contatos* contato = (struct Contatos*) malloc(sizeof(struct Contatos));

    strcpy(contato->nome, nome);
    strcpy(contato->telefone, telefone);

    return contato;
};

struct Contatos* listarContatos(){

    

}

int main(){
    int op = 0;
    char nome[50];
    char telefone[15];
    while(op!=0){
        printf("\nMenu\n1-Adicionar contato\n2-Listar contatos\n3-Editar contato\n4-Excluir contato\n-1-sair");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("\nDigite o nome:\n");
                scanf("%s", nome);
                scanf("%s", telefone);
                struct Contatos* contato = criarContatos(nome, telefone);
            break;
            case 2:

        }
    }
}   