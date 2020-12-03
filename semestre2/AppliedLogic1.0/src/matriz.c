#include "bibliotecaPessoal.h"
#define LIMITE 3

void Matrizes()
{
    char menu[2];

    inicio:
    do{
        printf( "    __________________________________ \n"
                "   |             Matrizes             |\n"
                "   |                                  |\n"
                "   |1- Determinante                   |\n"
                "   |2- Soma                           |\n"
                "   |3- Subtrac�o                      |\n"
                "   |4- Produto                        |\n"
                "   |5- Voltar ao MENU PRINCIPAL       |\n"
                "   | _________________________________|\n\n"
                "    Escolha a opera��o desejada:");
        scanf("%1s", menu);

        if (!strcmp(menu,"1")) {
            int m = 0, l = 0;
            double **a = 0;
            int i = 0, j = 0, k = 0;
            double factor = 0;
            double temp = 0;
            int count = 0;

            do {
                printf("    Digite a quantidade de linhas: ");
                scanf("%d", &m);
                printf("    Digite a quantidade de colunas: ");
                scanf("%d", &l);
            } while(l < 0 || l > 3 || m > 3 || m < 0);

            a = (double **) calloc(m, sizeof(double *));
            for(i = 0; i < m; i++)
            {
                a[i] = (double *) calloc(m, sizeof(double));
            }

            printf("\n\n   Entre com o conteudo da matriz\n\n");
            for(i = 0; i < m; i++)
            {
                for(j = 0; j < l; j++)
                {
                    printf("   A[%d ; %d] => ", i+1, j+1);
                    scanf("%lf", &a[i][j]);
                }
            }

            printf("\n   Matriz digitada:\n");
            for(i = 0; i < m; i++)
            {
                for(j = 0; j < l; j++)
                {
                    printf("   %8.3f ", a[i][j]);
                }
                printf("\n");
            }
            for(i = 0; i < m - 1; i++)
            {
                if(a[i][i] == 0)
                {
                    for(k = i; k < m; k++)
                    {
                        if(a[k][i] != 0)
                        {
                            for(j = 0; j < m; j++)
                            {
                                temp = a[i][j];
                                a[i][j] = a[k][j];
                                a[k][j] = temp;
                            }
                            k = m;
                        }
                    }
                    count++;
                }

                if(a[i][i] != 0)
                {
                    for(k = i + 1; k < m; k++)
                    {
                        factor = -1.0 * a[k][i] /  a[i][i];
                        for(j = i; j < m; j++)
                        {
                            a[k][j] = a[k][j] + (factor * a[i][j]);
                        }
                    }
                }
            }

            temp = 1.0;
            for(i = 0; i < m; i++)
                temp *= a[i][i];

            printf("\n   Determinante:\n");
            if(count % 2 == 0)
                printf("   %8.3f \n\n", temp);
            else
                printf("   %8.3f \n\n", -1.0 * temp);

        }

        else if (!strcmp(menu,"2")) {

            int m, n, i, j, m1[LIMITE][LIMITE], m2[LIMITE][LIMITE], m3[LIMITE][LIMITE];
            printf("   Digite o numero de linhas:");
            scanf("%d", &m);
            printf("   Digite o numero de colunas:");
            scanf("%d", &n);
            if (m <= LIMITE && n <= LIMITE)
            {
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1) {
                        printf("   A[%d ; %d] => ", i+1, j+1);
                        scanf("%d", &m1[i][j]);
                    }
                }
                printf("\n");
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1) {
                        printf("   B[%d ; %d] => ", i+1, j+1);
                        scanf("%d", &m2[i][j]);
                    }
                }
                printf("\n");
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1)
                    {
                        m3[i][j] = m1[i][j] + m2[i][j];
                        printf("   %3d", m3[i][j]);
                    }
                    printf("\n\n");
                }
            }
            else printf("   Matriz excessivamente grande!\n");
        }

        else if (!strcmp(menu, "3")) {
            int m, n, i, j, m1[LIMITE][LIMITE], m2[LIMITE][LIMITE], m3[LIMITE][LIMITE];
            printf("   Digite o numero de linhas:");
            scanf("%d", &m);
            printf("   Digite o numero de colunas:");
            scanf("%d", &n);
            if (m <= LIMITE && n <= LIMITE)
            {
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1) {
                        printf("   A[%d ; %d] => ", i+1, j+1);
                        scanf("%d", &m1[i][j]);
                    }
                }
                printf("\n");
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1) {
                        printf("   B[%d ; %d] => ", i+1, j+1);
                        scanf("%d", &m2[i][j]);
                    }
                }
                printf("\n");
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1)
                    {
                        m3[i][j] = m1[i][j] - m2[i][j];
                        printf("   %3d", m3[i][j]);
                    }
                    printf("\n\n");
                }
            }
            else printf("   Matriz excessivamente grande!\n");
        }

        else if (!strcmp(menu,"4")){
            int m, n, i, j, k, m1[LIMITE][LIMITE], m2[LIMITE][LIMITE], m3[LIMITE][LIMITE];
            printf("   Digite o numero de linhas:");
            scanf("%d", &m);
            printf("   Digite o numero de colunas:");
            scanf("%d", &n);
            if (m <= LIMITE && n <= LIMITE)
            {
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1) {
                        printf("   A[%d ; %d] => ", i+1, j+1);
                        scanf("%d", &m1[i][j]);
                    }
                }
                printf("\n");
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1) {
                        printf("   B[%d ; %d] => ", i+1, j+1);
                        scanf("%d", &m2[i][j]);
                    }
                }
                printf("\n");
                for (i = 0; i < m; i = i + 1)
                {
                    for (j = 0; j < n; j = j + 1)
                    {
                        m3[i][j] = 0;
                        for (k = 0; k < n; k = k + 1)
                            m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
                        printf("   %3d", m3[i][j]);
                    }
                    printf("\n\n");
                }
            }
            else printf("   Matriz excessivamente grande!\n");
        }
         else if (!strcmp(menu,"5"))
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

