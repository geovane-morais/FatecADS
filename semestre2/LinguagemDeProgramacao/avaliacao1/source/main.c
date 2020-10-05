#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<conio.h>
#include<time.h>
#include <string.h>
#include<stdbool.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
/* Exercicio 1
int i = 0;
int vetorA[5];
int somaimp = 0;
int somapar = 0;
int somatotal = 0;
float porcentimp;
float porcentpar;

for(i = 0; i<5; i++){
    printf("Digite um valor: \n");
    scanf("%d", &vetorA[i]);
}
for(i = 0; i<5; i++){
   if(vetorA[i]%2 == 0){
    somapar = somapar + vetorA[i];

   }
   else{
    somaimp = somaimp+ vetorA[i];

   }
   somatotal = somatotal+vetorA[i];
}
system("cls");
printf("A soma dos valores impares é: %d\n", somaimp);
printf("A soma dos valores pares é: %d\n", somapar);
printf("A soma total dos valores é: %d\n", somatotal);
printf("porcentagem dos numeros pares: %.2f%%\n", ((float)somapar/(float)somatotal)*100.0f);
printf("porcentagem dos numeros impares: %.2f%%\n", ((float)somaimp/(float)somatotal)*100.0f);
*/
/* Exercicio 2
 int i = 0;
    int valoresA[10];
    int valoresB[10];
    for(i=0;i<10;i++){
    printf("Digite um valor: \n");
    scanf("%d", &valoresA[i]);
    }
    for(i=0;i<=10-1;i++){
        if((i%2) == 0){
            valoresB[i] = valoresA[i]*5;
        }
        else{
            valoresB[i] = valoresA[i]+5;
        }

    }

    system("cls");
    for(i = 9;i>=0;i--){
        printf("O valor da %d posição é: %d\n", i+1, valoresB[i]);
    }
*/
    /* Exercicio 3
int valores[10];
int i;

for(i=0;i<10;i++){
    printf("Digite o %d valor: \n", i+1);
    scanf("%d", &valores[i]);
}
system("cls");
for(i = 9;i>=0;i--){
    printf("Valor %d: %d\n", i+1, valores[i]);
}
*/
/* Exercicio 4
int valores[10];
int i;

for(i=0;i<10;i++){
    printf("Digite o %d valor: \n", i+1);
    scanf("%d", &valores[i]);
    if(valores[i]%2 == 1){
        printf("--------------------\n");
        printf("Valor invalido \n");
        printf("--------------------\n");
        i--;
        continue;
    }
}
system("cls");
for(i = 9;i>=0;i--){
    printf("Valor %d: %d\n", i+1, valores[i]);
}
*/
/* Exercicio 5
int i;
float notas[15];
float soma = 0;
for(i=0;i<15;i++){
    printf("Digite a nota do %d aluno: \n", i+1);
    scanf("%f", &notas[i]);
}
for(i=0;i<15;i++){
    soma = soma+notas[i];
}
system("cls");
printf("A média geral da sala é: %.2f", soma/15);
*/
/* Exercicio 6
int i;
float vetor[10];
int qtdnegativos = 0;
float positivo = 0;
for(i=0;i<10;i++){
    printf("Digite o %d numero: \n", i+1);
    scanf("%f", &vetor[i]);
}
for(i=0;i<10;i++){
    if(vetor[i] < 0){
        qtdnegativos++;
    }
    if(vetor[i] > 0){
        positivo += vetor[i];
    }
}

printf("Quantidade de numeros negativos: %d\n", qtdnegativos);
printf("Soma dos numeros positivos: %.2f\n", positivo);
*/
/* Exercicio 7
int vetor[5];
int i;
int maior = 0, soma = 0;
int menor;
for(i=0;i<5;i++){
    printf("Digite o %d numero: \n", i+1);
    scanf("%d", &vetor[i]);
}
for(i=0;i<5;i++){
    if(vetor[i] > maior){
        maior = vetor[i];

    }
    if(vetor[i] < menor){
        menor = vetor[i];

    }
    soma = soma + vetor[i];
}
system("cls");

for(i=0;i<5;i++){
    printf("Valor do %d numero: %d\n", i+1, vetor[i]);
}
printf("maior valor: %d\n", maior);
printf("menor valor: %d\n", menor);
printf("Média: %.2f", (float)soma/5);
*/
/* Exercicio 8
int i;
int valores[5];
int maior = 0,posim = 0;
int menor, posimen = 0;

for(i=0;i<5;i++){
    printf("Digite o %d numero: \n", i+1);
    scanf("%d", &valores[i]);
}
for(i=0;i<5;i++){
    if(valores[i] > maior){
        maior = valores[i];
        posim = i;
    }
    if(valores[i] < menor){
        menor = valores[i];
        posimen = i;
    }
}

printf("maior valor: %d\n", maior);
printf("menor valor: %d\n", menor);
printf("Posição do maior valor: %d\n", posim);
printf("Posição do menor valor: %d\n", posimen);
*/

/* Exercicio 9
 int i,j;
    int matriz[5][5];


    srand(time(NULL));

  for (i = 0; i < 5; i++) {
        for(j=0;j<5;j++){
        matriz[i][j] = (rand() % 9);
            if(matriz[i][j] == 0){
                matriz[i][j] = (rand() % 9);
            }
        }
    }
    //diagonal principal
    for(i=1;i<5;i++){
        matriz [i][i] = matriz [0][0];
    }


//--------

        for(i = 1; i<=4;i++){
            matriz [i][0] = 0;
        }
        for(i = 2; i<=4;i++){
            matriz [i][1] = 0;
        }
         for(i = 3; i<=4;i++){
            matriz [i][2] = 0;
        }
         for(i = 4; i<=4;i++){
            matriz [i][3] = 0;
        }

    for (i = 0; i < 5; i++) {
          for(j=0;j<5;j++){
                printf("%d ", matriz[i][j]);
          }
          printf("\n");
    }


*/

/* Exercicio 10
float MatrizA[4][2];
float MatrizB[4][2];
float MatrizC[4][2];

int i, j;

for(i = 0; i<4; i++){
        printf("Digite a %d linha da matriz A: \n", i+1);
    for(j=0;j<2;j++){
        scanf("%f", &MatrizA[i][j]);
    }
}
for(i = 0; i<4; i++){
        printf("Digite a %d linha da matriz B: \n", i+1);
    for(j=0;j<2;j++){
        scanf("%f", &MatrizB[i][j]);
    }
}
for(i = 0; i<4; i++){
    for(j=0;j<2;j++){
       MatrizC[i][j] = MatrizA[i][j]+MatrizB[i][j];
    }
}
printf("Matriz C:  \n");
for(i = 0; i<4; i++){
        printf("%.0f", MatrizC[i][0]);
        printf(" | ");
        printf("%.0f\n", MatrizC[i][1]);

}
*/

/* Exercicio 11
    int v1, v2, ia=0, ib=0;
    float tam1 = 0, tam2 = 0;
    bool saber = false, saber2 = true;

    int cont10a = 0, cont10b = 0;
    int aux1 =0, aux2=0, aux1ini = 0, aux2ini=0;
while(v1 > 10000 || v2 > 10000){
    printf("Entre com um numero: \n");
    scanf("%d", &v1);
    printf("Entre com um numero: \n");
    scanf("%d", &v2);
}
    aux1ini = v1;
    aux2ini = v2;
   while(aux1ini % 10 == 0){
        aux1ini = aux1ini / 10;
        cont10a++;
        saber = true;

    }
    while(aux2ini % 10 == 0){
        aux2ini = aux2ini / 10;
        cont10b++;
        saber2 = true;
    }

v1 = aux1ini;
v2 = aux2ini;

    if (aux1ini == 0) tam1 = 1;
    else
        while (v1 != 0)
           {
              tam1 = tam1 + 1;
               v1 = v1 / 10;
           }
    //----------------------------------------------
    if (aux1ini == 0) tam2 = 1;
    else
        while (v2 != 0)
           {
              tam2 = tam2 + 1;
               v2 = v2 / 10;
           }

   char va[(int)tam1], vb[(int)tam2];
    int i;



int contador = 0;
//atirbui e ordena A
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
//atirbui e ordena B
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
//-----------------------
  for(i = 0; i<tam1; i++){
    printf("Va[%d]: %d  ",i, va[i]);
}
 for(i = 0; i<tam2; i++){
    printf("Vb[%d]: %d  ",i, vb[i]);
}

*/



/* Exercicio 12
  const int coluna=3;
    char mat[5][10];
    int i,j, res[5], a=0;
    char vet[10];
    int soma = 0;

    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("resposta do %d aluno: ", i+1);
            scanf("%c", &mat[i][j]);
            fflush(stdin);
        }
        printf("--------------------------------------\n");
    }

    for(j=0;j<10;j++){
        printf("Gabarito [%d]: ",j+1);
        scanf("%c", &vet[j]);
        fflush(stdin);
    }
for(i=0;i<5;i++){
        res[i]=0;
        soma=0;
        for(j=0;j<10;j++){
            if(mat[i][j]==vet[j]){
                soma++;
                res[i]=soma;
            }
        }
    }
printf("Acertos: \n");
printf("--------------------------------------\n");
    for(i=0;i<5;i++){
        printf("Aluno %d: ", i+1);
        printf("%d \n", res[i]);
    }
*/
/* Exercicio 13
int matriz[7][7] = {};
int l,c, valor;

valor = (rand() % 9);

for(l = 0; l<7; l++){
    for(c=0;c<7;c++){
        if(c == l){
            matriz[l][c] = valor;
        }
    }
}
for(l = 0; l<7; l++){
    for(c=0;c<7;c++){
        printf("%d ", matriz[l][c]);
    }
    printf("\n");
}
*/
/* Exercicio 14
int c,l, cont, aleat = 0;
int matriz[9][9];
int vetor[81];


for(l = 0; l<9; l++){
    for(c=0;c<9;c++){
        do{
            aleat = (rand() % 9);
        }while(aleat%2 == 0);
            matriz[l][c] = aleat;
            vetor[cont] = matriz[l][c];
            cont++;
    }
}
for(l = 0; l<9; l++){
    for(c=0;c<9;c++){
        printf("%d ", matriz[l][c]);
    }
    printf("\n");
}
printf("----------------------------------------\n");


for(c = 80; c >=0; c--){
    for(l = 0; l < c; l++){
        if(vetor[l] < vetor[l+1]){
            int aux = vetor[l];
            vetor[l] = vetor[l+1];
            vetor[l+1] = aux;
        }
    }
}
for(cont= 0; cont<81; cont++){
    printf("Valor %d: %d\n", cont, vetor[cont]);
}
*/

/* Exercicio 15
printf("Exercicio escolhido: 3\n\n\n");

int valores[10];
int i = 0;

do{
    printf("Digite o %d valor: \n", i+1);
    scanf("%d", &valores[i]);
    i++;
}while(i<10);
system("cls");

i = 9;

do{
    printf("Valor %d: %d\n", i+1, valores[i]);
    i--;
}while(i>=0);
*/


}






