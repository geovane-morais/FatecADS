#include "bibliotecaPessoal.h"

void Integral()
{
    while(1){
        int menuIntegral=0;
        int a=0,b=0,precisao=0;
        double k=0,area=0;

        printf ("    __________________________________  \n"
                "   |       MENU INTEGRAL DEFINIDA     | \n"
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
        printf("   Escolha a funcao a ser integrada:");
        scanf("%d", &menuIntegral);

        switch (menuIntegral){
            case 1:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 1. f(x) = k                      | \n"
                           "   |__________________________________| \n\n");
                    printf("   Digite o valor de k desejado:");
                    scanf("%lf", &k);
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 2:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 2. f(x) = x^k                    | \n"
                           "   |__________________________________| \n\n");
                    printf("   Digite o valor de k desejado:");
                    scanf("%lf", &k);
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 3:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 3. f(x) = k^x                    | \n"
                           "   |__________________________________| \n\n");
                    printf("   Digite o valor de k desejado:");
                    scanf("%lf", &k);
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 4:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 4. f(x) = e^x                    | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 5:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 5. f(x) = log (x)                | \n"
                           "   |______________k___________________| \n\n");
                    printf("   Digite o valor de k desejado:");
                    scanf("%lf", &k);
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 6:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 6. f(x) = ln(x)                  | \n"
                           "   |__________________________________| \n\n");

                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                        area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                        printf("   ************************************ \n"
                               "   * I(a,b) = %lf                       \n"
                               "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 7:
                LimparTela();
                do{
                    printf("    __________________________________  \n"
                           "   | 7. f(x) = 1/x                    | \n"
                           "   |__________________________________| \n\n");
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 8:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 8. f(x) = sen(x)                 | \n"
                           "   |__________________________________| \n\n");
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 9:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 9. f(x) = cos(x)                 | \n"
                           "   |__________________________________| \n\n");
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 10:
                LimparTela();
                do {
                    printf("    __________________________________  \n"
                           "   | 10. f(x) = tag(x)                 | \n"
                           "   |__________________________________| \n\n");
                    printf("   Digite o valor desejado para o extremo inferior(a):");
                    scanf("%d", &a);
                    printf("   Digite o valor desejado para o extremo superior(b):");
                    scanf("%d", &b);
                    printf("   Informe a precisao:");
                    scanf("%d", &precisao);

                    area = CalcularIntegral(a, b, precisao, k, menuIntegral);

                    printf("   ************************************ \n"
                           "   * I(a,b) = %lf                       \n"
                           "   ************************************ \n\n",area);
                } while(RealizarNovamente());
            break;
            case 11:
            LimparTela();
            return;
            default:
                printf ("   =================================== \n"
                        "   ===========OPCAO INVALIDA========== \n"
                        "   =================================== \n");
                goto LerScanfNovamente;
            break;
        }
        LimparTela();
    }
}

double Fx(double x, double k,int opcao)
{
    if(opcao == 1)
        return (k);
    else if(opcao == 2)
        return (pow(x,k));
    else if(opcao == 3)
        return (pow(k,x));
    else if(opcao == 4)
        return (exp(x));
    else if(opcao == 5)
        return (log10(x)/log10(k));//Transforma LOGk (x) em LOG10(x) / LOGk (x)
    else if(opcao == 6)
        return (log(x));
    else if(opcao == 7)
        return (1/x);
    else if(opcao == 8)
        return (sin(radianoParaGraus(x)));
    else if(opcao == 9)
        return (cos(radianoParaGraus(x)));
    else if(opcao == 10)
        return (tan(radianoParaGraus(x)));

    return (0);
}

double CalcularIntegral(int a, int b, int precisao,int k, int opcao)
{
    double y=0, area=0, x=0;
    double intervalo = (((double)(b - a)) / ((double)precisao));

    for (x = (double)a; x < (double)b; x += intervalo){
        y = Fx(x,k,opcao);
         area += (double)(y * intervalo / 2);
    }
    for (x = (double)b; x > (double)a; x -= intervalo){
        y = Fx(x,k,opcao);
        area += (double)(y * intervalo / 2);
    }
    return (area);
}

