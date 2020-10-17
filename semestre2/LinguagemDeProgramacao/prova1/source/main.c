#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    /* Exercicio mostrar a quantidade de vogais
        int  quantVogal = 0;
        char w[100] = {"\0"};
        printf("\ninforme um texto de até 100 caracteres:\n");
        scanf(" %[^\n]100s", &w);
        for(int vetor=0;vetor<100;vetor++){
            if (w[vetor] == 'a' || w[vetor] == 'e' || w[vetor] == 'i' || w[vetor] == 'o' || w[vetor] == 'u') quantVogal++;
            if (w[vetor] == '\0') break;
        }
        printf("Quantidade de vogais do texto:s%d\n",quantVogal);
    */

    /* Exercicio que mostra a soma dos numeros 1/1 - 3/2 + 5/3 - ... - 59/30
        float dividendo = 1,divisor = 1,resultado = 0;
        while(dividendo <= 59 && divisor <= 30){
            if ((int)divisor%2 == 1) resultado += (dividendo/divisor);
            else resultado -= dividendo/divisor;
            dividendo += 2;
            divisor   += 1;
        }   
        printf("\nresultado das divisoes:%f\n\n",resultado);
    */

    /*Soma dos numeros impares so pode digitar 100 numeros]
        float numero = 0,resultado = 0;
        for(int v=0;v<100;v++){
            printf("informe um numero:");
            scanf(" %f", &numero);
            if((int)numero%2 == 1) resultado += numero;
            if (numero == 0) break;
        }
        printf("soma dos impares eh:%.0f\n",resultado);
   */

    return (0);
}