#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define nomeMax 10

typedef struct Aluno { //Struct de aluno novamente
    char nome[nomeMax];
    int nota;
    struct Aluno* proximo; //proximo da fila
} Aluno;

typedef struct {
    Aluno* frente; // Primeiro
    Aluno* tras; // Ultimo
} FilaAluno;

void iniciar(FilaAluno* fila) {
    fila->frente = NULL; // PAra iniciar o ultimo e o primeiro tem que apontar para null
    fila->tras = NULL;
}

int vazia(FilaAluno* fila) {
    return (fila->frente == NULL);
}

void enfileirar(FilaAluno* fila, char nome[], int nota) {

    Aluno* novoAluno = (Aluno*)malloc(sizeof(Aluno));
    strcpy(novoAluno->nome, nome); //Novo aluno no campo nome recebe o nome
    novoAluno->nota = nota; // novbo aluno no campo nota recebe nota
    novoAluno->proximo = NULL; //novo aluno aponta para proximo sendo null

    if (vazia(fila)) {
        fila->frente = novoAluno;
        fila->tras = novoAluno;
    } else {
        fila->tras->proximo = novoAluno; // o ultimo aponta para novo aluno como proximo apos ele
        fila->tras = novoAluno;  // o ultimo da fila recebe novo aluno como o ultimo da fila
    }
}

void desenfileirar(FilaAluno* fila) {
 if (vazia(fila)) {
        printf("ERRO: A fila está vazia\n");
        return;
    }else { 
        Aluno* alunoRemovido = fila->frente; // aluno removido recebe o primeiro aluno da fila
        fila->frente = fila->frente->proximo; //primeiro aluno recebe o proximo do primeiro aluno

        printf("Aluno removido: %s\n", alunoRemovido->nome); // 
        printf("Nota: %d\n", alunoRemovido->nota);

        free(alunoRemovido);
    }
}

void imprimir(FilaAluno* fila) {
    if (vazia(fila)) {
        printf("A fila está vazia\n");
    } else {
        printf("Estrutura da fila:\n");
        Aluno* atual = fila->frente;
        while (atual != NULL) {
            printf("Aluno: %s\n", atual->nome);
            printf("Nota: %d\n", atual->nota);
            atual = atual->proximo;
        }
    }
}

void destruir(FilaAluno* fila) {
    while (!vazia(fila)) {
        desenfileirar(fila);
    }
}

int main() {
    FilaAluno fila;
    iniciar(&fila);

    char nome[nomeMax];
    int nota;
    int opcao;

    printf("Registro de Alunos\n");
    printf("Pressione Ctrl+C para sair\n");

    do{
        printf("\nOpcoes:\n");
        printf("1. Enfileirar aluno\n");
        printf("2. Desenfileirar aluno\n");
        printf("3. Imprimir fila\n");
        printf("4. Para SAIR\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                printf("\nNome do aluno: ");
                scanf("%s", nome);

                printf("Nota: ");
                scanf("%d", &nota);

                enfileirar(&fila, nome, nota);
                getchar();
                break;

            case 2:
                desenfileirar(&fila);
                getchar();
                break;

            case 3:
                imprimir(&fila);
                getchar();
                break;

            default:
                printf("Opçao invalida\n");
                break;
        }
    }while (opcao!=4);
    

    destruir(&fila);

    return 0;
}