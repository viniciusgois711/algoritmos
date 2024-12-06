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

void listarContatos(struct Contatos* contato[], int tamanho){
    if(tamanho==0){
        printf("Nenhum contato cadastrado");
    }else{
        for(int i=0; i<tamanho; i++){
            printf("\nContato:");
            printf("\nNome: %s", contato[i]->nome); 
            printf("\nTelefone: %s", contato[i]->telefone);
        }
    }
};

int main(){
    int op = 0;
    char nome[50];
    char telefone[15];
    int contador = 0;
    struct Contatos* contatos[100]; 

    while(op!=5){
        printf("\nMenu\n1-Adicionar contato\n2-Listar contatos\n3-Editar contato\n4-Excluir contato\n5-sair:\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("\nDigite o nome:\n");
                scanf("%s", nome);
                printf("\nDigite o telefone:\n");
                scanf("%s", telefone);
                contatos[contador] = criarContatos(nome, telefone);
                contador++;
            break;
            case 2:
                listarContatos(contatos, contador);
        }
    }
}   