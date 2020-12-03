#include "bibliotecaPessoal.h"

void Ordenar()
{
    char menu[2];
    int Vetor[100];
    int I, N, Menor, Ordenadas, Temp, Maior;

    inicio:
    do{
        printf( "    __________________________________ \n"
                "   |    Ordenar Elementos do Vetor    |\n"
                "   |                                  |\n"
                "   |1- Ordenar de Forma Crescente     |\n"
                "   |2- Ordenar de Forma Decrescente   |\n"
                "   |3- Voltar ao MENU PRINCIPAL       |\n"
                "   | _________________________________|\n\n"
                "    Escolha a operacao desejada:");
        scanf("%1s", menu);

        if (!strcmp(menu,"1")) {
            printf("    Digite quantos vetores serao ordenados:");
            scanf("%d", &N);

            for (I = 0; I < N; I++){
                printf("    ");
                scanf("%d", &Vetor[I]);
            }

            Ordenadas = -1;

            do{
                Ordenadas++;
                Menor = Ordenadas;

                for (I = Ordenadas + 1; I < N; I++)
                    if (Vetor[I] < Vetor[Menor])
                        Menor = I;

                Temp = Vetor[Ordenadas];
                Vetor[Ordenadas] = Vetor[Menor];
                Vetor[Menor] = Temp;

            } while (Ordenadas < N);

            printf("\n");
            printf("    Vetores em ordem crescente:\n");

            for (I = 0; I < N; I++)
                printf("    %d\n", Vetor[I]);

            printf("\n");
        }

        else if (!strcmp(menu,"2")) {
            printf("    Digite quantos vetores serao ordenados:");
            scanf("%d", &N);
            for (I = 0; I < N; I++) {
                printf("    ");
                scanf("%d", &Vetor[I]);
            }

            Ordenadas = -1;

            do{
                Ordenadas++;
                Maior = Ordenadas;

                for (I = Ordenadas + 1; I < N; I++)
                    if (Vetor[I] > Vetor[Maior])
                        Maior = I;

                Temp = Vetor[Ordenadas];
                Vetor[Ordenadas] = Vetor[Maior];
                Vetor[Maior] = Temp;
            } while (Ordenadas < N);

            printf("\n");
            printf("    Vetores em ordem decrescente:\n");

            for (I = 0; I < N; I++)
                printf("    %d\n", Vetor[I]);

            printf("\n");
        }

        else if (!strcmp(menu,"3"))
            return;

        else {
            LimparTela();
            printf ("\n   =================================== \n"
                    "   ===========OPCAO INVALIDA========== \n"
                    "   =================================== \n");
            goto inicio;
        }

    } while (RealizarNovamente());
}

