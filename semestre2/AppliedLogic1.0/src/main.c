#include "bibliotecaPessoal.h"

int main()
{
    LimparTela();
    setlocale(LC_ALL, "Portuguese");
    char menu[2];
    printf( "             ,ggg,                                                                     ,gggg,                                          \n"
            "            dP  8I                           ,dPYb,                        8I         d8' '8I                                         \n"
            "           dP   88                           IP'`Yb                        8I         88' 'dP                                         \n"
            "          dP    88                           I8  8I                        8I      8888888P                                           \n"
            "         ,8'    88                           I8  8'  gg                    8I         88                                gg            \n"
            "         d88888888   gg,gggg,    gg,gggg,    I8 dP         ,ggg,     ,gggg,8I         88          ,ggggg,    ,gggg,gg          ,gggg, \n"
            "        ,8      88   I8P    Yb   I8P    Yb   I8dP    88   i8   8i   ddd  dY8I    ,aa,_88         dPd  dY8g  dPd  dY8I   88    dPd  dYb\n"
            "  dP   ,8P      Y8   I8'    ,8i  I8'    ,8i  I8P     88   I8, ,8I  i8'    ,8I   dP' '88P        i8'    ,8I i8'    ,8I   88   i8'      \n"
            "  Yb,_,dP       `8b,,I8 _  ,d8' ,I8 _  ,d8' ,d8b,_ _,88,_ `YbadP' ,d8,   ,d8b,  Yb,_,d88b,,_   ,d8,   ,d8',d8,   ,d8I _,88,_,d8,_    _\n"
            "    Y8P*         `Y8PI8 YY88888PPI8 YY88888P8P'PY888P''Y8888PPY888PPY8888P'`Y8   'Y8P'   PY8888'PPY8888PP  P'Y8888PP888''PPY8PPPY88PPP\n"
            "                     I8          I8                                                                              ,d8I'                \n"
            "                     I8          I8                                                                            ,dP'8I                 \n"
            "                     I8          I8                                                                           ,8   8I                 \n"
            "                     I8          I8                                                                           I8   8I                 \n"
            "                     I8          I8                                                                           `8, ,8I                 \n"
            "                     I8          I8                                                                            `Y8P'                  \n\n");

    printf("                                                              Press ENTER to continue\n");
    getchar();

    while(1){
        LimparTela();
        inicio:
        printf( "    ______________________________ \n"
                "   |            MENU              |\n"
                "   |1- Ordenar Elementos do Vetor |\n"
                "   |2- Matrizes                   |\n"
                "   |3- Aplicacao em Funcao        |\n"
                "   |4- Aplicacao em Derivada      |\n"
                "   |5- Integral Definida          |\n"
                "   |6- SAIR                       |\n"
                "   |______________________________|\n\n"
                "    Escolha a operacao desejada: ");
        scanf("%1s", menu);

        if (!strcmp(menu,"1")) {
                    LimparTela();
                    Ordenar();
        } else if (!strcmp(menu,"2")) {
            LimparTela();
            Matrizes();
        } else if (!strcmp(menu,"3")) {
            LimparTela();
            Funcao();
        } else if (!strcmp(menu,"4")) {
            LimparTela();
            Derivada();
        } else if (!strcmp(menu,"5")) {
            LimparTela();
            Integral();
        } else if (!strcmp(menu,"6")) {
            goto fim;
        } else {
            printf("   |=============================|\n");
            printf("   |*******Comando INVALIDO******|\n");
            printf("   |=============================|\n");
            goto inicio;
        }
    }

    fim :{
        LimparTela();
        printf("\n   |=============================|");
        printf("\n   |*******FIM DO PROGRAMA*******|");
        printf("\n   |=============================|\n\n");
    }

    return (0);
}


