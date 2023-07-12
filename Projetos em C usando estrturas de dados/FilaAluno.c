#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define nomeMax 10

typedef struct Aluno {
    char nome[nomeMax];
    int nota;
} Aluno;

typedef struct {
    Aluno alunos[MAX_ALUNOS];
    int frente;// primeiro
    int tras; // ultimo 
    int tamanho; // tamanho dela
} FilaAluno;

void iniciar(FilaAluno* fila) {
    fila->frente = 0;
    fila->tras = -1;
    fila->tamanho = 0;
}

int vazia(FilaAluno* fila) {

    if (fila->tamanho == 0){
        printf("Pilha esta vazia");
    } else {
        printf("Pilha nao esta fazia");
    }
    return 0;
}

int cheia(FilaAluno* fila) {
    if(fila->tamanho == MAX_ALUNOS){
        printf("Pilha esta Cheia");
    } else {
        printf("Pilha nao esta cheia");
    }
    return 0;
}

void enfileirar(FilaAluno* fila, char nome[], int nota) {
    if (cheia(fila)) {
        printf("ERRO: A fila está cheia\n");
        return;
    }else{
        fila->tras = (fila->tras + 1) % MAX_ALUNOS; //se fila->tras for igual a 99 (última posição válida no array) e MAX_ALUNOS for 100, o resultado será 0, permitindo que o índice retorne à primeira posição do array e a fila seja tratada como uma fila circular.
        strcpy(fila->alunos[fila->tras].nome, nome);
        fila->alunos[fila->tras].nota = nota;
        fila->tamanho++; 
    }
}

void desenfileirar(FilaAluno* fila) {
    if (vazia(fila)) {
        printf("ERRO: A fila está vazia\n");
        return;
    } else {

        printf("Aluno removido: %s\n", fila->alunos[fila->frente].nome);
        printf("Nota: %d\n", fila->alunos[fila->frente].nota);

        fila->frente = (fila->frente + 1) % MAX_ALUNOS; // primeiro aluno recebe o aluno primeiro mais um 
        fila->tamanho--;  // diminui o tamanho da fila
    }
}

void imprimir(FilaAluno* fila) {
    if (vazia(fila)) {
        printf("A fila está vazia\n");
    } else {
        printf("Estrutura da fila:\n");
        int i;
        int indice = fila->frente;
        for (i = 0; i < fila->tamanho; i++) {
            printf("Aluno: %s\n", fila->alunos[indice].nome);
            printf("Nota: %d\n", fila->alunos[indice].nota);
            indice = (indice + 1) % MAX_ALUNOS;
        }
    }
}

void destruir(FilaAluno* fila) {
    iniciar(fila);
}

int main() {
    FilaAluno fila;
    iniciar(&fila);

    char nome[nomeMax];
    int nota;
    int opcao;

    printf("Registro de Alunos\n");
    printf("Pressione Ctrl+C para sair\n");

    do {
        printf("\n1 - Enfileirar\n");
        printf("2 - Desenfileirar\n");
        printf("3 - Imprimir\n");
        printf("0 - Sair\n");
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
            case 0:
                getchar();
                break;
            default:
                printf("Opcao invalida\n");
                getchar();
                break;
        }
    } while (opcao != 0);

    destruir(&fila);
    return 0;
}