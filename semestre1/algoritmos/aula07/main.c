#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    
    struct variavel{
        int Ninteiro[5];
        float Nreal[5];
        char string[3][20];
    }exercicio1,exercicio2,exercicio3,exercicio4,exercicio5,exercicio6,
    exercicio7,exercicio8,exercicio9,exercicio10,exercicio11,exercicio12,
    exercicio13,exercicio14,exercicio15,exercicio16,exercicio17,exercicio18;
    /*Poderia ser definida as variaveis assim *
     *      struct variavel exercicio1;       */
    
    int exercicio = 0;
    int a=0,b=0;
    int maior, intermediario , menor;
    int validar,media;
    int campeonato[100][4];
    float mediapontos[100];
    int equipe,MAXequipes,atleta,pontos[100],x,y,aux;
    
    while(1){
        printf("\n\ninforme o exercicio a ser executado:");
        scanf("%d",&exercicio);
        printf("EXERCICIO(%d)\n",exercicio);
        switch (exercicio)
        {
            case 1:
                printf("informe um numero:");
                scanf("%f", &exercicio1.Nreal[0]);
                
                if(exercicio1.Nreal[0] > 20)
                printf("A metade desse numero eh: %.2f \n",exercicio1.Nreal[0]/2);
                else printf("Seu numero eh menor que 20\n");
            break;

            case 2:
                printf("informe um numero:");
                scanf("%f", &exercicio2.Nreal[0]);
                
                if (exercicio2.Nreal[0] > 0)
                printf("Esse numero eh positivo\n");
                else if (exercicio2.Nreal[0] < 0)
                printf("Esse numero eh negativo\n");
                else printf("Esse numero eh nulo\n");
            break;

            case 3:
                printf("informe um numero:");
                scanf("%d", &exercicio3.Ninteiro[0]);
                exercicio3.Nreal[0] = exercicio3.Ninteiro[0] % 3;
                if (exercicio3.Nreal[0] == 0)
                printf("Esse numero eh divisivel por 3\n");
                else printf("Esse numero não eh divisivel por 3\n");
            break;

            case 4:
                printf("informe o salario bruto:");
                scanf("%f", &exercicio4.Nreal[0]);
                printf("informe a pretacao:");
                scanf("%f", &exercicio4.Nreal[1]);
                exercicio4.Nreal[0] = exercicio4.Nreal[0]*.3;

                if(exercicio4.Nreal[0] >= exercicio4.Nreal[1])
                printf("Prestação não passa os 30%% do salario: CORRETA\n");
                else printf("Prestação passa os 30%% do salario: ERRADA \n");
            break;

            case 5:
                printf("informe um numero com 3 digitos:");
                scanf("%d", &exercicio5.Ninteiro[0]);
                exercicio5.Ninteiro[1] = (exercicio5.Ninteiro[0] / 100) % 2;

                exercicio5.Ninteiro[2] = 0;
                for(int cont=1;cont <= exercicio5.Ninteiro[0];cont=cont*10)
                    exercicio5.Ninteiro[2]++;

                if(exercicio5.Ninteiro[2]==3){
                    if (exercicio5.Ninteiro[1] == 1)
                        printf("O Numero das centenas eh impar\n");
                    else printf("O Numero das centenas eh par\n");
                }
                else printf("numero não tem 3 digitos \n");
            break;

            case 6:
                printf("informe um numero:");
                scanf("%d", &exercicio6.Ninteiro[0]);

                if (exercicio6.Ninteiro[0] > 20)
                    printf("Esse numero eh maior que 20\n");
                else if (exercicio6.Ninteiro[0] < 20)
                    printf("Esse numero eh menor que 20\n");
                else printf("Esse numero eh igual a 20\n");
            break;

            case 7:
                printf("informe um numero:");
                scanf("%d", &exercicio7.Ninteiro[0]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio7.Ninteiro[1]);

                if (exercicio7.Ninteiro[0] == exercicio7.Ninteiro[1])
                    printf("Esses numeros sao iguais \n");
                else  printf("Esses numeros sao diferentes \n");
            break;
            
            case 8:
                printf("informe um numero:");
                scanf("%d", &exercicio8.Ninteiro[0]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio8.Ninteiro[1]);
                
                if (exercicio8.Ninteiro[0] > exercicio8.Ninteiro[1])
                    printf("O numero %d eh o maior\n",exercicio8.Ninteiro[0]);
                else if (exercicio8.Ninteiro[0] < exercicio8.Ninteiro[1])
                    printf("O numero %d eh o maior\n",exercicio8.Ninteiro[1]);
                else printf("Esses numeros sao iguais\n");
            break;

            case 9:
                printf("informe um numero:");
                scanf("%d", &exercicio9.Ninteiro[0]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio9.Ninteiro[1]);
                if (exercicio9.Ninteiro[0] > exercicio9.Ninteiro[1])
                    printf("Ordem decrescente: %d, %d\n",exercicio9.Ninteiro[0],exercicio9.Ninteiro[1]);
                else if (exercicio9.Ninteiro[0] > exercicio9.Ninteiro[1])
                    printf("Ordem decrescente: %d, %d\n",exercicio9.Ninteiro[1],exercicio9.Ninteiro[0]);
                else printf("Ordem decrescente: %d, %d\n",exercicio9.Ninteiro[1],exercicio9.Ninteiro[0]);
            break;

            case 10:
                printf("informe um numero:");
                scanf("%d", &exercicio10.Ninteiro[1]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio10.Ninteiro[2]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio10.Ninteiro[3]);

                if (exercicio10.Ninteiro[1]>exercicio10.Ninteiro[2]&&exercicio10.Ninteiro[1]>exercicio10.Ninteiro[3])
                    printf("O numero %d eh o maior\n",exercicio10.Ninteiro[1]);
                else if (exercicio10.Ninteiro[2]>exercicio10.Ninteiro[1]&&exercicio10.Ninteiro[2]>exercicio10.Ninteiro[3])
                    printf("O numero %d eh o maior\n",exercicio10.Ninteiro[2]);
                else if (exercicio10.Ninteiro[3]>(exercicio10.Ninteiro[2]&&exercicio10.Ninteiro[3]>exercicio10.Ninteiro[1]))
                    printf("O numero %d eh o maior\n",exercicio10.Ninteiro[3]);
                else printf("Não tem um numero maior que os outros\n");
            break;
            
            case 11:
                printf("informe um numero:");
                scanf("%d", &exercicio11.Ninteiro[1]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio11.Ninteiro[2]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio11.Ninteiro[3]);
                printf("Ordem crescente\n");
                
                a=exercicio11.Ninteiro[1];
                if (a>exercicio11.Ninteiro[2])
                    a=exercicio11.Ninteiro[2];
                if (a>exercicio11.Ninteiro[3])
                    a=exercicio11.Ninteiro[3];

                for(a; b<3; a++){
                    if (a==exercicio11.Ninteiro[1])
                        {printf ("%d\n",exercicio11.Ninteiro[1]);b++;}
                    if (a==exercicio11.Ninteiro[2])
                        {printf ("%d\n",exercicio11.Ninteiro[2]);b++;}
                    if (a==exercicio11.Ninteiro[3])
                        {printf ("%d\n",exercicio11.Ninteiro[3]);b++;}
                }
            break;
            
            case 12:
                printf("informe um numero:");
                scanf("%d", &exercicio12.Ninteiro[1]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio12.Ninteiro[2]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio12.Ninteiro[3]);
                printf("Ordem crescente\n");
                
                a=exercicio12.Ninteiro[1];
                if (a>exercicio12.Ninteiro[2])
                    a=exercicio12.Ninteiro[2];
                if (a>exercicio12.Ninteiro[3])
                    a=exercicio12.Ninteiro[3];
                menor = a;
                
                maior=exercicio12.Ninteiro[1];
                if (maior<exercicio12.Ninteiro[2])
                    maior=exercicio12.Ninteiro[2];
                if (maior<exercicio12.Ninteiro[3])
                    maior=exercicio12.Ninteiro[3];
                
                intermediario = exercicio12.Ninteiro[1]+exercicio12.Ninteiro[2]+exercicio12.Ninteiro[3]-menor-maior;


                printf("maior:%d\n",maior);
                printf("intermediario:%d\n",intermediario);
                printf("menor:%d\n",menor);
            break;

            case 13:
                printf("informe um numero:");
                scanf("%d", &exercicio13.Ninteiro[1]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio13.Ninteiro[2]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio13.Ninteiro[3]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio13.Ninteiro[4]);
                printf("informe mais um numero:");
                scanf("%d", &exercicio13.Ninteiro[5]);
                
                menor=exercicio13.Ninteiro[1];
                if (menor>exercicio13.Ninteiro[2])
                    menor=exercicio13.Ninteiro[2];
                if (menor>exercicio13.Ninteiro[3])
                    menor=exercicio13.Ninteiro[3];
                if (menor>exercicio13.Ninteiro[4])
                    menor=exercicio13.Ninteiro[4];
                if (menor>exercicio13.Ninteiro[5])
                    menor=exercicio13.Ninteiro[5];
                
                maior=exercicio13.Ninteiro[1];
                if (maior<exercicio13.Ninteiro[2])
                    maior=exercicio13.Ninteiro[2];
                if (maior<exercicio13.Ninteiro[3])
                    maior=exercicio13.Ninteiro[3];
                if (maior<exercicio13.Ninteiro[4])
                    maior=exercicio13.Ninteiro[4];
                if (maior<exercicio13.Ninteiro[5])
                    maior=exercicio13.Ninteiro[5];

                printf("maior:%d\n",maior);
                printf("menor:%d\n",menor);
            break;

            case 14:
                //dps da uma ajuda nessa dos triangulos 
                validar=0;
                printf("informe um lado do triango:");
                scanf("%d", &exercicio14.Ninteiro[1]);
                printf("informe mais um lado do triango:");
                scanf("%d", &exercicio14.Ninteiro[2]);
                printf("informe mais um lado do triango:");
                scanf("%d", &exercicio14.Ninteiro[3]);

                if (exercicio14.Ninteiro[1] < (exercicio14.Ninteiro[2] + exercicio14.Ninteiro[3]))
                validar++;
                if (exercicio14.Ninteiro[2] < (exercicio14.Ninteiro[1] + exercicio14.Ninteiro[3]))
                validar++;
                if (exercicio14.Ninteiro[3] < (exercicio14.Ninteiro[1] + exercicio14.Ninteiro[2]))
                validar++;
                if (validar == 1)
                    printf("Triangulo VALIDO\n");
                else printf("Triangulo INVALIDO\n");
            break;

            case 15:
                printf("informe uma nota:");
                scanf("%d", &exercicio15.Ninteiro[1]);
                printf("informe mais uma nota:");
                scanf("%d", &exercicio15.Ninteiro[2]);
                printf("informe mais uma nota:");
                scanf("%d", &exercicio15.Ninteiro[3]);

                media = (exercicio15.Ninteiro[1]+exercicio15.Ninteiro[2]+exercicio15.Ninteiro[3])/3;
                
                printf("MEDIA = %d, aluno ", media);
                if (media>6)
                printf("aprovado\n");
                else printf("reprovado\n");
            break;
        
            case 16:
                printf("informe sua idade:");
                scanf("%d", &exercicio16.Ninteiro[1]);
                printf("De acordo com a idade sua modalidade na natacao eh:\n");

                if(exercicio16.Ninteiro[1]>4 && exercicio16.Ninteiro[1]<8)
                printf("Infantil A\n");
                if(exercicio16.Ninteiro[1]>7 && exercicio16.Ninteiro[1]<11)
                printf("Infantil B\n");
                if(exercicio16.Ninteiro[1]>10 && exercicio16.Ninteiro[1]<14)
                printf("Juvenil A\n");
                if(exercicio16.Ninteiro[1]>14 && exercicio16.Ninteiro[1]<18)
                printf("Juvenil B\n");
                if(exercicio16.Ninteiro[1]> 18)
                printf("Sênior\n");
            break;

            case 17:
                printf("Equacao do segundo grau:a²-b*c=0\n");
                printf("informe o valor de b:");
                scanf("%f", &exercicio17.Nreal[2]);
                printf("informe o valor de c:");
                scanf("%f", &exercicio17.Nreal[3]);

                exercicio17.Nreal[1] = sqrt(exercicio17.Nreal[2]*exercicio17.Nreal[3]);
                
                printf("Valor de \"a\" eh: %.2f\n",exercicio17.Nreal[1]);
            break;

            case 18:
                printf("informe quantas equipes vao participar:");
                scanf("%d", &MAXequipes);
            /*==================Catalogar os pontos do campeonato========================*/
                for(equipe=1;equipe<=MAXequipes;equipe++){
                    pontos[equipe] = 0;
                    printf("\n Equipe(%d)\n",equipe);
                    
                    for(atleta=1;atleta<=3;atleta++){
                        printf("atleta(%d):",atleta);
                        scanf("%d", &campeonato[equipe][atleta]);
                        pontos[equipe] = pontos[equipe] + campeonato[equipe][atleta];
                    }
                    mediapontos[equipe] = pontos[equipe]/(atleta-1);
                }
            /*===============Fim do Catalogo de pontos do campeonato=====================*/
            /*==============Organização dos numeroe ordem decrescente====================*/
                for(equipe=1;equipe<=MAXequipes;equipe++){

                    for(x=0;x<=3;x++){
                        for(atleta=1;atleta<=3;atleta++){
                            if (campeonato[equipe][atleta] < campeonato[equipe][atleta+1]){
                                if(atleta>2) break;
                                aux = campeonato[equipe][atleta];
                                campeonato[equipe][atleta] = campeonato[equipe][atleta+1];
                                campeonato[equipe][atleta+1] = aux;
                            }
                        }
                    }
                }
            /*==========================fim da organização===============================*/
            /*=======================Catalo dos classificados ============================*/
                for(equipe=1;equipe<=MAXequipes;equipe++){
                    printf("\n Equipe(%d)\n",equipe);
                    printf("Pontos:");
                    
                    for(atleta=3;atleta>=1;atleta--){
                        printf("%d",campeonato[equipe][atleta]);
                        if(atleta>1) printf(", ");
                    }
                    printf(".\n");
                    if(mediapontos[equipe]>100)
                        printf("Media dos Pontos: %.0f.\n",mediapontos[equipe]);
                    else printf("Desclassificada.\n");
                

                }
            /*==========================FIM dos classificados ============================*/     
            printf("\n");   
            break;
        }
    }

    return 0;
}