
#include "bibliotecaPessoal.h"
#define PI 3.141592653

void LimparTela()   //define a systema operacional
{
    #ifdef _WIN32
    system("cls");
    #endif

    #ifdef __linux__
    system("clear");
    #endif
}

int RealizarNovamente()
{
    int y;

    while(1){
        printf("   Realizar outra operacao?\n");
        printf("   NAO = 0 / SIM = 1\n");
        printf("            ");
        scanf(" %d", &y);
        LimparTela();

        if (y == 0 || y == 1){
            break;
        }
        else {
           printf ("   =================================== \n"
                   "   ===========OPCAO INVALIDA========== \n"
                   "   =================================== \n\n");
        }
    }
    return (y);
}

double radianoParaGraus (double rad){
    return (rad * 180 / PI);
}

double grausParaRadianos(double angulo){
    return (angulo * PI / 180);
}
