
#include "bibliotecaPessoal.h"


void Funcao()
{
    float x, k, pot, l;
	int    s, e,t;

    do{
        printf ("    __________________________________  \n"
                "   |            MENU Funcao           | \n"
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
                "   |__________________________________| \n\n");

        printf("   Informe a opcao desejada:");
        scanf("   %d", &s);
        printf("\n");

        switch (s)
        {
            case 1:
                printf("   Entre com o X: ");
                scanf("   %f", &x);
                printf("\n");
                printf("   Entre com o K: ");
                scanf("   %f", &k);
                printf("\n");
                printf("   F(%.1f) = %.1f\n", x,k);
                printf("\n");

                e = RealizarNovamente();
            break;

            case 2:
                printf ("   Entre com o valor de X: ");
                scanf ("%f",&x);
                printf("\n");
                printf ("   Entre com o valor de k: ");
                scanf ("%f",&k);
                printf("\n");

                while (k < 1)
                {
                    printf("\n   Opcao invalida K precisa ser Natural positivo\n\n");
                    printf ("   Entre com o valor de k: ");
                    scanf ("%f",&k);
                    printf("\n");

                }

                pot = pow (x,k);
                printf("   F(%.1f) = %f\n", x,pot);
                printf("\n");

                e = RealizarNovamente();
            break;

            case 3:
                printf ("   Entre com o valor de X: ");
                scanf ("%f",&x);
                printf("\n");
                printf ("   Entre com o valor de k: ");
                scanf ("%f",&k);
                printf("\n");

                 while (k <= 0 || k == 1)
                 {
                     printf("\n   Opcao invalida K precisa ser Real positivo nao nulo e diferente de 1\n\n");
                     printf ("   Entre com o valor de k: ");
                     scanf ("%f",&k);
                     printf("\n");

                 }

                 pot=pow (k,x);
                 printf("   F(%.1f) = %f\n\n", x,pot);
                 printf("\n");

                 e = RealizarNovamente();
            break;

            case 4:
                 printf ("   Entre com o valor de X: ");
                 scanf ("%f",&x);
                 printf("\n");

                 pot = exp(x);

                 printf("   F(%.1f) = %f \n\n", x,pot);

                 printf("\n");
                 e = RealizarNovamente();
            break;

            case 5:
                 printf ("   Entre com o valor de X: ");
                 scanf ("%f",&x);
                 printf("\n");


                 while (x < 1)
                 {
                     printf("\n   Opcao invalida X precisa ser Real positivo nao nulo\n\n");
                     printf ("   Entre com o valor de x: ");
                     scanf ("%f",&x);
                     printf("\n");

                 }

                 printf ("   Entre com o valor de K: ");
                 scanf ("%f",&k);
                 printf("\n");


                 while (k <= 0 || k == 1)
                 {
                     printf("\n   Opcao invalida K precisa ser Real positivo nao nulo e diferente de 1\n\n");
                     printf ("   Entre com o valor de k: ");
                     scanf ("%f",&k);
                     printf("\n");
                 }

                 l= log10(x)/log10(k);

                 printf("   F(%.1f) = %f ", x,l);
                 printf("\n");


                 e = RealizarNovamente();
            break;

            case 6:
                 printf ("   Entre com o valor de X: ");
                 scanf ("%f",&x);
                 printf("\n");

                 while (x < 1)
                 {
                     printf("\n   Opcao invalida X precisa ser Real positivo nao nulo\n\n");
                     printf ("   Entre com o valor de x: ");
                     scanf ("%f",&x);
                     printf("\n");

                 }

                 pot=log(x);


                 printf("   F(%.1f) = %f \n\n", x,pot);
                 printf("\n");


                 e = RealizarNovamente();
            break;

            case 7:
                 printf ("   Entre com o valor de X: ");
                 scanf ("%f",&x);

                 while (x == 0)
                 {
                     printf("\n   Opcao invalida X precisa ser Real nao nulo\n\n");
                     printf ("   Entre com o valor de x: ");
                     scanf ("%f",&x);
                     printf("\n");
                 }

                 pot= 1/x;

                 printf("   F(%.0f) = %f ", x,pot);
                 printf("\n");


                 e = RealizarNovamente();
            break;

            case 8:
                 printf ("   Entre com o valor do angulo X em graus: ");
                 scanf ("%f",&x);
                 printf("\n");

                 l= sin(x);

                 printf("   F(%.0f) = %f ", x,l);
                 printf("\n");


                 e = RealizarNovamente();
            break;

            case 9:
                 printf ("   Entre com o valor do angulo X em graus: ");
                 scanf ("%f",&x);
                 printf("\n");

                 l= cos(x);

                 printf("   F(%.0f) = %f ", x,l);
                 printf("\n");


                 e = RealizarNovamente();
            break;

            case 10:
                 printf ("   Entre com o valor do angulo X em graus: ");
                 scanf ("%f",&x);
                 printf("\n");

                 t=x;

                 while (t %90==0)
                 {
                    printf("\n   Opcao invalida o grau nao pode ser multiplo de 90\n\n");
                    printf ("   Entre com o valor do angulo X em graus: ");
                    scanf ("%f",&x);
                    printf("\n");
                    t=x;
                 }

                 l= tan(x);

                 printf("   F(%.0f) = %f ", x,l);
                 printf("\n");
                 printf("\n");
                 e = RealizarNovamente();
            break;

            case 11:
                 e = 0;
            break;
        }
    } while (e);
}
