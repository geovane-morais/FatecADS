#include <stdio.h>
#include <stdlib.h>

void exercicio1()
{
    int a = 1;
    printf("TABUADA do 5\n");
    while (a <= 10)
    {
        printf("5 X %d = %d\n", a++, a * 5);
    }
}

void exercicio2()
{
    int b, c;
    do
    {
        printf("\ninforme o numero:");
        c = 1;
        scanf(" %d", &b);
        while (c <= 10 && b != 0)
        {
            printf("%d X %d = %d\n", b, c++, c * b);
        }

    } while (b != 0);
}

void exercicio3()
{
    int d = 1;
    printf("\nTabuada do 2-5:\n");
    while (d <= 10)
    {
        printf("2X%d=%d | 3X%d=%d | 4X%d=%d | 5X%d=%d\n", d, d * 2, d, d * 3, d, d * 4, d, d * 5);
        d++;
    }
}

void exercicio4 ()
{
    int e = 0;
    float f, g;
    while (e != 5)
    {
        printf("\n====================\n"
               "Digite dois numeros\n");
        scanf("%f", &f);
        scanf("%f", &g);
        printf("====================\n"
               "1- Soma\n"
               "2- Subtracao\n"
               "3- Divisao\n"
               "4- Multiplicacao\n"
               "5- sair\n"
               "Operacao: ");
        scanf(" %d", &e);
        printf("====================\n");

        if (e != 5)
            printf("Resultado eh ");

        switch (e)
        {
        case 1:
            printf("%.2f", f + g);
            break;
        case 2:
            printf("%.2f", f - g);
            break;
        case 3:
            printf("%.2f", f / g);
            break;
        case 4:
            printf("%.2f", f * g);
            break;
        default:
            break;
        }
    }
}

void exercicio5()
{
    int h, j = 0;
    printf("\nDIGITE UM NUMERO:");
    scanf("%d", &h);
    printf("\nSoma dos numeros ate %d eh ", h);
    for (int i = 0; i <= h; ++i)
        j = j + i;
    printf("%d\n", j);
}

void exercicio6_1()
{
    int a;
    printf("TABUADA do 5\n");
    for (a = 0; a <= 10; ++a)
    {
        printf("5 X %d = %d\n", a, a * 5);
    }
}

void exercicio6_2()
{
    int b,c;
    while (1)
    {
        printf("\ninforme o numero:");
        scanf("%d", &b);
        if (b == 0) break;
        for (c = 1;c <= 10;c++)
        {
            printf("%d X %d = %d\n", b, c, c * b);
        }
    }

}
void exercicio6_3()
{
    int d=1;
    printf("\nTabuada do 2-5:\n");
    for(d=1;d <= 10;++d)
        printf("2X%d=%d | 3X%d=%d | 4X%d=%d | 5X%d=%d\n",
               d, d * 2, d, d * 3, d, d * 4, d, d * 5);
}

void exercicio7()
{
    int a,b;
    do
    {
        printf("\nDigite um numero:");
        scanf("%d", &a);
        printf("Contagem regressiva:\n");
        for (b = a; b>=0;b--)
        {
            printf("%d\n",b);
        }

    }   while(1);
}

int main()
{
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6_1();
    exercicio6_2();
    exercicio6_3();
    exercicio7();
    return 0;
}
