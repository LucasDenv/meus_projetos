#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void local_da_viagem(){
	
	        system("cls");
            printf("\nEscolha o local desejado para a sua viagem");
            printf("\n(1)Arraial do Cabo");
            printf("\n(2)Cabo Frio");
            printf("\n(3)Paraty");
            printf("\nDigite uma opcao: ");
}

void avisarlocal(int local){
	        switch (local){
            case 1:
                printf("\nSua viagem eh para Arraial do Cabo.");
                break;
            case 2: 
                printf("\nSua viagem eh para Cabo Frio.");
                break;
            case 3:
                printf("\nSua viagem eh para paraty.");
                break;
            default:
                system("cls");
                printf("\nOpçao INVALIDA!");
        }
}



int main(int argc, char *argv[]){

    int opcao;
    int local;
    int dia[MAX];
    int mes[MAX];
    int ano[MAX];
    int qtdReserva;
    int i;
    int j;
    int mudanca;
    int mudancaExtra;
    int opcaoExtra;
    int localExtra;
    int k;
    int opcao01;
    int qtdReservaExtra;
    int diaExtra[MAX];
    int mesExtra[MAX];
    int anoExtra[MAX];



    do{
        system("cls");
        printf("========= Agencia de Viagens =========");
        printf("\nOPCAO 01: Selecionar a regiao da viagem.");
        printf("\nOPCAO 02: Cadastrar a data.");
        printf("\nOPCAO 03: Mostrar local e data da viagem.");
        printf("\nOPCAO 04: Alterar data. ");
        printf("\nOPCAO 05: Alterar local.");
        printf("\nOPCAO 06: Ir para o menu de Viagem Adicional, caso queira adicionar mais uma viagem.");
        printf("\nOPCAO 07: SAIR");
        printf("\nDigite uma opcao: ");
        
        scanf("%d",&opcao);
        
        switch (opcao){
            case 1:
	
;			local_da_viagem();

            scanf("%d",&local);
            
			avisarlocal(local);


        	getch();

                break;
            case 2:

                system("cls");
                printf("\nInforme a quantidade de dias para a reserva: ");
                scanf("%d",&qtdReserva);
                int i;
                for(i=0;i<qtdReserva;i++){
 
                    system("cls");
                    printf("\nInforme o dia da reserva %d: ",i+1);
                    scanf("%d",&dia[i]);  
                    printf("\nInforme o mes da reserva %d: ",i+1);
                    scanf("%d",&mes[i]);
                    printf("\nInforme o ano da reserva %d: ",i+1);
                    scanf("%d",&ano[i]);
                }
                                                            
                                               
                break;
            case 3:
                system("cls");


                if (local==1)
                {

                    printf("\nSua viagem eh para Arraial do cabo.");
                    for(i=0;i<qtdReserva;i++){
                    printf("\nNo dia %d/%d/%d ",dia[i],mes[i],ano[i]);
                    }
                }else if (local==2)
                {
                    printf("\nSua viagem eh para Cabo Frio.");
                    for(i=0;i<qtdReserva;i++){
                    printf("\nNo dia %d/%d/%d ",dia[i],mes[i],ano[i]);                                                      
                    }
                }else if (local==3)
                {
                    printf("\nSua viagem eh para Paraty.");
                    for(i=0;i<qtdReserva;i++){
                    printf("\nNo dia %d/%d/%d ",dia[i],mes[i],ano[i]);                                                      
                    }
                }else{
                    system("cls");
                    printf("\nOpcao INVALIDA!");
                }
                break;
            case 4: 
                system("cls");
                int mudanca;
                int opcaoUm;
                printf("\nOPCAO 01: Mudar todas as datas");
                printf("\nOPCAO 02: Mudar datas especificas");
                printf("\nDigite a opcao desejada: ");
                scanf("%d",&mudanca);
               
                
                
                switch (mudanca)
                {
                    case 1:
                        system("cls");

                        printf("\nInforme a quantidade de dias para a reserva: ");
                        scanf("%d",&qtdReserva);

                        for(i=0;i<qtdReserva;i++){
                            printf("\nInforme o dia da reserva %d: ",i+1);
                            scanf("%d",&dia[i]);
                            printf("\nInforme o mes da reserva %d: ",i+1);
                            scanf("%d",&mes[i]);
                            printf("\nInforme o ano da reserva %d: ",i+1);
                            scanf("%d",&ano[i]);
                        }
                        break;
                    case 2:
                        system("cls");
                        printf("Qual reserva voce pretende alterar ?");
                        scanf("%d",&j);
                        int i = j - 1;
                        printf("Essa eh a data que voce ira alterar.%d/%d/%d ",dia[i],mes[i],ano[i]);
                        printf("\nDigite o dia : ");
                        scanf("%d",&dia[i]);
                        printf("\nDigite o mes : ");
                        scanf("%d",&mes[i]);
                        printf("\nDigite o ano : ");
                        scanf("%d",&ano[i]);
                        
                        break;
                    default:
                        system("cls");
                        printf("\nOpcao invalida!");
                    }
    
                break;

            case 5:
                system("cls");
                printf("\nEscolha para onde mudar a sua viagem");
                printf("\n(1)Arraial do Cabo");
                printf("\n(2)Cabo Frio");
                printf("\n(3)Paraty");
                printf("\nDigite uma opcao: ");
                scanf("%d",&local);

                    switch (local){
                        case 1:
                            printf("\nSua viagem agora eh para Arraial do Cabo.");
                            break;
                        case 2: 
                            printf("\nSua viagem agora eh para Cabo Frio.");
                            break;
                        case 3:
                            printf("\nSua viagem agora eh para paraty.");
                            break;
                        default:
                            system("cls");
                            printf("\nOpçao INVALIDA!");
                    }

                    getch();
                break;

            case 6:
                
                do
                {
                    system("cls");
                    printf("========= Menu de Viagem Adicional =========");
                    printf("\nOPCAO 01: Selecionar a regiao da viagem extra.");
                    printf("\nOPCAO 02: Cadastrar a data extra.");
                    printf("\nOPCAO 03: Mostrar local e data da viagem.");
                    printf("\nOPCAO 04: Alterar data ");
                    printf("\nOPCAO 05: Alterar local");
                    printf("\nOPCAO 06: Voltar");
                    

                    printf("\nDigite uma opcao: ");
                    scanf("%d",&opcaoExtra);

                        switch (opcaoExtra)
                        {
                        case 1:
                            system("cls");
                            printf("\nEscolha o local desejado para a sua viagem");
                            printf("\n(1)Arraial do Cabo");
                            printf("\n(2)Cabo Frio");
                            printf("\n(3)Paraty");
                            printf("\nDigite uma opcao: ");
                            scanf("%d",&localExtra);
                        
                            switch (localExtra){
                                case 1:
                                    printf("\nSua viagem eh para Arraial do Cabo.");
                                    break;
                                case 2: 
                                    printf("\nSua viagem eh para Cabo Frio.");
                                    break;
                                case 3:
                                    printf("\nSua viagem eh para paraty.");
                                    break;
                                default:
                                    system("cls");
                                    printf("\nOpçao INVALIDA!");
                            }

                            getch();
                            break;
                        
                        case 2:

                            system("cls");
                            printf("\nInforme a quantidade de dias para a reserva: ");
                            scanf("%d",&qtdReservaExtra);
                    
                            for(k=0;k<qtdReservaExtra;k++){
                                system("cls");
                                printf("\nInforme o dia da reserva %d: ",k+1);
                                scanf("%d",&diaExtra[k]);
                                printf("\nInforme o mes da reserva %d: ",k+1);
                                scanf("%d",&mesExtra[k]);
                                printf("\nInforme o ano da reserva %d: ",k+1);
                                scanf("%d",&anoExtra[k]);
                            }
                            //dias menor que 31
                            //mes menor que 13
                            //ano tem que ser maior que 2022

                            break;
                        case 3:
                            system("cls");
                            if (localExtra==1)
                            {
                                printf("\nSua viagem eh para Arraial do cabo.");
                                for(k=0;k<qtdReservaExtra;k++){
                                printf("\nNo dia %d/%d/%d ",diaExtra[k],mesExtra[k],anoExtra[k]);
                                }
                            }else if (localExtra==2)
                            {
                                printf("\nSua viagem eh para Cabo Frio.");
                                for(k=0;k<qtdReservaExtra;k++){
                                printf("\nNo dia %d/%d/%d ",diaExtra[k],mesExtra[k],anoExtra[k]);                                                       
                                }
                            }else if (localExtra==3)
                            {
                                printf("\nSua viagem eh para Arraial do cabo.");
                                for(k=0;k<qtdReservaExtra;k++){
                                printf("\nNo dia %d/%d/%d ",diaExtra[k],mesExtra[k],anoExtra[k]);                                                       
                                }
                            }else{
                                system("cls");
                                printf("\nOpcao INVALIDA!");
                            }
                            getch();
                            break;
                            

                        case 4: 
                            system("cls");
                            int mudancaExtra;
                            int opcaoDois;
                            printf("\nOPCAO 01: Mudar todas as datas");
                            printf("\nOPCAO 02: Mudar datas especificas");
                            printf("\nDigite a opcao desejada: ");
                            scanf("%d",&mudancaExtra);
                        
                            
                            
                            switch (mudancaExtra)
                            {
                                case 1:
                                    system("cls");
                                    printf("\nInforme a quantidade de dias para a reserva: ");
                                    scanf("%d",&qtdReservaExtra);

                                    for(i=0;i<qtdReservaExtra;i++){
                                        printf("\nInforme o dia da reserva %d: ",i+1);
                                        scanf("%d",&diaExtra[i]);
                                        printf("\nInforme o mes da reserva %d: ",i+1);
                                        scanf("%d",&mesExtra[i]);
                                        printf("\nInforme o ano da reserva %d: ",i+1);
                                        scanf("%d",&anoExtra[i]);
                                    }
                                    break;
                                case 2:
                                    system("cls");
                                    printf("Qual reserva voce pretende alterar ?");
                                    scanf("%d",&j);
                                    int k = j - 1;
                                    printf("Essa eh a data que voce ira alterar.%d/%d/%d ",diaExtra[k],mesExtra[k],anoExtra[k]);
                                    printf("\nDigite o dia : ");
                                    scanf("%d",&diaExtra[k]);
                                    printf("\nDigite o mes : ");
                                    scanf("%d",&mesExtra[k]);
                                    printf("\nDigite o ano : ");
                                    scanf("%d",&anoExtra[k]);
                                    
                                    break;
                                default:
                                    system("cls");
                                    printf("\nOpcao invalida!");
                                }
                            getch();
                            break;

                        case 5:
                            system("cls");
                            printf("\nEscolha para onde mudar a sua viagem");
                            printf("\n(1)Arraial do Cabo");
                            printf("\n(2)Cabo Frio");
                            printf("\n(3)Paraty");
                            printf("\nDigite uma opcao: ");
                            scanf("%d",&localExtra);

                                switch (localExtra){
                                    case 1:
                                        printf("\nSua viagem agora eh para Arraial do Cabo.");
                                        break;
                                    case 2: 
                                        printf("\nSua viagem agora eh para Cabo Frio.");
                                        break;
                                    case 3:
                                        printf("\nSua viagem agora eh para paraty.");
                                        break;
                                    default:
                                        system("cls");
                                        printf("\nOpçao INVALIDA!");
                                }

                                getch();
                            break;
                        case 6:

                            
                        default:
                            system("cls");
                            printf("Retornando...");
                            break;
                        }

                } while (opcaoExtra!=6);
            
                



            break;

            case 7:
                exit(1);
            default:
                system("cls");
                printf("\nOpcao INVALIDA!");
              
        }

            getch();

    
    }while (opcao!=7);
    

    return 0;
    }

