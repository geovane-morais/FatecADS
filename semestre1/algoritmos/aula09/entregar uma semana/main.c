#include <stdio.h>
#include <stdlib.h>


void exercicio1()
{
    int a=0;
    float *v,media=0;
    printf("\n======================================================\n");
    printf("OBS:unidade de medida utilizada em todo programa (Kg)");
    printf("\n------------------------------------------------------\n");
    printf("Informe o numero de pessoas que serão intrevistadas:");
    scanf("%d", &a);

    v = (float*) (malloc(a * sizeof(float)));
    for (int b=0;b<a;++b)
    {
        printf("Informe a massa do intrevistado(%d):",(b+1));
        scanf("%f",&v[a]);
        media += v[a];
    }
    media = media / a;
    printf("media da massa dos intrevistados:%.2f",media);
    printf("\n======================================================\n");
    
    free(v); //LIMPANDO
    v = NULL;//MEMORIA 
}

void exercicio2()
{
    int a;
    printf("\n======================================================\n");
    printf("Informe um numero:");
    scanf("%d", &a);
    printf("Numeros impares de %d ate 0\n",a);
    if (a > 0) 
    {
        a = a%2==0 ?  a-1 : a;
        for (a;a>0;a-=2)
        printf("%d ",a);
    }
    else 
    {
        a = a%2==0 ?  a+1 : a;
        for (a;a<0;a+=2)
        printf("%d ",a);
    }
    printf("\n======================================================\n");
}

void exercicio3()
{
    float input;
    int notas50=0,notas10=0,total;
    printf("\n======================================================\n");
    printf("OBS:todos os valores são em REAIS(R$) e\n");
    printf("a maquina so retorna notas de R$50 e R$10");
    printf("\n------------------------------------------------------\n");
    printf("Informe a quantidade de dinheiro a ser sacado:");
    scanf("%f", &input);
    
    notas50 = (int) input/50;
    notas10 = (int) (input - notas50*50)/10;
    total = notas50 * 50 + notas10 * 10;

    if (total == input) 
    {
    printf("nota(s) de 50:%d \n",notas50);
    printf("nota(s) de 10:%d \n",notas10);
    }
    else 
    printf("ERRO VALOR INVALIDO");
    printf("\n======================================================\n");
}

void exercicio4()
{
    int a,primo,soma=0;
    printf("\n======================================================\n");
    
    for (a=92;a<1478;a++)
    {
        primo = 0;
        for(int b=1;a>=b;b++)
            if (a%b == 0)
                primo++;

        if (primo == 2)
            soma +=a;
    }
    printf("Soma dos primos:%d ",soma);
    printf("\n======================================================\n");
}

int main()
{
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    
    return 0;
}