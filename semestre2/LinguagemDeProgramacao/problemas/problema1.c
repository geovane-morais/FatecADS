#include "cabec.h"

struct Candidato {
    int Codigo;
    char Resposta[51];
    int contAcertos;
};

void inicializar(){
    int i;
    for(i=0; i<T; i++){
        vCandidatos[i] = NULL;
    }
}

void ler(int p){

    if(p>=(T-1)){
        printf("Ocupou todos os espacoes possiveis \n");
        return;
    }

    if(vCandidatos[p]==NULL){
        vCandidatos[p] = (pcandidato) malloc(sizeof(struct Candidato));
    }
    fflush(stdin);
    printf("Digite Codigo do Candidato:  \n");
    scanf("%d", &vCandidatos[p]->Codigo);
    do{
        fflush(stdin);
        LimparTela();
        printf("Digite a resposta do Candidato(Completando com '0' as respostas em branco):  \n");
        gets(vCandidatos[p]->Resposta);
    }while(strlen(vCandidatos[p]->Resposta)>Q || strlen(vCandidatos[p]->Resposta)< Q);
    contCandidatos++;
}

void imprimir(int CodInf){
    int i;
        for(i=0; i<T; i++){
            if(vCandidatos[i]!=NULL){
                if(vCandidatos[i]->Codigo == CodInf){
                    LimparTela();
                    printf("Dados do Candidato \n");
                    printf("Codigo do Candidato: %d \n", vCandidatos[i]->Codigo);
                    printf("Resposta do Candidato: %s \n", vCandidatos[i]->Resposta);

                    break;
                }
            }
        }
    system("pause");
}

int comparador(const void *candidatoA, const void *candidatoB){

    int cA = ((struct Candidato *) candidatoA) -> contAcertos;
    int cB = ((struct Candidato *) candidatoB) -> contAcertos;

    if(cA > cB) return -1;
    if(cA < cB) return 1;
    return 0;

}


void imprimirTodos(char *pgabarito){
    setlocale(LC_ALL,"Portuguese");
    int i;
    LimparTela();
    printf("Lista de Classificacao: \n");
    for(i=0; i < contCandidatos; i++){

        vCandidatos[i] -> contAcertos = 0;

        for(int j = 0; j < Q; j++){

            if(vCandidatos[i] -> Resposta[j] == pgabarito[j]){
                vCandidatos[i] -> contAcertos = vCandidatos[i] -> contAcertos + 1;
            }
        }
         qsort(vCandidatos, contCandidatos, sizeof(struct Candidato *), comparador);
    }


        printf("Código   Acertos\n\n");
    for(i = 0; i < contCandidatos; i++){
        printf("%d        %d\n", (*vCandidatos[i]).Codigo,(*vCandidatos[i]).contAcertos);
    }
    system("pause");
}

void problema1(){

    int p = 0;
    int CodProc = 0;
    int opc = 0;
    char gabarito[51];
    char* pgabarito = gabarito;
    int verdade = 0;
    inicializar();
    do{
        LimparTela();
        printf("\nCadastro de Alunos\n\n");
        printf("1.. Cadastrar Gabarito\n");
        printf("2.. Cadastrar Candidato\n");
        printf("3.. Procurar Candidato\n");
        printf("4.. Exibir Todos Resultados\n");
        printf("5.. Quantidade de Cadastrados \n");
        printf("6.  Visualizar Gabarito \n");
        printf("9.. SAIR \n");
        printf("Escolha sua opcao:  \n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                do{
                LimparTela();
                printf("Digite o Gabarito: \n");
                scanf("%s", gabarito);
                }while(strlen(gabarito)>Q || strlen(gabarito)< Q);
                verdade = 1;
            break;
            case 2:
                LimparTela();
                ler(p);
                p++;
            break;
            case 3:
                LimparTela();
                printf("Digite o Codigo do candidato a ser encontrado \n");
                scanf("%d", &CodProc);
                imprimir(CodProc);
            break;
            case 4:
                LimparTela();
                imprimirTodos(pgabarito);

            break;
            case 5:
                LimparTela();
                printf("O numero de usuarios cadastrados eh: %d \n\n\n", p);
                system("pause");
            break;
            case 6:
                LimparTela();
                if(verdade == 1){
                    printf("GABARITO OFICIAL \n");
                    printf("%s \n\n\n", gabarito);
                    system("pause");
                }else{
                    printf("Gabarito Indisponivel no momento !!!!!! \n\n");
                    system("pause");
                }

            break;
            case 9:
                LimparTela();
                printf("Finalizou o programa \n");
            break;
            default:
                LimparTela();
                printf("opcao invalida, entre novamente \n");
                system("pause");
                fflush(stdin);
        }
    }while(opc!=9);
}
