#include "cabec.h"

void problema4()
{
    LimparChar(msg);

    do{
        printf("\nCRIPTOGRAFIA\n\n");
        printf("informe a mensagem:");
        scanf(" %[^\n]s", msg);

        printf("\n");
        printf("conteudo da msg:                            %s\n",msg);
        Passo1(msg);
        printf("conteudo da msg com primeiro processamento: %s\n",msg);
        Passo2(msg);
        printf("conteudo da msg com segundo processamento:  %s\n",msg);
        Passo3(msg);
        printf("conteudo da msg com terceiro processamento: %s\n",msg);

        printf("\nRealizar novamente? ('1'-sim/\"qualquer\"-nao):");
        scanf(" %c", &rzn);
        fflush(stdin);

        LimparChar(msg);
        LimparTela();
    } while (rzn == '1');
}

void Passo1(char *x)
{
    for (int a=0; a < strlen(x); a++){
        if(AnalisarChar(x[a])){
            x[a] += 3;
            if(!AnalisarChar(x[a])){
               x[a] = '|';
            }
        }
    }
}

void Passo2(char *x)
{
    LimparChar(msgInv);
    strcpy(msgInv,x);
    for (int a=0, b=(strlen(x)-1); a < strlen(x); a++,b--)
        x[a] = msgInv[b];
    LimparChar(msgInv);
}

void Passo3(char *x)
{
    for (int a=(strlen(x)/2); a < strlen(x); a++)
        x[a] = (x[a] == ' ') ? x[a] : x[a]-1 ;
}

int AnalisarChar (char a){
    if ( (a >= 65 && a <= 90) || (a >= 97  && a <= 122) )
        return (1);
    return (0);
}

void LimparChar(char *x)
{
    int qnt = (int) (sizeof(x) / sizeof(char));
    for (int a=0; a < qnt; a++)
        x[a] = '\0';
}

