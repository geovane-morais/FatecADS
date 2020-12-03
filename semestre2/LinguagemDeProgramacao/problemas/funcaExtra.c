#include "cabec.h"

void LimparTela()   //define a systema operacional
{
    #ifdef _WIN32
    system("cls");
    #endif

    #ifdef __linux__
    system("clear");
    #endif
}
