#include <stdio.h>

void exercicio1(){
    int quantidade;
    printf("\n=======================EX1=======================\n");
    printf("Informe a quantidade de (*):");
    scanf("%d", &quantidade);
    printf("\n");
    for (quantidade;quantidade > 0;quantidade --) printf("*");
    printf("\n\n=====================FIM EX1=====================\n");
}

void exercicio2(){
    int quantidade;
    printf("\n=======================EX2=======================\n");
    printf("Informe a quantidade de (*):");
    scanf("%d", &quantidade);
    for (quantidade;quantidade > 0;quantidade --){ 
        printf("\n");
        for (int a=quantidade;a>0;a--) printf("*");
    }
    printf("\n\n=====================FIM EX2=====================\n");
}

void exercicio3(){
    int quantidade=0,save=0;
    printf("\n=======================EX3=======================\n");
    printf("Informe a quantidade de (*):");
    scanf("%d", &quantidade);
    printf("\n");
    for (save=quantidade;save > 0;save --){ 
        for (int a=save;a>0;a--) printf("*");
        printf("\n");
    }
    for (save=0;save < quantidade;save ++){ 
        for (int a=0;a<=save;a++) printf("*");
        printf("\n");
    }
    printf("\n=====================FIM EX3=====================\n");
}

void exercicio4(){
    int quantidade=0,metade,space=0;
    printf("\n=======================EX4=======================\n");
    printf("Informe a quantidade de (*):");
    scanf("%d", &quantidade);
    metade = quantidade / 2;
    space = quantidade%2==0 ? 0 : 1; 

    for (int inicio1=1;inicio1<=quantidade/2;inicio1++,space+=2,metade--){
        printf("\n");
        for (int inicio2=0;inicio2<metade;inicio2++) printf("*");
        for (int inicio3=0;inicio3<space;inicio3++)  printf(" ");
        for (int inicio4=0;inicio4<metade;inicio4++) printf("*");   
    }

    for (int inicio5=quantidade/2;inicio5>=0;inicio5--,space-=2,metade++){
        for (int inicio6=0;inicio6<metade;inicio6++) printf("*");
        for (int inicio7=0;inicio7<space;inicio7++) printf(" ");
        for (int inicio8=0;inicio8<metade;inicio8++) printf("*");     
        printf("\n");
    }
    printf("\n=====================FIM EX4=====================\n");
}

void exercicio5(){

    int quantidade=0,spaceLEFT=0,space=0,lozango=1,MaiorLozango=0,passo=0;
    printf("\n=======================EX5=======================\n");
    printf("OBS: informe um numero multiplo de 4");
    printf("\n-------------------------------------------------\n");
    printf("Informe a quantidade de (*):");
    scanf("%d", &quantidade);
    space = quantidade/2;

    while(lozango>0){
        printf("\n");
        for(int inicio=0;inicio<spaceLEFT;inicio++)printf(" "); 
        printf("\\");
        for (int inicio=0;inicio<space;inicio++)printf(" ");
        for (int inicio=0;inicio<lozango;inicio++)printf("*");
        for (int inicio=0;inicio<space;inicio++)printf(" ");
        printf("/");
        
        if (space<0);
        else if (space<2) MaiorLozango = lozango;
        if (MaiorLozango==0) lozango+=2;
        else lozango-=2;
        spaceLEFT ++;
        space -=2;
    }

    printf("\n");
    for(int inicio=0;inicio<spaceLEFT;inicio++)printf(" "); 
    printf("X");
    space=0;lozango=1;spaceLEFT--;

    while(spaceLEFT>=0){

        printf("\n");
        for(int inicio=spaceLEFT;inicio>0;inicio--)printf(" "); 
        printf("/");
        for (int inicio=space;inicio>0;inicio--)printf(" ");
        for (int inicio=lozango;inicio>0;inicio--)printf("*");
        for (int inicio=space;inicio>0;inicio--)printf(" ");
        printf("\\");    //fim do desenho

        if (lozango == MaiorLozango) passo=1;
        lozango = passo==0 ? lozango+=2 : lozango-+2;
        space = passo==1 ? space+2 : 0;
        spaceLEFT --;
    }
    printf("\n\n=====================FIM EX5=====================\n");

}

void exercicio6(){
    int quantidade=0,metade=0,save,folhas=1;

    printf("\n=======================EX6=======================\n");
    printf("OBS: informe um numero impar");
    printf("\n-------------------------------------------------\n");
    printf("Informe a quantidade de (*) na base da arvore:");
    scanf("%d", &quantidade);
    printf("\n");
    metade = quantidade/2;

    for (int inicio=0;inicio<=quantidade/2;inicio++,metade--,folhas+=2) {
        for (int inicio=0;inicio<metade;inicio++) printf(" ");
        for(int inicio=0;inicio<folhas;inicio++)  printf("*");
        printf("\n");
    }
    
    for (int inicio=1;inicio<quantidade/2;inicio++) printf(" ");
    printf("| |\n");
    printf("\n=====================FIM EX6=====================\n");
}

int main(){
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    return 0;
}