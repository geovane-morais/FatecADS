#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    struct Variaveis 
    {
        float Massa;
        int Idade;
        char DocumentoAutorizacao;
        char Gripe;
        char ViagemExterior;
        char ContatoCOVID;
        char PrimeiraDoacao;
        int MesesUltimaDoacao;
        char SexoBiologico;
        char GravidaAmamentando;
        char DoadorAntes;
        int MaximoDoacao;
        float Intervalo;
    }   Doador;
    char impedimento[999] = "";

    printf("Informe sua massa:");
    scanf("%f", &Doador.Massa);
    if (Doador.Massa<50)
    strcat(impedimento,"Impedimento: abaixo da massa corporal mínima\n");

    printf("Informe sua idade:");
    scanf("%d", &Doador.Idade);
    if(Doador.Idade<16)
    strcat(impedimento,"Impedimento: menor de 16 anos\n");
    else if (Doador.Idade<18)
    {
        printf("Tem o consentimento formal dos responsaveis:");
        scanf(" %c", &Doador.DocumentoAutorizacao);
        if (Doador.DocumentoAutorizacao == 'n')
            strcat(impedimento,"Impedimento: menor de 18 anos sem consentimento dos responsáveis\n");     
    }
    else if (Doador.Idade>69)
    strcat(impedimento,"Impedimento: maior de 69 anos\n");
    else if (Doador.Idade>60)
    {
        printf("Ja doou sangue antes:");
        scanf(" %c", &Doador.DoadorAntes);
        if (Doador.DoadorAntes == 'n')
            strcat(impedimento,"Impedimento: maior de 60 anos e primeira doação\n");
    }


    printf("Teve febre ou sintomas gripais nos ultimos 14 dias:");
    scanf(" %c", &Doador.Gripe);
    if (Doador.Gripe == 's')
    strcat(impedimento,"Impedimento: febre ou sintomas gripais\n");

    printf("Viajou ao exterior nos ultimos 30 dias:");
    scanf(" %c", &Doador.ViagemExterior);
    if (Doador.ViagemExterior == 's')
    strcat(impedimento,"Impedimento: viagem recente ao exterior\n");

    printf("Teve contato com caso suspeito ou confirmado de COVID-19 nos ultimos 30 dias:");
    scanf(" %c", &Doador.ContatoCOVID);
    if (Doador.ContatoCOVID ==  's')
    strcat(impedimento,"Impedimento: contato com caso de COVID-19\n");


    printf("Informe o sexo biologico:");
    scanf(" %c", &Doador.SexoBiologico);
    if (Doador.SexoBiologico == 'm')
    {
        printf("Quantas doacoes foram feitas esse ano:");
        scanf(" %d", &Doador.MaximoDoacao);
        if (Doador.MaximoDoacao>3)
         strcat(impedimento,"Impedimento: numero máximo de doações anuais foi atingido\n");
        printf("Quanto tempo desde a ultima doação em meses:");
        scanf(" %f", &Doador.Intervalo);
        if (Doador.Intervalo<=2)
        strcat(impedimento,"Impedimento: intervalo mínimo entre as doações não foi respeitado\n");
    }
    if (Doador.SexoBiologico == 'f')
    {
        printf("Quantas doacoes foram feitas esse ano:");
        scanf(" %d", &Doador.MaximoDoacao);
        if (Doador.MaximoDoacao>2)
         strcat(impedimento,"Impedimento: numero máximo de doações anuais foi atingido\n");
        printf("Quanto tempo desde a ultima doação em meses:");
        scanf(" %f", &Doador.Intervalo);
        if (Doador.Intervalo<=3)
        strcat(impedimento,"Impedimento: intervalo mínimo entre as doações não foi respeitado\n");
        printf("Está gravida ou amamentando bebe menor de 12 meses:");
        scanf(" %c", &Doador.GravidaAmamentando);
        if (Doador.GravidaAmamentando == 's')
        strcat(impedimento,"Impedimento: gravida ou amamentando\n");
    }
    
    printf("\nMENSAGEM DE IMPEDIMENTO:\n");
    printf("%s\n",impedimento);
}
