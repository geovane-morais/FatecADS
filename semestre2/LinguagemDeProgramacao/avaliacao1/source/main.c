#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

void ex1(){
    int vetor[5], somaimp = 0, somapar = 0, somatotal = 0;
    float porcentimp, porcentpar;

    for(int i = 0; i<5; i++){
        printf("Digite um valor:");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i<5; i++){
        if(vetor[i]%2 == 0)
            somapar = somapar + vetor[i];
        else 
            somaimp = somaimp+ vetor[i];
        somatotal = somatotal+vetor[i];
    }
    printf("\nA soma dos impares eh: %d\n", somaimp);
    printf("A soma dos pares eh: %d\n", somapar);
    printf("A soma total dos valores eh: %d\n", somatotal);
    printf("porcentagem dos pares: %.2f%%\n", ((float)somapar/(float)somatotal)*100.0f);
    printf("porcentagem dos impares: %.2f%%\n\ns", ((float)somaimp/(float)somatotal)*100.0f);
}

void ex2(){
    int A[10], B[10];
    
    for(int i=0;i<10;i++){
        printf("Digite um valor: ");
        scanf("%d", &A[i]);
    }
    for(int i=0;i<=10-1;i++){
        if((i%2) == 0)
            B[i] = A[i]*5;
        else
            B[i] = A[i]+5;
    }
    printf("\n");
    for(int i = 9;i>=0;i--)
        printf("O valor da %d posicao eh: %d\n\n", i+1, B[i]);
}

void ex3(){
    int v[10];

    for(int i=0;i<10;i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &v[i]);
    }
    for(int i = 9;i>=0;i--)
        printf("\nValor %d: %d", i+1, v[i]);
    printf("\n\n");
}

void ex4(){
    int v[10];

    for(int i=0;i<10;i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &v[i]);
        if(v[i]%2 == 1){
            printf("--------------------\n");
            printf("Valor invalido \n");
            printf("--------------------\n");
            i--;
            continue;
        }
    }

    for(int i = 9;i>=0;i--)
        printf("\nValor %d: %d", i+1, v[i]);
    printf("\n\n");
}

void ex5(){
    float notas[15], soma = 0;

    for(int i=0;i<15;i++){
        printf("Informe a nota do %d aluno: ", i+1);
        scanf("%f", &notas[i]);
    }
    for(int i=0;i<15;i++)
        soma = soma+notas[i];

    printf("\nA media da sala eh: %.2f\n\n", soma/15);
}

void ex6(){
    float v[10], positivo = 0;;
    int qnegativos = 0;

    for(int i=0;i<10;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%f", &v[i]);
    }
    for(int i=0;i<10;i++){
        if(v[i] < 0)
            qnegativos++;
        if(v[i] > 0)
            positivo += v[i];
    }

    printf("Quantidade de numeros negativos: %d\n", qnegativos);
    printf("Soma dos numeros positivos: %.2f\n\n", positivo);
}

void ex7(){
    int v[5];
    int maior = 0, soma = 0, menor;

    for(int i=0;i<5;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &v[i]);
    }
    for(int i=0;i<5;i++){
        if(v[i] > maior)
            maior = v[i];
        if(v[i] < menor)
            menor = v[i];

        soma = soma + v[i];
    }


    for(int i=0;i<5;i++)
        printf("\nValor do %d numero: %d", i+1, v[i]);
    
    printf("\n\nmaior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);
    printf("Media: %.2f\n\n", (float)soma/5);
}

void ex8(){
    int v[5];
    int maior = 0,pmaior = 0, menor = 0, pmen = 0;

    for(int i=0;i<5;i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &v[i]);
    }
    menor = v[0];
    for(int i=0;i<5;i++){
        if(v[i] > maior){
            maior = v[i];
            pmaior = i;
        }
        if(v[i] < menor){
            menor = v[i];
            pmen = i;
        }
    }

    printf("\nmaior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("Posicao do maior no vetor: %d\n", pmaior+1);
    printf("Posicao do menor no vetor: %d\n\n", pmen+1);
}

void ex9(){
    int i, j, matriz[5][5];
    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for(j=0;j<5;j++){
            matriz[i][j] = (rand() % 9);
            if(matriz[i][j] == 0)
                matriz[i][j] = (rand() % 9);   
        }
    }

    for(i=1;i<5;i++) //diagonal principal
        matriz [i][i] = matriz [0][0];

    for(i = 1; i<=4;i++)
        matriz [i][0] = 0; 
    for(i = 2; i<=4;i++)
        matriz [i][1] = 0;  
    for(i = 3; i<=4;i++)
        matriz [i][2] = 0; 
    for(i = 4; i<=4;i++)
        matriz [i][3] = 0;

    for (i = 0; i < 5; i++) {
        for(j=0;j<5;j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}

void ex10(){
    float MA[4][2], MB[4][2], MC[4][2];
    int i, j;

    for(i = 0; i<4; i++){
            printf("Digite a %d linha da matriz A: \n", i+1);
        for(j=0;j<2;j++)
            scanf("%f", &MA[i][j]);
    }
    for(i = 0; i<4; i++){
            printf("Digite a %d linha da matriz B: \n", i+1);
        for(j=0;j<2;j++)
            scanf("%f", &MB[i][j]);
    }

    for(i = 0; i<4; i++){
        for(j=0;j<2;j++)
            MC[i][j] = MA[i][j]+MB[i][j];
    }
    printf("Matriz C:  \n");

    for(i = 0; i<4; i++){
        printf("%.0f", MC[i][0]);
        printf(" | ");
        printf("%.0f\n", MC[i][1]);
    }
}

void ex11(){
    int v1, v2, ia=0, ib=0, contador = 0, i;
    int cont10a = 0, cont10b = 0;
    int aux1 =0, aux2=0, aux1ini = 0, aux2ini=0;
    float tam1 = 0, tam2 = 0;
    bool saber = false, saber2 = true;
    char va[(int)tam1], vb[(int)tam2];

    while(v1 > 10000 || v2 > 10000){
        printf("Entre com um numero: ");
        scanf("%d", &v1);
        printf("Entre com um numero: ");
        scanf("%d", &v2);
    }

    aux1ini = v1;
    aux2ini = v2;

    while(aux2ini % 10 == 0){
        aux2ini = aux2ini / 10;
        cont10b++;
        saber2 = true;
    }
    while(aux1ini % 10 == 0){
        aux1ini = aux1ini / 10;
        cont10a++;
        saber = true;
    }

    v1 = aux1ini;
    v2 = aux2ini;

    if (aux1ini == 0) tam1 = 1;
    else    while (v1 != 0){
        tam1 = tam1 + 1;
        v1 = v1 / 10;
    }
    
    if (aux1ini == 0) tam2 = 1;
    else    while (v2 != 0){
        tam2 = tam2 + 1;
        v2 = v2 / 10;
    }
  
    while (aux1ini > 0){
        va[contador] = aux1ini%10;
        aux1ini = aux1ini/10;
        contador++;
    }
    if(tam1 == 4){
        aux1 = va[1];
        va[1] = va[2];
        va[2] = aux1;
    }
   
    contador =0;
    while (aux2ini > 0){
        vb[contador] = aux2ini%10;
        aux2ini = aux2ini/10;
        contador++;
    }
    if(tam2 == 4){
        aux2 = vb[1];
        vb[1] = vb[2];
        vb[2] = aux2;
    }
    printf("\n");
    
    for(i = 0; i<tam1; i++)
        printf("Va[%d]: %d  ",i, va[i]);
    
    for(i = 0; i<tam2; i++)
        printf("Vb[%d]: %d  ",i, vb[i]);
    
}

void ex12(){
    const int coluna=3;
    char m[5][10], v[10];
    int i, j, res[5], a=0, soma = 0;

    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("resposta do aluno %d para pergunta (%d): ", i+1,j+1);
            scanf(" %c", &m[i][j]);
        }
        printf("--------------------------------------\n");
    }

    for(j=0;j<10;j++){
        printf("Gabarito [%d]: ",j+1);
        scanf(" %c", &v[j]);
    }

    for(i=0;i<5;i++){
        res[i]=0;
        soma=0;
        for(j=0;j<10;j++){
            if(m[i][j]==v[j]){
                soma++;
                res[i]=soma;
            }
        }
    }

    printf("Acertos: \n");
    for(i=0;i<5;i++){
        printf("Aluno %d: ", i+1);
        printf("%d \n", res[i]);
    }
    printf("\n");
}

void ex13(){
    int matriz[7][7] = {};
    int valor = (rand() % 9);

    for(int a=0; a<7; a++){
        for(int b=0;b<7;b++){
            if(b == a)
                matriz[a][b] = valor;
        }
    }
    for(int a=0; a<7; a++){
        for(int b=0;b<7;b++)
            printf("%d ", matriz[a][b]);
        printf("\n");
    }
    printf("\n");
}

void ex14(){
    int cont, aleat = 0;
    int matriz[9][9], vetor[81];

    for(int a = 0; a<9; a++){
        for(int b=0;b<9;b++){

            do aleat = (rand() % 9);
            while(aleat%2 == 0);

            matriz[a][b] = aleat;
            vetor[cont] = matriz[a][b];
            cont++;
        }
    }
    for(int a = 0; a<9; a++){
        for(int b=0;b<9;b++)
            printf("%d ", matriz[a][b]);
        printf("\n");
    }
    printf("----------------------------------------\n");

    for(int b = 80; b >=0; b--){
        for(int a = 0; a < b; a++){
            if(vetor[a] < vetor[a+1]){
                int aux = vetor[a];
                vetor[a] = vetor[a+1];
                vetor[a+1] = aux;
            }
        }
    }

    for(cont= 0; cont<81; cont++)
        printf("Valor %d: %d\n", cont, vetor[cont]);
}

void ex15(){
    int v[10], i = 0;
    printf("Exercicio escolhido: 3\n\n");

    do{
        printf("Informe o %d valor: ", i+1);
        scanf("%d", &v[i]);
        i++;
    } while(i<10);

    do{
        i--;
        printf("\nValor %d: %d", i+1, v[i]);
    } while(i>0);
    printf("\n\n");
}

int main(){
    
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
    ex8();
    ex9();
    ex10();
    ex11(); //não funcionou
    ex12();
    ex13();
    ex14();
    ex15();

    return 0;
}