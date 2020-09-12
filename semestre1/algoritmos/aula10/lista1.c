#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  compile com:
 *  $gcc -g lista1.c -lm
 *  para garantir que inclua as bibliotecas
 */

void exercicio1()
{
    float numero[5];
    printf("\n===============EXERCICIO1==================\n");
    for (int a=0;a<5;a++)
    {
        printf("informe numero[%d]:",(a+1));
        scanf("%f", &numero[a]);
    }
    for (int b=0;b<5;b++)
        printf("Quadrado do numero[%d]:%.2f\n",(b+1),pow(numero[b],2));
    printf("=============FIM EXERCICIO1================\n");
}

void exercicio2()
{
    printf("\n===============EXERCICIO2==================\n");
    printf("Numeros pares de 1-10\n");
    for(int a=2;a<=10;a+=2)
        printf("%d  ",a);
    printf("\n=============FIM EXERCICIO2================\n");
}

void exercicio3()
{
    printf("\n===============EXERCICIO3==================\n");
    printf("Numeros de 100-1:");
    printf("\n-------------------------------------------\n");
    for(int a=100,b=2;a>=1;a--, b++)
    {
        printf("%d ",a);
        if (b == 14)
            printf("\n");
        else if (b>14) b=1;
    }
    printf("\n=============FIM EXERCICIO3================\n");
}


void exercicio4()
{
    printf("\n===============EXERCICIO4==================\n");
    printf("Numeros pares de 0-100:");
    printf("\n-------------------------------------------\n");
    for(int a=2,b=0;a<=100;a+=2, b++)
    {
        printf("%d ",a);
        if (b == 14)
            printf("\n");
        else if (b>14) b=1;
    }
    printf("\n=============FIM EXERCICIO4================\n");
}

void exercicio5()
{
    printf("\n===============EXERCICIO5==================\n");
    printf("Numeros de 120-300:");
    printf("\n-------------------------------------------\n");
    for(int a=120,b=1;a<=300;a++, b++)
    {
        printf("%d ",a);
        if (b == 11)
            printf("\n");
        else if (b>11) b=1;
    }
    printf("\n=============FIM EXERCICIO5================\n");
}

void outro5()
{
    float inicio,final,intervalo;
    printf("\n=================OUTRO5====================\n");
    printf("FOR (inicio;final;intervalo)");
    printf("\n-------------------------------------------\n");

    printf("INFORME o inicio:");
    scanf("%f", &inicio);
    printf("INFORME o final:");
    scanf("%f", &final);
    printf("INFORME o intervalo:");
    scanf("%f", &intervalo);

    if (inicio<final)
    for(int a=inicio;a<final;a+=intervalo)
        printf("%d ",a);

    else if (inicio>final)
    for(int a=inicio-1;a>=final;a-=intervalo)
        printf("%d ",a);

    printf("\n===============FIM OUTRO5==================\n");
}

int main()
{
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    outro5();
    return EXIT_SUCCESS;
}
