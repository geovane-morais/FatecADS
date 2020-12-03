#include "bibliotecaPessoal.h"
#define neperiano 2.718281828459

void Derivada()
{
    setlocale(LC_ALL, "Portuguese");
    while(1){
        int menuDerivada=0;
        double x=0,k=0,resultado=0;

        printf ("    __________________________________  \n"
                "   |           MENU DERIVADA          | \n"
                "   |                                  | \n"
                "   | 1. f(x) = k                      | \n"
                "   | 2. f(x) = x^k                    | \n"
                "   | 3. f(x) = k^x                    | \n"
                "   | 4. f(x) = e^x                    | \n"
                "   | 5. f(x) = log (x)                | \n"
                "   |              k                   | \n"
                "   | 6. f(x) = ln(x)                  | \n"
                "   | 7. f(x) = 1/x                    | \n"
                "   | 8. f(x) = sen(x)                 | \n"
                "   | 9. f(x) = cos(x)                 | \n"
                "   | 10.f(x) = tg(x)                  | \n"
                "   | 11. VOLTAR AO MENU PRINCIPAL     | \n"
                "   |__________________________________| \n");

        LerScanfNovamente:
        printf("   Escolha a funcao a ser Derivada:");
        scanf("%d", &menuDerivada);

        switch (menuDerivada){
            case 1:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 1. f(x) = k                      | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor de k desejado:");
                    scanf("%lf", &k);
                    printf("   Digite o valor de x desejado:");
                    scanf("%lf", &x);

                    printf("   ************************************ \n"
                           "   * f'(x) = 0                           \n"
                           "   ************************************ \n\n");
                } while(RealizarNovamente());
            break;
            case 2:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 2. f(x) = x^k                    | \n"
                           "   |__________________________________| \n\n");

                    do {
                        printf("   Digite o valor de k desejado:");
                        scanf("%lf", &k);
                        printf("   Digite o valor de x desejado:");
                        scanf("%lf", &x);

                        if (k <= 1){
                            printf( "\n**********************************************    "
                                    "\n** Opcao invalida K precisa ser MAIOR que 1 **    "
                                    "\n**********************************************\n\n");
                        }
                    } while (k <= 1);

                    resultado = k * pow(x,(k-1));

                    printf("   ************************************ \n"
                           "   * f'(x) =  %lf                    \n"
                           "   ************************************ \n\n",resultado);
                } while(RealizarNovamente());
            break;
            case 3:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 3. f(x) = k^x                    | \n"
                           "   |__________________________________| \n\n");

                    do {
                        printf("   Digite o valor de k desejado:");
                        scanf("%lf", &k);
                        printf("   Digite o valor de x desejado:");
                        scanf("%lf", &x);

                        if (k < 1){
                            printf( "\n**********************************************    "
                                    "\n** Opcao invalida k precisa ser MAIOR que 0 **    "
                                    "\n**********************************************\n\n");
                        }
                        if (x <= 0){
                            printf( "\n**********************************************    "
                                    "\n**Opcao invalida X precisa ser REAL POSITIVO**    "
                                    "\n**********************************************\n\n");
                        }
                    } while (x <= 0 || k < 1);

                    resultado = log(k) * pow(k,x);

                    printf("   ************************************ \n"
                           "   * f'(x) = %lf                   \n"
                           "   ************************************ \n\n",resultado);
                } while(RealizarNovamente());
            break;
            case 4:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 4. f(x) = e^x                    | \n"
                           "   |__________________________________| \n\n");

                    do{
                    printf("   Digite o valor de x desejado:");
                    scanf("%lf", &x);
                    if (x <= 0){
                            printf( "\n**********************************************    "
                                    "\n**Opcao invalida X precisa ser REAL POSITIVO**    "
                                    "\n**********************************************\n\n");
                        }
                    } while (x <= 0);

                    resultado = log(neperiano) * pow(neperiano,x);

                    printf("   ************************************ \n"
                           "   * f'(x) = %lf                    \n"
                           "   ************************************ \n\n",resultado);
                } while(RealizarNovamente());
            break;
            case 5:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 5. f(x) = log (x)                | \n"
                           "   |______________k___________________| \n\n");

                    do{
                        printf("   Digite o valor de k desejado:");
                        scanf("%lf", &k);
                        printf("   Digite o valor de x desejado:");
                        scanf("%lf", &x);

                        if (k < 1){
                            printf( "\n**********************************************    "
                                    "\n** Opcao invalida k precisa ser MAIOR que 0 **    "
                                    "\n**********************************************\n\n");
                        }
                    }while (k < 1);

                    resultado = 1 / (x*log(k));

                    printf("   ************************************ \n"
                           "   * f'(x) = %lf                    \n"
                           "   ************************************ \n\n",resultado);
                } while(RealizarNovamente());
            break;
            case 6:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 6. f(x) = ln(x)                  | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor de x desejado:");
                    scanf("%lf", &x);

                    resultado = 1/x;

                        printf("   ************************************ \n"
                               "   * f'(x) = %1f                    \n"
                               "   ************************************ \n\n", resultado);
                } while(RealizarNovamente());
            break;
            case 7:
                LimparTela();
                do{
                    printf("    __________________________________  \n"
                           "   | 7. f(x) = 1/x                    | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor de x desejado:");
                    scanf("%lf", &x);

                    resultado = -1/(x*x);

                    printf("   ************************************ \n"
                           "   * f'(x) = %1f                    \n"
                           "   ************************************ \n\n", resultado);
                } while(RealizarNovamente());
            break;
            case 8:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 8. f(x) = sen(x)                 | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor de x desejado:");
                    scanf("%lf", &x);

                    resultado = (double)cos(radianoParaGraus(x));

                    printf("   ************************************ \n"
                           "   * f'(x) = %1f                    \n"
                           "   ************************************ \n\n", resultado);
                } while(RealizarNovamente());
            break;
            case 9:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 9. f(x) = cos(x)                 | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor de x desejado:");
                    scanf("%lf", &x);

                    resultado = (double)-sin(radianoParaGraus(x));

                    printf("   ************************************ \n"
                           "   * f'(x) = %lf                    \n"
                           "   ************************************ \n\n", resultado);
                } while(RealizarNovamente());
            break;
            case 10:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 10. f(x) = tg(x)                 | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor de x desejado:");
                    scanf(" %lf", &x);
                    resultado = 1 / (double)(cos(radianoParaGraus(x)) * cos(radianoParaGraus(x)));
                    printf("   ************************************ \n"
                           "   * f'(x) = %1f                     \n"
                           "   ************************************ \n\n", resultado);
                } while(RealizarNovamente());
            break;
            case 11:
            LimparTela();
            return;
            default:
                printf ("   =================================== \n"
                        "   ========== OPCAO INVALIDA ========= \n"
                        "   =================================== \n");
                goto LerScanfNovamente;
            break;
        }
        LimparTela();
    }
}


