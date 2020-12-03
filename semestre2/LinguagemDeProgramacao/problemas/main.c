#include "cabec.h"

int main()
{
    char menu = '\0';

    do {
        printf("\n 1- problema1();                 "
               "\n 4- problema4();                 "
               "\n 5- SAIR do programa             "
               "\n\n Informe qual deseja executar: ");
        scanf(" %c", &menu);

        if (menu == '1'){
            LimparTela();
            problema1();
        }
        else if (menu == '4'){
            LimparTela();
            problema4();
        }
         else if (menu == '5'){
            LimparTela();
        }
        else {
            LimparTela();
            printf ("\n ===============================  "
                    "\n =========OPCAO INVALIDA========  "
                    "\n ===============================\n");
        }
    } while(menu != '5');

    printf ("\n   =================================  "
            "\n   ======Finalizado com SUCESSO=====  "
            "\n   =================================\n");
    return (0);
}
