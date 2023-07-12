#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct{
    int topo;
    int dados[MAX_SIZE];
} TipoPilha;
//poderia por a struct do aluno acimada struct de pilha ?

//Iniciar pilha

void Pilha_inicia(TipoPilha *p){
    p->topo = -1;
}
//Verificar se esta vazia
int Pilha_Vazia (TipoPilha *p){
    if(p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}
//Verificar se esta cheia
int Pilha_Cheia(TipoPilha *p){
    if(p->topo == MAX_SIZE-1){
        return 1;
    } else{
        return 0;
    }
}
// x == Valor a ser inserido na pilha
void Pilha_Insere(TipoPilha *p, int x){
    if (Pilha_Cheia(p) == 1){
        printf("\nERRO: Pilha Cheia");
    } else{
        p->topo++;
        p->dados[p->topo] = x;
    }
}
//Remove
int Pilha_remove(TipoPilha *p) {
    int aux;
    if(Pilha_Vazia(p) == 1){
        printf("\nERRO: Pilha Vazia");
    } else {
        aux = p->dados[p->topo];
        p->topo--;
        return aux;
    }
}
int main(){
    TipoPilha *p = (TipoPilha*)malloc(sizeof(TipoPilha));
    Pilha_inicia(p);
    
    Pilha_Insere(p, 1);
    Pilha_Insere(p, 2);
    Pilha_Insere(p, 3);
    int aux;
    aux = Pilha_remove(p);
    printf("\n SAIU: %d", aux);
    aux = Pilha_remove(p);
    printf("\n SAIU: %d", aux);
    aux = Pilha_remove(p);
    printf("\n SAIU: %d", aux);
    aux = Pilha_remove(p);
    printf("\n SAIU: %d", aux);
    return 0;
 }
 