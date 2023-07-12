#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 5
#define nomeMax 10
//tipo aluno
typedef struct{
    char nome[nomeMax];
    int nota;
}aluno;
//tipo pilha de aluno
typedef struct pilha_aluno{
    int topo;
    aluno dados_aluno[MAX_SIZE];
}pilha_aluno;
// iniciar pilha
void iniciar(pilha_aluno *p){
    p->topo= -1;
}
//verificar pilha vazia
int vazia(pilha_aluno *p){
    if(p->topo==-1){
        return 1;
    } else {
        return 0;
    }
}
//verificar pilha cheia 
int cheia(pilha_aluno *p){
    if (p->topo == MAX_SIZE-1){
        return 1;
    } else {
        return 0;
    } 
}
// insere na pilha 
void insere(pilha_aluno *p, char nm[], int nt){

    if (cheia(p)==1){
        printf("\nERRO: Pilha Cheia");
    } else {
        
        p->topo++;
        strcpy(p->dados_aluno[p->topo].nome ,nm);
        p->dados_aluno[p->topo].nota = nt;
    }
}
//remove da pilha
aluno removePilha(pilha_aluno *p){
    aluno aux;
    aluno vazio;
    if(vazia(p) == 1){
        printf("\nERRO: Pilha Vazia");
        return vazio;
    } else {
        aux = p->dados_aluno[p->topo];
        p->topo--;
        return aux;
    }
}

int main(){
    pilha_aluno *p =(pilha_aluno*)malloc(sizeof(pilha_aluno));
    int i;
    char nomeaux[nomeMax];
    int notaaux;
    int opcao;
    aluno aux1;
    do{
        system("cls");
        printf("------------MENU--------------");
        printf("\nOPCAO 01: Iniciar Pilha.");
        printf("\nOPCAO 02: Registrar alunos(Empilhar).");
        printf("\nOPCAO 03: Desempilhar.");
        printf("\nOPCAO 04: Verificar se esta vazia. ");
        printf("\nOPCAO 05: SAIR");
        printf("\nDigite uma opcao: ");    
        scanf("%d",&opcao);
        switch(opcao){
            case 1: 
                iniciar(p);
                printf("Pilha Iniciada");
                getch();
                break;
            case 2:
                for(i = 0; i < MAX_SIZE; i++){
                    printf("\n----------- DADOS ALUNO (%d) ----------- ",i+1);
                    printf("\nNome: ");
                    scanf("%10s",nomeaux);
                    printf("\nNota: ");
                    scanf(" %d", &notaaux);
                    insere(p,nomeaux,notaaux);
                }
                break;
            case 3:
                if (vazia(p)==1){
                    printf("ERRO: PILHA ESTA VAZIA");
                    getch();
                    break;

                }else{ 
                    aux1 = removePilha(p);
                    printf("Item removido: %s , %d ", aux1.nome, aux1.nota);
                }
                getch();
                break;
            case 4:
                if (vazia(p)== 1){
                    printf("Pilha vazia.");
                }else{
                    printf("Pilha nao esta vazia.");
                }
                getch();
                break;

        default:
            break;
        } 
    } while (opcao != 5);
    

    return 0;
}