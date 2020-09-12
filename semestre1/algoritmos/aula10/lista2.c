#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*  compile com:
 *  $gcc -g lista2.c -lm
 *  para garantir que inclua as bibliotecas
 */
void exercicio6()
{
    printf("\n=================EXERCICIOteste==================\n");
    float numero[10],save;
    for (int a=0;a<10;a++)
    {
        printf("informe o nuemro[%d]:",a+1);
        scanf("%f", &numero[a]);
    }
    for (int a=0;a<10;a++)
    {
        for (int b=0;b<10;b++)
        {
            if (b+1==10) goto fim;
            if (numero[b] > numero[b+1])
            {
                save = numero[b+1];
                numero[b+1] = numero[b];
                numero[b] = save;
            }
        }
        fim:;
    }

    printf("MAIOR:%.1f \nMENOR:%.1f",numero[9],numero[0]);
    printf("\n===============FIM EXERCICIO6================\n");
}

void exercicio7()
{
    int N;
    float resultado=0;
    printf("\n=================EXERCICIO7==================\n");
    printf("OBS: Informe o ultimo divisor:");
    printf("\n     H = 1 + 1/2 + ... + 1/N");
    printf("\n---------------------------------------------\n");
    printf("INFORME N:");
    scanf("%d",&N);
    for(N;N>=1;N--) resultado += (float) 1/N; // @suppress("Statement has no effect")
    printf("H = %.2f",resultado);
    printf("\n===============FIM EXERCICIO7================\n");
}

void exercicio8()
{
    int MaxNumero=1000,vetor;
    float numero[MaxNumero],entrada;
    printf("\n=================EXERCICIO8==================\n");
    for(vetor=0;vetor<MaxNumero;vetor++)
    {
        printf("Informe o numero[%d]:",vetor+1);
        scanf("%f", &numero[vetor]);
        if (numero[vetor] == -999) goto fim;
        printf("Triplo do numero[%d]:%.2f\n",vetor+1,numero[vetor]*3);
    }
    fim:;
    printf("\n===============FIM EXERCICIO8================\n");
}

void exercicio9()
{
    int MaxNumero=1000,vetor;
    float numero[MaxNumero],entrada;
    printf("\n=================EXERCICIO9==================\n");

    for(vetor=0;vetor<MaxNumero;vetor++)
    {
        printf("Informe o numero[%d]:",vetor+1);
        scanf("%f", &numero[vetor]);
        if (numero[vetor] == 0) goto fim;
    }
    fim:
    printf("numeros informados de 100-200\n");
    for(int a=0;a<vetor;a++)
        if (numero[a] < 200 && numero[a] > 100)
            printf("numero[%d]:%.2f\n",a+1,numero[a]);

    printf("\n===============FIM EXERCICIO9================\n");
}

void exercicio10()
{
    float Zerg,Splim;
    int anos;
    printf("\n=================EXERCICIO10==================\n");

    for(Zerg=1.50,Splim=1.3,anos=0;Zerg>=Splim;Splim+=0.3,Zerg+=0.2,++anos)
    printf("Altura Zerg:%.2fm \nAltura Splim:%.2fm\n",Zerg,Splim);

    printf("\nForam %d anos para Splim passar Zerg\n",anos+1);
    printf("\n===============FIM EXERCICIO10================\n");
}

void exercicio11()
{
    float numero,raiz;
    printf("\n=================EXERCICIO11==================\n");

    while(1)
    {
    printf("INFORME um numero:");
    scanf("%f", &numero);
    if (numero >= 0) goto fim;
    printf("**NUMERO NEGATIVO**\n");
    }

    fim: raiz = sqrt(numero);
    printf("Raiz quadrada do numero[%.2f]: %f",numero,raiz);
    printf("\n===============FIM EXERCICIO11================\n");
}

void exercicio12()
{
    int MaxNumero=1000,vetor,a;
    int numero[MaxNumero],fatorial=1;
    printf("\n=================EXERCICIO12==================\n");
    for(vetor=0;vetor<MaxNumero;vetor++)
    {
        printf("Informe o numero[%d]:",vetor+1);
        scanf("%d", &numero[vetor]);
        if (numero[vetor] < 1) goto fim;
        for(a = numero[vetor],fatorial = 1;a>1;--a)
            fatorial *= a;
        printf("Fatorial do numero[%d]: %d\n",vetor+1,fatorial);
    }
    fim: printf("\n===============FIM EXERCICIO12================\n");
}

void exercicio13()
{
    float maior,menor,media,soma=0,entrada,quantidade=0,save;
    printf("\n=================EXERCICIO13==================\n");
    while(1)
    {
        quantidade++;
        printf("informe o numero[%.0f]:",quantidade);
        scanf("%f", &entrada);
        if (entrada == 0) goto fim;
        soma += entrada;
        media = soma / quantidade;

        if (quantidade > 1)
        {
            if (maior < entrada)
                maior = entrada;
            if (menor > entrada)
                menor = entrada;
        }
        else if (quantidade == 1)
        {
            maior = entrada;
            menor = entrada;
        }
        save = entrada;
    }
    fim:;
    printf("quanto(s) foram digitado(s) %.0f numero(s)\n",quantidade);
    printf("Soma dos numero(s) %.2f\n",soma);
    printf("Media dos numero(s) %.2f\n",media);
    printf("Maior dos numero(s) %.2f\n",maior);
    printf("Menor dos numero(s) %.2f",menor);
    printf("\n===============FIM EXERCICIO13================\n");
}


int main()
{
    exercicio6();
    exercicio7();
    exercicio8();
    exercicio9();
    exercicio10();
    exercicio11();
    exercicio12();
    exercicio13();
    return EXIT_SUCCESS;
}
