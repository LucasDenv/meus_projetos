#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_size 10
//Limpar tela
void clear() {
    printf("\033[2J\033[1;1H");
}



typedef struct produto{
    char nome[20];
    float preco;
    struct produto *proximo;  //proximo a sair
}produto;

typedef struct {
        produto* primeiro;
        produto* ultimo;
        int contador;
}ControledeEstoque;
void iniciar(ControledeEstoque* fila) {
    // Para iniciar o ultimo e o primeiro tem que apontar para null
    fila->primeiro = NULL; 
    fila->ultimo = NULL;
    fila->contador = 0;
}
int vazia(ControledeEstoque* fila) {
    if(fila->primeiro == NULL){
        return 1;
    }else{
        return 0;
    }
    
}

void enfileirar(ControledeEstoque* fila, char nome[], float preco) {

    produto* novoproduto = (produto*)malloc(sizeof(produto));
    strcpy(novoproduto->nome, nome); //Novo produto no campo nome recebe o nome
    novoproduto->preco = preco; // novo produto no campo nota recebe preço
    novoproduto->proximo = NULL; //novo produto aponta para proximo sendo null

    if (vazia(fila)) {
        fila->primeiro = novoproduto;
        fila->ultimo = novoproduto;
        fila->contador ++;
    } else {
        fila->ultimo->proximo = novoproduto; // o ultimo aponta para novo produto como proximo apos ele
        fila->ultimo = novoproduto;  // o ultimo da fila recebe novo produto como o ultimo da fila
        fila->contador++;
    }
}

void desenfileirar(ControledeEstoque* fila) {
 if (vazia(fila)==1) {
        printf("ERRO: Acabou o estoque\n");
        return;
    }else { 
        produto* produtoRemovido = fila->primeiro; // aluno removido recebe o primeiro aluno da fila
        fila->primeiro = fila->primeiro->proximo; //primeiro aluno recebe o proximo do primeiro aluno

        printf("Produto vendido: %s\n", produtoRemovido->nome);
        printf("Preco da venda: %2.f\n", produtoRemovido->preco);
        fila->contador--;
        free(produtoRemovido);
    }
}

/*void imprimir(ControledeEstoque* fila) {
    if (vazia(fila)) {
        printf("A fila está vazia\n");
    } else {
        printf("Estrutura da fila:\n");
        produto* atual = fila->frente;
        while (1) {
            printf("Produto: %s\n", atual->nome);
            printf("Preco: %f\n", atual->preco);
            atual = atual->proximo;
        }
    }
}
*/


int main() {
    char nome[20];
    float preco;
    int opcao;
    int opcaoaux;
    int qtd;
    int i;
    ControledeEstoque item1;
    ControledeEstoque item2;
    ControledeEstoque item3;
    ControledeEstoque item4;
    ControledeEstoque item5;

    do{
        clear();
        printf("----------- Controle de Estoque -----------");
        printf("\nOpcoes:\n");
        printf("1. Adicionar ao estoque\n");    //enfileirar
        printf("2. Registrar uma compra\n");   // desesnfileirar
        printf("3. Consultar disponibilidade\n");
        printf("4.Consultar quantiadade em estoque\n");
        printf("5. Para SAIR\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                clear();
                printf("\n----------- Qual produto deseja adicionar ao estoque ?-----------");
                printf("\nOpcoes:\n");
                printf("1. Adicionar Camisas\n");
                printf("2. Adicionar Calcas\n");
                printf("3. Adicionar Tenis\n");
                printf("4. Adicionar Chinelo\n");
                printf("5. Adicionar Casaco\n");
                printf("\nDigite a opcao desejada: ");
                scanf("%d",&opcaoaux);
                   
                switch (opcaoaux){
                case 1:
                    
                    iniciar(&item1);
                    printf("\nQuantidade a ser adicionada ao estoque:");
                    scanf("%d",&qtd);
                    printf("\nNome do produto: ");
                    scanf("%s",nome);
                    printf("Preco: ");
                    scanf("%f", &preco);
                    for ( i = 0; i < qtd; i++)
                    {
                        enfileirar(&item1, nome , preco);
                    }
                    getchar();
                    break;
                case 2:
                    
                    iniciar(&item2);
                    printf("\nQuantidade a ser adicionada ao estoque:");
                    scanf("%d",&qtd);
                    printf("\nNome do produto: ");
                    scanf("%s", nome);

                    printf("Preco: ");
                    scanf("%f", &preco);
                    for ( i = 0; i < qtd; i++)
                    {
                        enfileirar(&item2, nome , preco);
                    }
                    getchar();
                    break;
                case 3:
                    
                    iniciar(&item3);
                    printf("\nQuantidade a ser adicionada ao estoque:");
                    scanf("%d",&qtd);
                    printf("\nNome do produto: ");
                    scanf("%s", nome);

                    printf("Preco: ");
                    scanf("%f", &preco);
                    for ( i = 0; i < qtd; i++)
                    {
                        enfileirar(&item3, nome , preco);
                    }
                    getchar();
                    break;

                case 4:
                    
                    iniciar(&item4);
                    printf("\nQuantidade a ser adicionada ao estoque:");
                    scanf("%d",&qtd);
                    printf("\nNome do produto: ");
                    scanf("%s", nome);

                    printf("Preco: ");
                    scanf("%f", &preco);
                    for ( i = 0; i < qtd; i++)
                    {
                        enfileirar(&item4, nome , preco);
                    }
                    getchar();
                    break;
                case 5:
                    
                    iniciar(&item5);
                    printf("\nQuantidade a ser adicionada ao estoque:");
                    scanf("%d",&qtd);
                    printf("\nNome do produto: ");
                    scanf("%s", nome);

                    printf("Preco: ");
                    scanf("%f", &preco);
                    for ( i = 0; i < qtd; i++)
                    {
                        enfileirar(&item5, nome , preco);
                    }
                    getchar();
                    break;
                default:
                    break;
                }
                break;
            case 2:
                clear();
                printf("\n------- Venda -------");
                printf("\nQual produto deseja comprar ?");
                printf("\nOpcoes:\n");
                printf("1. Comprar Camisas\n");
                printf("2. Comprar Calcas\n");
                printf("3. Comprar Tenis\n");
                printf("4. Comprar Chinelo\n");
                printf("5. Comprar Casaco\n");
                printf("\nDigite a opcao desejada: ");
                scanf("%d",&opcaoaux);
                switch (opcaoaux){
                case 1:
                    printf("\nProduto : %s ",item1.primeiro->nome);
                    printf("\nPreco : %.2f",item1.primeiro->preco);
                    printf("\nQuantidade a se comprar ?");
                    scanf("%d",&qtd);
                    for (i = 0; i < qtd; i++)
                    {
                        desenfileirar(&item1);
                    }
                    getchar();
                    printf("\nvoce comprou %d  %s", qtd, item1.primeiro->nome);
                    getchar();
                    break;
                case 2:
                    printf("\nProduto : %s ",item2.primeiro->nome);
                    printf("\nPreco : %.2f",item2.primeiro->preco);
                    printf("\nQuantidade a se comprar ?");
                    scanf("%d",&qtd);
                    for (i = 0; i < qtd; i++)
                    {
                        desenfileirar(&item2);
                    }
                    getchar();
                    printf("\nvoce comprou %d %s",qtd,item2.primeiro->nome);
                    getchar();
                    break;
                case 3:
                    printf("\nProduto : %s ",item3.primeiro->nome);
                    printf("\nPreco : %.2f",item3.primeiro->preco);
                    printf("\nQuantidade a se comprar ?");
                    scanf("%d",&qtd);
                    for (i = 0; i < qtd; i++)
                    {
                        desenfileirar(&item3);
                    }
                    getchar();
                    printf("\nvoce comprou %d %s",qtd,item3.primeiro->nome);
                    getchar();
                    break;
                case 4:
                    printf("\nProduto : %s ",item4.primeiro->nome);
                    printf("\nPreco : %.2f",item4.primeiro->preco);
                    printf("\nQuantidade a se comprar ?");
                    scanf("%d",&qtd);
                    for (i = 0; i < qtd; i++)
                    {
                        desenfileirar(&item4);
                    }
                    getchar();
                    printf("\nvoce comprou %d %s",qtd,item4.primeiro->nome);
                    getchar();
                    break;
                case 5:
                    printf("\nProduto : %s ",item5.primeiro->nome);
                    printf("\nPreco : %.2f",item5.primeiro->preco);
                    printf("\nQuantidade a se comprar ?");
                    scanf("%d",&qtd);
                    for (i = 0; i < qtd; i++)
                    {
                        desenfileirar(&item5);
                    }
                    getchar();
                    printf("\nvoce comprou %d %s",qtd,item5.primeiro->nome);
                    getchar();
                    break;
                default:
                    break;
                }
                break;
            case 3:
                clear();
                printf("\n------- Consultar -------");
                printf("\nQual produto deseja consultar ?");
                printf("\nOpcoes:\n");
                printf("1. Consultar Camisas\n");
                printf("2. Consultar Calcas\n");
                printf("3. Consultar Tenis\n");
                printf("4. Consultar Chinelo\n");
                printf("5. Consultar Casaco\n");
                printf("\nDigite a opcao desejada: ");
                scanf("%d",&opcaoaux);
                switch (opcaoaux)
                {
                case 1:
                    if(vazia(&item1)==1){
                        printf("\nestoque zerado\n");
                        getchar();
                    }else{
                        printf("\nDisponivel para compra\n");
                        getchar();
                    }
                    if (item1.contador <= 5)
                    {
                        printf("\nEstoque baixo. Reponha esse produto");
                    }
                    getchar();
                    break;
                case 2:
                    if(vazia(&item2)==1){
                        printf("\nestoque zerado\n");
                        getchar();
                    }else{
                        printf("\nDisponivel para compra\n");
                        getchar();
                    }
                    if (item2.contador <= 5)
                    {
                        printf("\nEstoque baixo. Reponha esse produto");
                    }   
                    getchar();
                    break;
                case 3:
                    if(vazia(&item3)==1){
                        printf("\nestoque zerado\n");
                        getchar();
                    }else{
                        printf("\nDisponivel para compra\n");
                        getchar();
                    }
                    if (item3.contador <= 5)
                    {
                        printf("\nEstoque baixo. Reponha esse produto");
                    }
                    getchar();
                    break;
                case 4:
                    if(vazia(&item4)==1){
                        printf("\nestoque zerado\n");
                        getchar();
                    }else{
                        printf("\nDisponivel para compra\n");
                        getchar();
                    }
                    if (item4.contador <= 5)
                    {
                        printf("\nEstoque baixo. Reponha esse produto");
                    }
                    getchar();
                    break;
                case 5:
                    if(vazia(&item5)==1){
                        printf("\nestoque zerado\n");
                        getchar();
                    }else{
                        printf("\nDisponivel para compra\n");
                        getchar();
                    }
                    if (item5.contador <= 5)
                    {
                        printf("\nEstoque baixo. Reponha esse produto");
                    }
                    getchar();
                    break;
                default:
                    break;
                }
                break;
            case 4:
                clear();
                printf("\n------- Consultar quantia -------");
                printf("\nQual produto deseja consultar ?");
                printf("\nOpcoes:\n");
                printf("1. Consultar Camisas\n");
                printf("2. Consultar Calcas\n");
                printf("3. Consultar Tenis\n");
                printf("4. Consultar Chinelo\n");
                printf("5. Consultar Casaco\n");
                printf("\nDigite a opcao desejada: ");
                scanf("%d",&opcaoaux);
                switch (opcaoaux)
                {
                case 1:
                    printf("Tem %d %s",item1.contador,item1.primeiro->nome);
                    getchar();
                    getchar();
                    break;
                case 2:
                    printf("Tem %d %s",item1.contador,item1.primeiro->nome);
                    getchar();
                    getchar();
                    break;
                case 3:
                    printf("Tem %d %s",item1.contador,item1.primeiro->nome);
                    getchar();
                    getchar();
                    break;
                case 4:
                    printf("Tem %d %s",item1.contador,item1.primeiro->nome);
                    getchar();
                    getchar();
                    break;
                case 5:
                   printf("Tem %d %s",item1.contador,item1.primeiro->nome);
                    getchar();
                    getchar();
                    break;
                default:
                    break;
                }
                break;
            default:
            getchar();
                break;
    getchar();    }
    }while (opcao!=5);
    

    return 0;
}