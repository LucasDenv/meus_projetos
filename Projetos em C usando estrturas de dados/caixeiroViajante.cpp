#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define NUM_PONTOS 5
// Estrutura para representar as coordenadas de um ponto
typedef struct Cidades {
    int x;
    int y;
}Ponto_turistico;

// Função para calcular a distância euclidiana entre dois pontos
int calcularDistancia( Ponto_turistico ponto1,  Ponto_turistico ponto2) {
    int dx = ponto1.x - ponto2.x;
    int dy =  ponto1.y - ponto2.y;
    return (int)sqrt(dx * dx + dy * dy);
}

// Função para encontrar o próximo vizinho mais próximo
int encontrarVizinhoMaisProximo(int pontoAtual, int visitadas[], Ponto_turistico pontos[]) {
    int pontoMaisProxima = -1;
    int distanciaMinima = INT_MAX; // é uma constante que valor maximo possivel a amarzena em uma variavel int

    for (int i = 0; i < NUM_PONTOS; i++) {
        if (!visitadas[i] && i != pontoAtual) 
        {
            int distancia = calcularDistancia(pontos[pontoAtual], pontos[i]);
            if (distancia < distanciaMinima) 
            {                                   
                distanciaMinima = distancia;    
                pontoMaisProxima = i;
            }
        }
    }

    return pontoMaisProxima;
}

// Função para resolver o Problema do Caixeiro Viajante usando a heurística do vizinho mais próximo
void resolverProblemaCaixeiroViajante(Ponto_turistico pontos[]) {
    int visitadas[NUM_PONTOS] = {0}; // Array para controlar os pontos visitadas
    int pontoAtual = 0;              // Começar pelo primeiro ponto(no caso pelo hotel)
    int caminho[NUM_PONTOS + 1];    // Array para armazenar o caminho percorrido

    visitadas[pontoAtual] = 1;
    caminho[0] = pontoAtual;

    for (int i = 1; i < NUM_PONTOS; i++) {
        int proximoPonto = encontrarVizinhoMaisProximo(pontoAtual, visitadas, pontos);
        visitadas[proximoPonto] = 1;
        caminho[i] = proximoPonto;
        pontoAtual = proximoPonto;
    }

    // Voltar para a primeira cidade para completar o ciclo
    caminho[NUM_PONTOS] = 0;

    // Exibir o caminho percorrido
    printf("Caminho percorrido: ");
    for (int i = 0; i <= NUM_PONTOS; i++) {
        if (i==0 || i == NUM_PONTOS){
            printf(", Hotel");
        }else{
            printf(", Ponto Turistico %d ", caminho[i]);
        }
    }

    // Calcular a distância total percorrida
    int distanciaTotal = 0;
    for (int i = 0; i < NUM_PONTOS; i++) {
        distanciaTotal += calcularDistancia(pontos[caminho[i]], pontos[caminho[i + 1]]);
    }

    printf("\nDistancia total percorrida: %d\n", distanciaTotal);
}

int main() {
    Ponto_turistico pontos[NUM_PONTOS];
    int aux;
    int opcao;
    do{
        system("cls");
        printf("\n----- Empresa de Turismo XX -----\n");
        printf(" ");
        printf(" ");
        printf("\n------------ Menu ------------\n");
        printf(" ");
        printf(" ");
        printf("\n1. Registrar as coordenadas dos pontos.\n");
        printf("2. Mostrar o resultado da melhor rota.\n");
        printf("3. Sair.\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();
        switch (opcao) {
                    case 1: {
                        system("cls");
                        printf("Insira as coordenadas do Hotel e pontos Turisticos :\n");
                        printf("\n");
                        printf("\n");
                        for (int i = 0; i < NUM_PONTOS; i++) {
                            if (i==0){
                                printf("Hotel(Ponto de origem): \n" );
                                printf("Longitude (Ponto X): ");
                                scanf("%d", &pontos[i].x);
                                printf("Latitude (Ponto Y): ");
                                scanf("%d", &pontos[i].y);
                            } else{
                                system("cls");
                                printf("Ponto turistico %d:\n", i);
                                printf("Longitude (Ponto X): ");
                                scanf("%d", &pontos[i].x);
                                printf("Latitude (Ponto Y): ");
                                scanf("%d", &pontos[i].y);
                            }
                        }
                        aux = 1; // Confirma que o case 1 foi utlizado
                        getchar();
                        break;
                    }
                    case 2: {
                        system("cls");
                        if (aux!=1) /*verifica se o caso 1 foi utilizado */ {
                            printf("As coordenadas dos pontos nao foram registradas. Por favor, registre as coordenadas primeiro.\n");
                        } else {
                            resolverProblemaCaixeiroViajante(pontos);
                        }
                        getchar();
                        break;
                    }
                    case 3: {
                        system("cls");
                        printf("Encerrando o programa.\n");
                        getchar();
                        break;
                    }
                    default: {
                        printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
                        getchar();
                        break;
                    }
        }
    } while (opcao != 3);

    return 0;
} 
