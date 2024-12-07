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
            if(contato[i]!=NULL){
                printf("\nContato:");
                printf("\nNome: %s", contato[i]->nome); 
                printf("\nTelefone: %s", contato[i]->telefone);
            }
        }
    }
};

void editarContato(struct Contatos* contato[], int indice, char novoNome[], char novoTelefone[]){
    strcpy(contato[indice]->nome, novoNome);
    strcpy(contato[indice]->telefone, novoTelefone);   
};

void excluirContato(struct Contatos* contato[], int indice){
    
    for (int i = indice; i < sizeof(contato)-1; ++i){ 
        contato[i] = contato[i + 1];
    }
};

int main(){
    int op = 0;
    char nome[50];
    char telefone[15];
    int contador = 0;
    int indice;
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
            break;
            case 3:
                printf("\nDigite o indice do contato que voce deseja alterar:\n");
                scanf("%d", &indice);
                printf("\nDigite o novo nome:\n");
                scanf("%s", nome);
                printf("\nDigite o novo telefone:\n");
                scanf("%s", telefone);
                editarContato(contatos, indice, nome, telefone);
            break;
            case 4:
                printf("\nDigite o indice do contato que deseja excluir:\n");
                scanf("%d", &indice);

                excluirContato(contatos, indice);
                contador--;
                

        }
    }
}   