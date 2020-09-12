#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ex1(){
    float a,b;
    printf("\n******** Exercicio 1 ********\n");
    printf("informe dois numeros:");
    scanf("%f", &a);
    scanf("%f", &b);
    if (a>b) printf("O primeiro numero é maior");
    printf("\n****** FIM Exercicio 1 ******\n");
}

void ex2(){
    float a,b;
    printf("\n******** Exercicio 2 ********\n");
    printf("informe dois numeros:");
    scanf("%f", &a);
    scanf("%f", &b);
    if (a>b) printf("O primeiro numero é maior");
    else if (a<b) printf("O primeiro numero é menor");
    printf("\n****** FIM Exercicio 2 ******\n");
}

void ex3(){
    double x, y;
    printf("\n******** Exercicio 3 ********\n");
    printf("Digite as coordenadas de X e Y:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    if (x > 0 && y > 0)
    printf("Este ponto esta no primeiro quadrante\n\n");
    else if (x < 0 && y > 0)
    printf("Este ponto esta no segundo quadrante\n\n");
    else if (x < 0 && y < 0)
    printf("Este ponto esta no terceiro quadrante\n\n");
    else if (x > 0 && y < 0)
    printf("Este ponto esta no quarto quadrante\n\n");
    if (x == 0)
    printf("O ponto esta em cima do eixo X\n\n");
    if (y == 0)
    printf("O ponto esta em cima do eixo Y\n\n");
    printf("****** FIM Exercicio 3 ******\n");
}

void ex4(){
    float salario;
    char cargo;
    printf("\n******** Exercicio 4 ********\n");
    printf("Informe o salario:");
    scanf("%f", &salario);
    printf("t - tecnico, g - gerente, o - outro cargo\n");
    scanf("%s", &cargo);
    if (cargo == 't')
        printf("O salario reajustado eh de %0.2f\n\n", salario + salario/2);
    if (cargo == 'g')
        printf("O salario reajustado eh de %0.2f\n\n", salario + (salario/100 * 30));
    if (cargo == 'o')
        printf("O salario reajustado eh de %0.2f\n\n", salario + salario/5);
    printf("****** FIM Exercicio 4 ******\n");
}

void ex5(){
    float resultado, Resultado, A, B, C;
    printf("\n******** Exercicio 5 ********\n");
    printf("Informe o valor de A, B e C:\n");
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    resultado = 3*(A+B)/(A*C)+B-C;
    Resultado = A*B*C;
    if (resultado > Resultado)
    printf("%0.2f eh maior que %0.2f\n\n", resultado, Resultado);
    else
    printf("%0.2f nao eh maior que %0.2f\n\n", resultado, Resultado);
    printf("****** FIM Exercicio 5 ******\n");
}

void ex6(){
    float bruto, minimo, contribuicao;
    printf("\n******** Exercicio 6 ********\n");
    printf("Informe o salario bruto e do salario minimo\n");
    scanf("%f", &bruto);
    scanf("%f", &minimo);
    contribuicao = bruto/100 * 8;
    if (bruto <= 3*minimo)
    printf("A contibuicao eh de %0.2f Reais e o salario liquido restante eh de %0.2f Reias\n\n", contribuicao, bruto - contribuicao);
    else printf("Não precisa de contribuicao\n\n");
    printf("****** FIM Exercicio 6 ******\n");
}

void ex7(){
    float salario;
    printf("\n******** Exercicio 7 ********\n");
    printf("Informe o salario liquido:\n");
    scanf("%f", &salario);
    if (salario < 900)
        printf("Nao ha desconto\n");
    else if (salario > 900 && salario < 1800)
        printf("O desconto eh de 135 Reais\n\n");
    else if (salario > 1800)
        printf("O desconto eh de 360 Reais\n\n");
    printf("****** FIM Exercicio 7 ******\n");
}

void ex8(){
    float P1, P2, P3, P4, T1, T2, T3, T4, MF;
    printf("\n******** Exercicio 8 ********\n");
    printf("Informe as notas das quatro provas:\n");
    scanf ("%f", &P1);
    scanf ("%f", &P2);
    scanf ("%f", &P3);
    scanf ("%f", &P4);
    printf("Informe as notas dos quatro trabalhos:\n");
    scanf ("%f", &T1);
    scanf ("%f", &T2);
    scanf ("%f", &T3);
    scanf ("%f", &T4);
    MF = (8*(P1+P2+P3+P4) + 2*(T1+T2+T3+T4))/40;
    if (MF >= 6) printf("Aprovado\n\n");
    else printf("Reprovado\n\n");
    printf("****** FIM Exercicio 8 ******\n");
}

void ex9(){
    int lado1, lado2, lado3;
    printf("\n******** Exercicio 9 ********\n");
    printf("Informe o valor dos lados:\n");
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);
    if (lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2)
        printf("Pode formar um triangulo\n\n");
    else printf("Nao pode formar um triangulo\n\n");
    printf("****** FIM Exercicio 9 ******\n");
}

void ex10(){
    float salario, reajuste;
    printf("\n******** Exercicio 10 ********\n");
    printf("Informe o salario:");
    scanf("%f", &salario);
    if (salario < 500) reajuste = salario/100*15;
    if (salario >= 500 && salario <= 1000) reajuste = salario/100*10;
    if (salario > 1000) reajuste = salario/100*5;
    printf("O reajuste do salario sera de R$ %0.2f\n\n", reajuste);
    printf("****** FIM Exercicio 10 ******\n");
}

void ex11(){
    float numero;
    printf("\n******** Exercicio 11 ********\n");
    printf("Informe um valor: \n");
    scanf("%f", &numero);
    if (numero < 100 || numero > 1000 )
        printf("Nao esta entre 100 e 1000\n\n");
    else    printf("Esta entre 100 e 1000\n\n");
    printf("****** FIM Exercicio 11 ******\n");
}

void ex12(){
    char sexo[12];
    printf("\n******** Exercicio 12 ********\n");
    printf("Informe um sexo:");
    scanf("%s", sexo);
    if (!strcmp(sexo,"masculino") || !strcmp(sexo,"feminino"))
        printf("O sexo eh valido");
    else    printf("O sexo nao eh valido");
    printf("\n****** FIM Exercicio 12 ******\n");
}

void ex13(){
    float A, B, C;
    printf("\n******** Exercicio 13 ********\n");
    printf("Informe o valor dos Lado1, Lado2 e Lado3:\n");
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if (A<B+C && B<A+C && C<A+B){
        if (A == B && B == C && C == A)
            printf("Triangulo Equilatero\n\n");
        else if (A != B && B != C && C != A)
            printf("Triangulo Escaleno\n\n");
        else   printf("Triangulo Isoceles\n\n");
        printf("Pode formar um triangulo\n\n");
    }
    else    printf("Nao pode formar um triangulo\n\n");
    printf("****** FIM Exercicio 13 ******\n");
}

void ex14(){
    float numero;
    printf("\n******** Exercicio 14 ********\n");
    printf("Informe um numero: ");
    scanf("%f", &numero);
    if (numero > 30)   printf("%f\n\n", numero/2);
    else   printf("%f\n\n", numero*2);
    printf("****** FIM Exercicio 14 ******\n");
}

void ex15(){
    float numero;
    printf("\n******** Exercicio 15 ********\n");
    printf("Informe um numero: \n");
    scanf("%f", &numero);
    if (numero > 0)    printf("%f\n\n", 1/numero);
    else   printf("%f\n\n", numero*(-1));
    printf("****** FIM Exercicio 15 ******\n");
}

void ex16(){
    int numero;
    printf("\n******** Exercicio 16 ********\n");
    printf("Informe um numero: \n");
    scanf("%d", &numero);
    if (numero % 2 == 0)   printf("O numero eh par\n\n");
    else    printf("O numero eh impar\n\n");
    printf("****** FIM Exercicio 16 ******\n");
}

void ex17(){
    float numero;
    printf("\n******** Exercicio 17 ********\n");
    printf("Informe um numero: \n");
    scanf("%f", &numero);
    if (numero < numero*numero/numero*2)
        printf("SIM\n\n");
    else   printf("NAO\n\n");
    printf("****** FIM Exercicio 17 ******\n");
}

void ex18(){
    float N1, N2, N3, media;
    printf("\n******** Exercicio 18 ********\n");
    printf("Informe as 3 notas:\n");
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3);
    media = (N1+N2+N3)/3;
    if (media >= 7)
        printf("APROVADO\n\n");
    else if (media < 3)
        printf("REPROVADO\n\n");
    else    printf("PROVA FINAL\n\n");
    printf("****** FIM Exercicio 18 ******\n");
}

void ex19(){
    float A, B, Produto;
    printf("\n******** Exercicio 19 ********\n");
    printf("Informe o valor de A e B\n");
    scanf("%f", &A);
    scanf("%f", &B);
    Produto = A*B;
    if (Produto >= 20)  A = B;
    else   B = A;
    printf("%.2f x %.2f = %.2f\n\n", A, B, Produto);
    printf("****** FIM Exercicio 19 ******\n");
}

void ex20(){
    float A, B;
    printf("\n******** Exercicio 20 ********\n");
    printf("Informe dois numeros:\n");
    scanf("%f", &A);
    scanf("%f", &B);
    printf("Soma: %0.2f\n", A+B);
    printf("Subtracao: %0.2f\n", A-B);
    printf("Multiplicacao: %0.2f\n", A*B);
    printf("Divisao: %0.2f\n", A/B);
    printf("****** FIM Exercicio 20 ******\n");
}

void ex21(){
    int num1, num2, num3;
    printf("\n******** Exercicio 21 ********\n");
    printf("Informe tres numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1+num2+num3 > 50)
        printf("A soma dos numeros eh maior que 50\n\n");
    else    printf("A soma dos numeros não eh maior que 50\n\n");
    printf("****** FIM Exercicio 21 ******\n");
}

void ex22(){
    int A, B, C;
    printf("\n******** Exercicio 22 ********\n");
    printf("Informe o valor de A, B e C:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if (A+B > C)    printf("A + B eh maior que C\n\n");
    if (A+B < C)   printf("A + B eh menor que C\n\n");
    if (A+B == C)  printf("A + B eh igual a C\n\n");
    printf("****** FIM Exercicio 22 ******\n");
}

void ex23(){
    float A, B, C;
    printf("\n******** Exercicio 23 ********\n");
    printf("Informe o valor de A, B:\n");
    scanf("%f", &A);
    scanf("%f", &B);
    if (A == B) C = A+B;
    else   C = A*B;
    printf("A: %.2f, B: %.2f, C: %.2f\n\n", A, B, C);
    printf("****** FIM Exercicio 23 ******\n");
}

void ex24(){
    float numero;
    printf("\n******** Exercicio 24 ********\n");
    printf("Informe um numero:");
    scanf("%f", &numero);
    if (numero > 20)    printf("%0.2f\n\n", numero/2);
    printf("****** FIM Exercicio 24 ******\n");
}

void ex25(){
    float numero[3], maior;
    printf("\n******** Exercicio 25 ********\n");
    printf("Informe tres numeros:\n");
    for (int x=0;x<=2;x++) scanf("%f", &numero[x]);
    maior = numero[0];
    for (int y=1;y<=2;y++){
        if (maior < numero[y])  maior = numero[y];
    }
    printf("O maior eh %.2f\n\n", maior);
    printf("****** FIM Exercicio 25 ******\n");
}

void ex26(){
    float numero;
    printf("\n******** Exercicio 26 ********\n");
    printf("Informe um numero:");
    scanf("%f", &numero);
    if (numero > 0)  printf("POSITIVO\n\n");
    else if (numero < 0)  printf("NEGATIVO\n\n");
    else  printf("NULO\n\n");
    printf("****** FIM Exercicio 26 ******\n");
}

void ex27(){
    float numero;
    printf("\n******** Exercicio 27 ********\n");
    printf("Informe um numero:");
    scanf("%f", &numero);
    if (numero > 20)  printf("%.2f\n\n", numero);
    printf("****** FIM Exercicio 27 ******\n");
}

void ex28(){
    float num, num1;
    printf("\n******** Exercicio 28 ********\n");
    printf("Informe dois valores:\n");
    scanf("%f", &num);
    scanf("%f", &num1);
    if (num+num1 > 10) printf("%.2f\n\n", num + num1);
    printf("****** FIM Exercicio 28 ******\n");
}

void ex29(){
    float n, n1, soma;
    printf("\n******** Exercicio 29 ********\n");
    printf("Informe dois valores:\n");
    scanf("%f", &n);
    scanf("%f", &n1);
    soma = n+n1;
    if (soma > 20)  printf("%.2f\n\n", soma+8);
    else    printf("%.2f\n\n", soma-5);
    printf("****** FIM Exercicio 29 ******\n");
}

void ex30(){
    float n;
    printf("\n******** Exercicio 30 ********\n");
    printf("Informe um valor:");
    scanf("%f", &n);
    if (n >= 0)   printf("%f\n\n", sqrt(n));
    else    printf("%f\n\n", n*n);
    printf("****** FIM Exercicio 30 ******\n");
}

void ex31(){
    int n;
    printf("\n******** Exercicio 31 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    if (n % 3 == 0)   printf("Eh multiplo de 3\n\n");
    else    printf("Nao eh multiplo de 3\n\n");
    printf("****** FIM Exercicio 31 ******\n");
}

void ex32(){
    int n;
    printf("\n******** Exercicio 32 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    if (n % 5 == 0)   printf("Eh divisivel por 5\n\n");
    else   printf("Nao eh divisivel por 5\n\n");
    printf("****** FIM Exercicio 32 ******\n");
}

void ex33(){
    int n;
    printf("\n******** Exercicio 33 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    if (n % 3 == 0)   printf("Eh divisivel por 3\n");
    else if (n % 4 == 0)   printf("Eh divisivel por 4\n\n");
    else if (n % 3 != 0 || n % 4 != 0)  printf("Nao eh divisivel por 3 ou 4\n");
    printf("****** FIM Exercicio 33 ******\n");
}

void ex34(){
    int n;
    printf("\n******** Exercicio 34 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    if (n % 2 == 0)   printf("Eh divisivel por 2\n");
    else    printf("Nao eh divisivel por 2\n");
    if (n % 5 == 0)   printf("Eh divisivel por 5\n");
    else   printf("Nao eh divisivel por 5\n");
    if (n % 10 == 0)  printf("Eh divisivel por 10\n\n");
    else    printf("Nao eh divisivel por 10\n\n");
    printf("****** FIM Exercicio 34 ******\n");
}

void ex35(){
    float salario, parcela;
    printf("\n******** Exercicio 35 ********\n");
    printf("Informe o salario:");
    scanf("%f", &salario);
    printf("Digite a parcela:");
    scanf("%f", &parcela);
    if (parcela > salario/100*30)   printf("Nao eh possivel\n\n");
    else   printf("Eh possivel\n\n");
    printf("****** FIM Exercicio 35 ******\n");
}

void ex36(){
    int n;
    printf("\n******** Exercicio 36 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    n = n<0 ? n*-1 : n;
    if (n < 100 && n > 0) printf("Não tem casa das centenas\n\n"); 
    else if ((n/100) % 2 == 0) printf("A casa das centenas eh par\n\n");
    else if ((n/100) % 2 == 1)  printf("A casa das centenas eh impar\n\n");
    printf("****** FIM Exercicio 36 ******\n");
}

void ex37(){
    int n;
    printf("\n******** Exercicio 37 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    if ((n/100) % 4 == 0) printf("Eh multiplo de 4\n\n");
    else   printf("Nao eh multiplo de 4\n\n");
    printf("****** FIM Exercicio 37 ******\n");
}

void ex38(){
    int n;
    printf("\n******** Exercicio 38 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    if (n >= 20 && n <= 90) printf("O numero esta entre 20 e 90\n\n");
    else   printf("O numero nao esta entre 20 e 90\n\n");
    printf("****** FIM Exercicio 38 ******\n");
}

void ex39(){
    int n;
    printf("\n******** Exercicio 39 ********\n");
    printf("Informe um valor:");
    scanf("%d", &n);
    if (n > 20)   printf("Maior que 20\n\n");
    else if (n < 20)  printf("Menor que 20\n\n");
    else   printf("Igual a 20\n\n");
    printf("****** FIM Exercicio 39 ******\n");
}

void ex40(){
    int anon, ano;
    printf("\n******** Exercicio 40s ********\n");
    printf("Informe o ano de nascimento:\n");
    scanf("%d", &anon);
    printf("Informe o ano atual:\n");
    scanf("%d", &ano);
    if (anon <= 0 || ano <=0)   printf("Ano invalido\n\n");
    else   printf("A idade eh %d anos\n\n", ano-anon);
    printf("****** FIM Exercicio 40 ******\n");
}

void ex41(){
    char nome[20];
    char sexo;
    int idade;
    printf("\n******** Exercicio 41 ********\n");
    printf("41. Digite seu nome:");
    scanf("%s", nome);
    printf("Digite seu sexo (m/f)");
    scanf("%s", &sexo);
    printf("Digite sua idade:");
    scanf("%d", &idade);
    if (sexo == 'f' && idade < 25)  printf("%s ACEITA\n\n", nome);
    else   printf("%s NAO ACEITA\n\n", nome);
    printf("****** FIM Exercicio 41 ******\n");
}

void ex42(){
    char sigla[4];
    printf("\n******** Exercicio 42 ********\n");
    printf("Informe a sigla do seu estado");
    scanf("%s",sigla);
    if (!strcmp(sigla,"RJ"))    printf("Carioca\n\n");
    else if (!strcmp(sigla,"SP"))   printf("Paulista\n\n");
    else if (!strcmp(sigla,"MG"))  printf("Mineiro\n\n");
    else    printf("Outros Estados\n\n");
    printf("****** FIM Exercicio 42 ******\n");
}

void ex43(){
    int num, num1;
    printf("\n******** Exercicio 43 ********\n");
    printf("Informe Digite dois numero:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    if (num == num1)    printf("Sao iguais\n\n");
    else   printf("Sao diferentes\n\n");
    printf("****** FIM Exercicio 43 ******\n");
}

void ex44(){
    int num, num1;
    printf("\n******** Exercicio 44 ********\n");
    printf("Informe dois numero:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    if (num > num1) printf("%d\n\n", num);
    else   printf("%d\n\n", num1);
    printf("****** FIM Exercicio 44 ******\n");
}

void ex45(){
    int num, num1;
    printf("\n******** Exercicio 45 ********\n");
    printf("Informe dois numero:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    if (num < num1) printf("%d\n\n", num);
    else   printf("%d\n\n", num1);
    printf("****** FIM Exercicio 45 ******\n");
}
void ex46(){
    int num, num1;
    printf("\n******** Exercicio 46 ********\n");
    printf("Informe dois numero:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    if (num < num1) printf("%d %d\n\n", num, num1);
    else   printf("%d %d\n\n", num1, num);
    printf("****** FIM Exercicio 46 ******\n");
}

void ex47(){
    int num, num1;
    printf("\n******** Exercicio 47 ********\n");
    printf("Informe dois numero:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    if (num > num1) printf("%d %d\n\n", num, num1);
    else   printf("%d %d\n\n", num1, num);
    printf("****** FIM Exercicio 47 ******\n");
}

void ex48(){
    int num, num1;
    printf("\n******** Exercicio 48 ********\n");
    printf("48. Digite dois numero:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    if (num > num1)   printf("%f %d\n\n", sqrt(num), num1*num1);
    else   printf("%f %d\n\n", sqrt(num1), num*num);
    printf("****** FIM Exercicio 48 ******\n");
}

void ex49(){
    int num1, num2, num3, maior;
    printf("\n******** Exercicio 49 ********\n");
    printf("Informe tres numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) maior = num1;
    if (num1 < num2 && num2 > num3) maior = num2;
    if (num3 > num2 && num3 > num1) maior = num3;
    printf("O maior eh %d\n\n", maior);
    printf("****** FIM Exercicio 49 ******\n");
}

void ex50(){
    int num1, num2, num3, maior;
    printf("\n******** Exercicio 50 ********\n");
    printf("Informe tres numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) maior = num1;
    if (num1 < num2 && num2 > num3) maior = num2;
    if (num3 > num2 && num3 > num1) maior = num3;
    printf("O maior eh %d\n\n", maior); 
    printf("****** FIM Exercicio 50 ******\n");
}

void ex51(){
    int num[3],save;
    printf("\n******** Exercicio 51 ********\n");
    printf("Informe tres numeros:\n");
    for (int x=0;x<=2;x++) scanf("%d", &num[x]);
    for (int x=0;x<=2;x++){
        for (int y=0;y<=1;y++){
            if(num[y] < num[y+1]){
                save = num[y];
                num[y] = num[y+1];
                num[y+1] = save;
            }
        }
    }
    printf("Maior: %d, Medio: %d, Menor: %d\n\n", num[0], num[1], num[2]);
    printf("\n****** FIM Exercicio 51 ******\n");
}

void ex52(){
int num[3],save;
    printf("\n******** Exercicio 52 ********\n");
    printf("Informe tres numeros:\n");
    for (int x=0;x<=2;x++) scanf("%d", &num[x]);
    for (int x=0;x<=2;x++){
        for (int y=0;y<=1;y++){
            if(num[y] < num[y+1]){
                save = num[y];
                num[y] = num[y+1];
                num[y+1] = save;
            }
        }
    }
    printf("Menor: %d, Medio: %d, Maior: %d\n\n", num[2], num[1], num[0]);
    printf("\n****** FIM Exercicio 52 ******\n");
}

void ex53(){
int num[3],save;
    printf("\n******** Exercicio 53 ********\n");
    printf("Informe tres numeros:\n");
    for (int x=0;x<=2;x++) scanf("%d", &num[x]);
    for (int x=0;x<=2;x++){
        for (int y=0;y<=1;y++){
            if(num[y] < num[y+1]){
                save = num[y];
                num[y] = num[y+1];
                num[y+1] = save;
            }
        }
    }
    printf("Maior: %d, Intermediario: %d, Menor: %d\n\n", num[0], num[1], num[2]);
    printf("\n****** FIM Exercicio 53 ******\n");
}

void ex54(){
    int num[5],save;
    printf("\n******** Exercicio 54 ********\n");
    printf("Informe tres numeros:\n");
    for (int x=0;x<=4;x++) scanf("%d", &num[x]);
    for (int x=0;x<=4;x++){
        for (int y=0;y<=3;y++){
            if(num[y] < num[y+1]){
                save = num[y];
                num[y] = num[y+1];
                num[y+1] = save;
            }
        }
    }
    printf("Maior: %d, Menor: %d\n\n", num[0], num[4]);
    printf("\n****** FIM Exercicio 54 ******\n");
}

void ex55(){
    int A, B, C;
    printf("\n******** Exercicio 55 ********\n");
    printf("Informe o valor de A, B e C:\n");
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if (A<B+C && B<A+C && C<A+B)    printf("Pode formar um triangulo\n\n");
    else   printf("Nao pode formar um triangulo\n\n");
    printf("****** FIM Exercicio 55 ******\n");
}

void ex56(){
    int idade;
    printf("\n******** Exercicio 56 ********\n");
    printf("Informe sua idade:");
    scanf("%d", &idade);
    if (idade < 18) printf("Menor de idade\n\n");
    if (idade >= 18 && idade <= 65) printf("Maior de idade\n\n");
    if (idade > 65) printf("Maior de 65 anos\n\n");
    printf("****** FIM Exercicio 56 ******\n");
}

void ex57(){
    int num;
    printf("\n******** Exercicio 57 ********\n");
    printf("Informe um numero:");
    scanf("%d", &num);
    if (num == 5)   printf("Igual a 5\n");
    else if (num == 200)    printf("Igual a 200\n");
    else if (num == 400)    printf("Igual a 400\n");
    if (num >= 500 && num <= 1000)  printf("Esta no intervalo de 500 e 1000\n\n");
    else   printf("Nao esta no intervalo de 500 e 1000\n\n");
    printf("****** FIM Exercicio 57 ******\n");
}

void ex58(){
    char nome [20];
    int P1, P2;
    float media;
    printf("\n******** Exercicio 58 ********\n");
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("Digite a nota da P1:\n");
    scanf("%d", &P1);
    printf("Digite a nota da P2:\n");
    scanf("%d", &P2);
    media = (P1+P2)/2;
    if (media < 3)  printf("%s, P1: %d, P2: %d, Media: %0.2f, REPROVADO\n\n", nome, P1, P2, media);
    else if (media >= 7)   printf("%s, P1: %d, P2: %d, Media: %0.2f, APROVADO\n\n", nome, P1, P2, media);
    else    printf("%s, P1: %d, P2: %d, Media: %0.2f, PROVA FINAL\n\n", nome, P1, P2, media);
    printf("****** FIM Exercicio 58 ******\n");
}

void ex59(){
    float salario;
    printf("\n******** Exercicio 59 ********\n");
    printf("Informe salario liquido:");
    scanf("%f", &salario);
    if (salario <= 600) printf("Isento\n");
    if (salario > 600 && salario <= 1200)   printf("O desconto eh de %f Reias\n\n", salario/5);
    if (salario > 1200 && salario <= 2000)  printf("O desconto eh de %f Reias\n\n", salario/4);
    if (salario > 2000) printf("O desconto eh de %f Reias\n\n", salario/100*30);
    printf("****** FIM Exercicio 59 ******\n");
}

void ex60(){
  float compra;
  printf("\n******** Exercicio 60 ********\n");
  printf("60. Digite o valor de compra:\n");
  scanf("%f", &compra);
  if (compra < 20)  printf("Valor de venda: %0.2f", compra+(compra/100*45));
  else printf("Valor de venda: %0.2f", compra+(compra/100*30));
  printf("\n****** FIM Exercicio 60 ******\n");
}

void ex61(){
    float altura,peso;
    char sexo;
    printf("\n******** Exercicio 61 ********\n");
    printf("Insira sua altura:\n");
    scanf("%f", &altura);
    printf("Insira seu sexo(m/f):\n");
    scanf("%c", &sexo);
    if (sexo == 'm')    peso = (72,7*altura)-58;
    if (sexo == 'f')    peso = (62,1*altura)-44,7;
    printf("Seu peso ideal eh de %f",peso);
    printf("\n****** FIM Exercicio 61 ******\n");
}

void ex62(){
    int idade;
    printf("\n******** Exercicio 62 ********\n");
    printf("Informe sua idade do nadador:\n");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7)   printf("Infantil A\n\n");
    if (idade >= 8 && idade <= 10)  printf("Infantil B\n\n");
    if (idade >= 11 && idade <= 13) printf("Juvenil A\n\n");
    if (idade >= 14 && idade <= 17) printf("Juvenil B\n\n");
    if (idade > 18) printf("Senior\n\n");
    printf("****** FIM Exercicio 62 ******\n");
}

void ex63(){
    int a, b, c, d, x1, x2;
    printf("\n******** Exercicio 63 ********\n");
    printf("Informe o valor de A, B e C:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = ((b*b)-4*(a*c));
    x1 = ((-b)-(sqrt(d))/(2*(a)));
    x2 = ((-b)+(sqrt(d))/(2*(a)));
    if (d > 0)  printf("X1: %d, X2: %d, Delta: %d\n\n", x1, x2, d);
    if (d == 0) printf("X1 e X2 sao iguais: %d, Delta: %d\n\n", x1, d);
    printf("****** FIM Exercicio 63 ******\n");
}

void ex64(){
  int mes;
  printf("\n******** Exercicio 64 ********\n");
  printf("Informe o mes desejado:\n");
  scanf("%d", &mes);
  if (mes == 1)     printf("Janeiro\n\n");
  if (mes == 2)     printf("Fevereiro\n\n");
  if (mes == 3)     printf("Marco\n\n");
  if (mes == 4)     printf("Abril\n\n");
  if (mes == 5)     printf("Maio\n\n");
  if (mes == 6)     printf("Junho\n\n");
  if (mes == 7)     printf("Julho\n\n");
  if (mes == 8)     printf("Agosto\n\n");
  if (mes == 9)     printf("Setembro\n\n");
  if (mes == 10)    printf("Outubro\n\n");
  if (mes == 11)    printf("Novembro\n\n");
  if (mes == 12)    printf("Dezembro\n\n");
  if (mes > 12)     printf("Esse mes nao existe\n\n");
  printf("****** FIM Exercicio 64 ******\n");
}

void ex65(){
    int votos, eleitores;
    char mun[20];
    printf("\n******** Exercicio 65 ********\n");
    printf("Informe o nome do municipio:\n");
    scanf("%s", mun);
    printf("Informe a quantidade de eleitores:\n");
    scanf("%d", &eleitores);
    printf("Informe a quantidade de votos para o candidato mais votado:\n");
    scanf("%d", &votos);
    if (eleitores<20000 || votos>eleitores/2 && eleitores <20000)
        printf("Nao havera segundo turno\n\n");
    if (votos<eleitores/2 && eleitores > 20000)
        printf("Havera segundo turno\n\n");
    printf("****** FIM Exercicio 65 ******\n");
}

void ex66(){
    float saldo;
    printf("\n******** Exercicio 66 ********\n");
    printf("Informe o saldo:\n");
    scanf("%f", &saldo);
    if (saldo <= 500)
        printf("Saldo: %0.2f, Nao ha credito disponivel\n\n", saldo);
    if (saldo > 500 && saldo <= 1000)
        printf("Saldo: %0.2f, Credito: %0.2f\n\n", saldo, saldo/100*30);
    if (saldo > 1000 && saldo <= 3000)
        printf("Saldo: %0.2f, Credito: %0.2f\n\n", saldo, saldo/100*40);
    if (saldo > 3001)
        printf("Saldo: %0.2f, Credito: %0.2f\n\n", saldo, saldo/2);
    printf("****** FIM Exercicio 66 ******\n");
}

void ex67(){
    char tipo;
    float km;
    printf("\n******** Exercicio 67 ********\n");
    printf("Informe a quilometragem percorrida:\n");
    scanf("%f", &km);
    printf("Informe o tipo de carro (a, b, c):\n");
    scanf("%s", &tipo);
    if (tipo == 'a')    printf("Voce gastara %0.2f litros\n\n", km/8);
    if (tipo == 'b')    printf("Voce gastara %0.2f litros\n\n", km/9);
    if (tipo == 'c')    printf("Voce gastara %0.2f litros\n\n", km/12);
    printf("****** FIM Exercicio 67 ******\n");
}

void ex68(){
    char prato[20];
    char sobremesa[20];
    char bebida[20];
    int kal=0;
    printf("\n******** Exercicio 68 ********\n");
    printf("Informe o prato:\n");
    scanf("%s", prato);
    printf("Informe a sobremesa:\n");
    scanf("%s", sobremesa);
    printf("Informe a bebida:\n");
    scanf("%s", bebida);
    if (!strcmp(prato,"vegetariano"))   kal += 180;
    if (!strcmp(prato,"peixe"))         kal += 230;
    if (!strcmp(prato,"frango"))        kal += 250;
    if (!strcmp(prato,"carne"))         kal += 350;
    if (!strcmp(sobremesa,"abacaxi"))           kal += 75;
    if (!strcmp(sobremesa,"sorvete diet"))      kal += 110;
    if (!strcmp(sobremesa,"mousse diet"))       kal += 170;
    if (!strcmp(sobremesa,"mousse chocolate"))  kal += 200;
    if (!strcmp(bebida,"cha"))                  kal += 20;
    if (!strcmp(bebida,"suco de laranja"))      kal += 70;
    if (!strcmp(bebida,"suco de melao"))        kal += 100;
    if (!strcmp(bebida,"refrigerante diet"))    kal += 65;
    printf("A quantidade total de calorias eh de: %d\n\n", kal);
    printf("****** FIM Exercicio 68 ******\n");
}

void ex69(){
    float angulo;
    printf("\n******** Exercicio 69 ********\n");
    printf("Informe o angulo:\n");
    scanf("%f", &angulo);
    if (angulo <= 90 || angulo > 180 && angulo <= 270)
        printf("Cosseno: %0.2f\n\n", acos(angulo));
    else   printf("Seno: %0.2f\n\n", asin(angulo));
    printf("****** FIM Exercicio 69 ******\n");
}

void ex70(){
    float x;
    printf("\n******** Exercicio 70 ********\n");
    printf("70. Digite o valor de X:\n");
    scanf("%f", &x);
    printf("f(%0.2f) = %0.2f\n\n",x,  8/(2-x));
    printf("****** FIM Exercicio 70 ******\n");
}

void ex71(){
    float x;
    printf("\n******** Exercicio 71 ********\n");
    printf("Informe o valor de X:\n");
    scanf("%f", &x);
    printf("f(%0.2f) = %0.2f\n\n", x,  (5*x+3)/sqrt(x*x-16));
    printf("****** FIM Exercicio 71 ******\n");
}

void ex72(){
    float x;
    printf("\n******** Exercicio 72 ********\n");
    printf("Informe o valor de X:\n");
    scanf("%f", &x);
    printf("f(%0.2f) = %0.2f\n\n", x,  10*x+(2*x)/x*x);
    printf("****** FIM Exercicio 72 ******\n");
}

void ex73(){
float x;
printf("\n******** Exercicio 7 ********\n");
printf("Informe o valor de X:\n");
scanf("%f", &x);
if (x<=1)               printf("Y = 1\n\n");
if (x > 1 && x <= 2)    printf("Y = 2\n\n");
if (x > 2 && x <= 3)    printf("Y = %0.2f\n\n", x*x);
if (x > 3)              printf("Y = %0.2f\n\n", x*x*x);
printf("****** FIM Exercicio 73 ******\n");
}

int main (){
    int exercicio; 
    
    while(1){
        
        printf("\nInforme o numero do exercicio:");
        scanf("%d",&exercicio);

        switch (exercicio){
            case  1: ex1();    break;
            case  2: ex2();    break;
            case  3: ex3();    break;
            case  4: ex4();    break;
            case  5: ex5();    break;
            case  6: ex6();    break;
            case  7: ex7();    break;
            case  8: ex8();    break;
            case  9: ex9();    break;
            case 10: ex10();   break;
            case 11: ex11();   break;
            case 12: ex12();   break;
            case 13: ex13();   break;
            case 14: ex14();   break;
            case 15: ex15();   break;
            case 16: ex16();   break;
            case 17: ex17();   break;
            case 18: ex18();   break;
            case 19: ex19();   break;
            case 20: ex20();   break;
            case 21: ex21();   break;
            case 22: ex22();   break;
            case 23: ex23();   break;
            case 24: ex24();   break;
            case 25: ex25();   break;
            case 26: ex26();   break;
            case 27: ex27();   break;
            case 28: ex28();   break;
            case 29: ex29();   break;
            case 30: ex30();   break;
            case 31: ex31();   break;
            case 32: ex32();   break;
            case 33: ex33();   break;
            case 34: ex34();   break;
            case 35: ex35();   break;
            case 36: ex36();   break;
            case 37: ex37();   break;
            case 38: ex38();   break;
            case 39: ex39();   break;
            case 40: ex40();   break;
            case 41: ex41();   break;
            case 42: ex42();   break;
            case 43: ex43();   break;
            case 44: ex44();   break;
            case 45: ex45();   break;
            case 46: ex46();   break;
            case 47: ex47();   break;
            case 48: ex48();   break;
            case 49: ex49();   break;
            case 50: ex50();   break;
            case 51: ex51();   break;
            case 52: ex52();   break;
            case 53: ex53();   break;
            case 54: ex54();   break;
            case 55: ex55();   break;
            case 56: ex56();   break;
            case 57: ex57();   break;
            case 58: ex58();   break;
            case 59: ex59();   break;
            case 60: ex60();   break;
            case 61: ex61();   break;
            case 62: ex62();   break;
            case 63: ex63();   break;
            case 64: ex64();   break;
            case 65: ex65();   break;
            case 66: ex66();   break;
            case 67: ex67();   break;
            case 68: ex68();   break;
            case 69: ex69();   break;
            case 70: ex70();   break;
            case 71: ex71();   break;
            case 72: ex72();   break;
            case 73: ex73();   break;
            default:
                printf("\n*** ERROR: Exercicio INVALIDO ***\n");
                break;  
        }

    }
    return 0;
}