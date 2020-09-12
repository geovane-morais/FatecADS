#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Autores: Geovane Morais
 *	    Lucas Garcia
 *	    Lucas Pires
 *	    Willian Mazzeto
 */

void LimparTela(){//define a systema operacional
  #ifdef _WIN32
  system("cls");
  #endif

  #ifdef __linux__
  system("clear");
  #endif
}

int RealizarNovamente(){
    int x,y;
    printf("   NAO = 0 / SIM = 1\n");
    printf("   Realizar outra operacao? ");
    scanf("   %d", &y);
    LimparTela();
    printf("\n");
    x = (y==0) ? 0 : 1;
    return x;
}

void OrganizaFloat(float *numero,int NumerodeArray){
    float save=0;
        for (int y=0;y<NumerodeArray-1;y++){
            if (numero[y] == 0){
                save = numero[y];
                numero[y] = numero[y+1];
                numero[y+1] = save;
            }
            if (numero[y] == numero[y+1]) break;
        }
}

void Somatoria(){
    char equacao[20] = "\0";    //armazena a regra
    char validar[20] = "\0";    //valida a equacao
    char saveNumbers[10] = "\0";//armezena os numeros retirados da equacao
    char save;                  //variavel de controle para retirar os espacos
    float numbers[20];          //salva os numeros retirados da string equacao
    float resultado = 0;
    int indice,indiceN,termino,fazerNovamente=1,i;
    char opcao = '\0';

    while(fazerNovamente==1){
        strncpy(validar,"\0",20);                //limpa vetor de chars
        strncpy(equacao,"\0",20);                //limpa vetor de chars
        
        LimparTela();
        printf( "     Somatorio  \n\n"
                "   Indice         \n"
                "   ______         \n"
                "   \\     |       \n"
                "    \\            \n"
                "    /     [Regra]\n"
                "   /_____|        \n"
                "   Termino        \n");

        erro:
        printf( "\n      Sub-Menu\n"
                "   1. MODO livre\n"
                "   2. Regra setada em [(-i)^(i+1)]\n"
                "   3. Voltar ao menu anterior\n"
                "\n   Escolha a opcao:");
        scanf(" %1c", &opcao);
        setbuf(stdin, NULL);            //limpa o buff do teclado

        switch (opcao){
            case '1':
                LimparTela();
                printf("    MODO livre\n");
                printf("\n   Informe o Indice:");
                scanf ("   %d", &indice);
                printf("   Infome o Termino:");
                scanf ("   %d", &termino);
                printf("   Informe a Regra:");
                scanf ("   %[0-9 +-*/i]s",equacao);  //essas letras limitam oque vai ser lido pelo scanf
                setbuf(stdin, NULL);            //limpa o buff do teclado

                //executa os loops do somatorio
                for (indice,resultado=0;indice<=termino;indice++){

                    for (int x = 0;x<20;x++) numbers[x] = 0; //limpa o array de numbers

                    //so repete 20 vezes mesmo
                    for (int y=0;y<20;y++){
                        //remove os espacos de equacao
                        for(int x=0;x<19;x++)
                            if (equacao[x] ==' '){
                                save = equacao[x];
                                equacao[x] = equacao[x+1];
                                equacao[x+1] = save;
                        }

                        //faz validar ser exatamente igual a equacao, porem substitui numeros por 'n'
                        if (equacao[y] == 'i' || equacao[y] == '0' || equacao[y] == '1' || equacao[y] == '2' ||
                            equacao[y] == '3' || equacao[y] == '4' || equacao[y] == '5' ||
                            equacao[y] == '6' || equacao[y] == '7' || equacao[y] == '8' || equacao[y] == '9')
                                validar[y] = 'n';
                        else  validar[y]   = equacao[y];
                    }

                    //pega apenas o numeros de equacao e converte eles para a variavel numbers[]
                    for (int operador=0,comeco=0,vetor1=0,vetor2,saveoperador=0;operador<20;operador++){
                        if (equacao[operador] == '+' || equacao[operador] == '-' || equacao[operador] == '*' ||
                            equacao[operador] == '/' || equacao[operador] == '\0'){
                                for (comeco,vetor2=0;comeco<operador;comeco++)
                                    saveNumbers[vetor2++] = equacao[comeco];

                                if (saveNumbers[0] == 'i') numbers[vetor1] = (float) indice;
                                else    numbers[vetor1] = equacao[saveoperador] == '-' ?
                                        atof(saveNumbers)*-1 : atof(saveNumbers);

                                //if (numbers[vetor1] != 0) ignora esse ak
                                vetor1++;
                                strncpy(saveNumbers,"\0",10); //limpa o vetor

                                saveoperador = operador;
                                comeco = operador+1;

                                if (equacao[operador] == '\0') break;
                            }
                    }


                    for (int x=0;x<19;x++) //resolve as divisoes
                        for (int vetor=0,vetor1=0;vetor<20;vetor++){
                            if (validar[vetor] !='n') vetor1++;
                            if (validar[vetor] == '/'){
                                numbers[vetor1-1] /= numbers[vetor1];
                                numbers[vetor1] = 0;
                                validar[vetor] = 'n';
                                OrganizaFloat(numbers,20);
                                if (validar[vetor+1] == '-') validar[vetor+1] = 'n';
                                break;
                            }
                    }

                    for (int x=0;x<19;x++)  //resolve as multiplicaoes
                        for (int vetor=0,vetor1=0;vetor<20;vetor++){
                            if (validar[vetor] !='n') vetor1++;
                            if (validar[vetor] == '*'){
                                numbers[vetor1-1] *= numbers[vetor1];
                                numbers[vetor1] = 0;
                                validar[vetor] = 'n';
                                OrganizaFloat(numbers,20);
                                if (validar[vetor+1] == '-') validar[vetor+1] = 'n';
                                break;
                            }
                    }

                    for (int x=0;x<19;x++)  //resolve as somas e subtracoes
                        for (int vetor=0,vetor1=0;vetor<20;vetor++){
                            if (validar[vetor] !='n') vetor1++;
                            if (validar[vetor]== '-' || validar[vetor] == '+'){
                                numbers[vetor1-1] += numbers[vetor1];
                                numbers[vetor1] = 0;
                                validar[vetor] = 'n';
                                OrganizaFloat(numbers,20);
                                break;
                            }
                    }

                    resultado += numbers[0];
                }
            break;
        
            case '2':
                LimparTela();
                printf("    Regra setada em [(-i)^(i+1)]\n");
                printf("\n   Informe o Indice:");
                scanf ("   %d", &indice);
                printf("   Infome o Termino:");
                scanf ("   %d", &termino);
                printf("   Regra = [(-i)^(i+1)]\n");
                for (indice,resultado = 0;indice<=termino;indice++){
                    indiceN = indice * -1;
                    i = 1;
                    for(int x=0;x<indice+1;x++) i *= indiceN;
                    resultado +=i;
                }
            break;
            
            case '3':
            goto SairDoSomatorio;
            break;

            default:
                LimparTela();
                printf( "\n\n\n\n"
                        "   ******************\n"
                        "  ***Opção invalida***\n"
                        "   ******************"
                        "\n\n\n");
                goto erro;
            break;
        }

        printf("   Resultado do somatorio: %.2f\n\n",resultado);
        fazerNovamente = RealizarNovamente();
    }
    SairDoSomatorio:;
}

void LogicaProposicional(){
    char A[20];
    char B[20];
    int a, b, c, d, e;

    do{
        //LOGICA PROPOSICIONAL
        printf("   Logica Proposicional\n\n");
        printf("   Digite a variavel p (texto):");
        scanf("   %s", A);
        printf("   1 - Verdadeiro; 0 - Falso:");
        scanf("   %d", &a);
        printf("   Digite a variavel q (texto):");
        scanf("   %s", B);
        printf("   1 - Verdadeiro; 0 - Falso:");
        scanf("   %d", &b);
        printf("   \n\n");
        printf("   MENU\n");
        printf("   1- ~p \n");
        printf("   2- ~q \n");
        printf("   3- p^q\n");
        printf("   4- pvq\n");
        printf("   5- SE p, ENTAO q\n");
        printf("   6- p->q\n");
        printf("   7- p<->q\n");
        printf("   8- VOLTAR\n\n");
        printf("   Escolha a operacao a ser realizada: ");
        scanf("   %d", &c);
        printf("\n");

        switch (c){
            case 1:
                printf("   NAO %s\n", A);

                if (a == 1)                             //
                    printf("   %s eh falso\n\n", A);       //Tabela verdade
                if (a == 0)                             //"nao" logico
                    printf("   %s eh verdadeiro\n\n", A);  //

                e = RealizarNovamente();
            break;

            case 2:
                printf("   NAO %s\n", B);

                if (b == 1)                             //
                    printf("   %s eh falso\n\n", B);       //Tabela verdade
                if (b == 0)                             //"n�o" logico
                    printf("   %s eh verdadeiro\n\n", B);  //

                e = RealizarNovamente();
            break;

            case 3:
                printf("   %s E %s\n", A, B);

                if (a == 1 && b == 1)                               //
                    printf("   O resultado logico eh Verdadeiro\n\n"); //tabela verdade
                else                                                //"e" logico
                    printf("   O resultado logico eh Falso\n\n");      //

                e = RealizarNovamente();
            break;

            case 4:
                printf("   %s OU %s\n", A, B);

                if (a == 0 && b == 0)                               //
                    printf("   O resultado logico eh Falso\n\n");      //Tabela verdade
                else                                                //"ou" logico
                    printf("   O resultado logico eh Verdadeiro\n\n"); //

                e = RealizarNovamente();
            break;

            case 5:
                printf("   SE %s, ENTAO %s\n", A, B);

                if (a == 1 && b == 0)                               //tabela
                    printf("   O resultado logico eh Falso\n\n");      //verdade
                else                                                //do
                    printf("   O resultado logico eh Verdadeiro\n\n"); //se ..., ent�o...

                e = RealizarNovamente();
            break;

            case 6:
                printf("   %s SE, E SOMENTE SE %s\n", A, B);

                if (a == b)                                         //tabela
                    printf("   O resultado logico eh Verdadeiro\n\n"); //verdado
                if (a != b)                                         //do
                    printf("   O resultado logico eh Falso\n\n");      //...se, e somente se...

                e = RealizarNovamente();
            break;

            case 7:
                printf("   OU %s OU %s\n", A, B);

                if (a != b)                                         //
                    printf("   O resultado logico eh Verdadeiro\n\n"); //Tabela verdade
                if (a == b)                                         //"ou exclusivo" logico
                    printf("   O resultado logico eh Falso\n\n");      //

                e = RealizarNovamente();
            break;

            case 8:
                e = 1;
            break;
        }
    } while (e == 1);
}

void Matriz()
{

    int h, i, j, k, l, m, n, o, p, q, r, e, res1, res2, res3, res4;
    do{
        printf("\n   Matrizes\n\n");
        printf("   Digite os 4 numeros da matriz:\n");
        printf("   A11: ");
        scanf("   %d", &h);
        printf("   A12: ");
        scanf("   %d", &i);
        printf("   A21: ");
        scanf("   %d", &j);
        printf("   A22: ");
        scanf("   %d", &k);
        printf("\n");
        printf("   Escolha a operacao a ser realizada: \n");
        printf("   1 - Determinante\n");
        printf("   2 - Soma\n");
        printf("   3 - Subtracao\n");
        printf("   4 - Multiplicacao\n");
        printf("\n");
        printf("   ");
        scanf("   %d", &l);

        switch (l)
        {
            case 1:
                printf("   DETERMINANTE:\n");
                res1 = h*k-i*j;
                printf("   O determinante eh: %d\n\n", res1);
                e = RealizarNovamente();
                printf("\n");
            break;

            case 2:
                printf("   SOMA:\n");
                printf("   Digite a segunda matriz:\n");
                printf("   A11: ");
                scanf("   %d", &n);
                printf("   A12: ");
                scanf("   %d", &o);
                printf("   A21: ");
                scanf("   %d", &p);
                printf("   A22: ");
                scanf("   %d", &q);
                printf("\n");
                printf("   A soma das matrizes eh:\n");
                res1 = h+n;  
                res2 = i+o;
                res3 = j+p;
                res4 = k+q;
                if (res1 < 10 && res2 > 9 || res1 > -1 && res2 < 0){
                printf("   0%d   %d\n", res1, res2);
                }
                if (res2 < 10 && res1 > 9 || res2 > -1 && res1 < 0){
                printf("   %d   0%d\n", res1, res2);
                }
                if (res3 < 10 && res4 > 9 || res3 > -1 && res4 < 0){
                printf("   0%d   %d\n", res3, res4);
                }
                if (res4 < 10 && res3 > 9 || res4 < 0 && res3 > -1){
                printf("   %d   0%d\n", res3, res4 );
                }
                if (res1 < 10 && res2 < 10 && res1 > -1 && res2 > -1){
                printf("   0%d   0%d\n", res3, res4);
                }
                if (res3 < 10 && res4 < 10 && res3 > -1 && res4 > -1){
                printf("   0%d   0%d\n", res3, res4);
                }
                
                if (res1 > 9 && res2 > 9 || res1 < 0 && res2 < 0){
                printf("   %d   %d\n\n", res1, res2);
                }
                if (res3 > 9 && res4 > 9 || res3 < 0 && res4 < 0){
                printf("   %d   %d\n\n", res3, res4);
                }
                e = RealizarNovamente();
                printf("\n");
            break;

            case 3:
                printf("   SUBTRACAO:\n");
                printf("   Digite a segunda matriz:\n");
                printf("   A11: ");
                scanf("   %d", &n);
                printf("   A12: ");
                scanf("   %d", &o);
                printf("   A21: ");
                scanf("   %d", &p);
                printf("   A22: ");
                scanf("   %d", &q);
                printf("\n");
                printf("   A soma das matrizes eh:\n");
                res1 = h+(-n);  
                res2 = i+(-o);
                res3 = j+(-p);
                res4 = k+(-q);
                 if (res1 < 10 && res2 > 9 || res1 > -1 && res2 < 0){
                printf("   0%d   %d\n", res1, res2);
                }
                if (res2 < 10 && res1 > 9 || res2 > -1 && res1 < 0){
                printf("   %d   0%d\n", res1, res2);
                }
                if (res3 < 10 && res4 > 9 || res3 > -1 && res4 < 0){
                printf("   0%d   %d\n", res3, res4);
                }
                if (res4 < 10 && res3 > 9 || res4 < 0 && res3 > -1){
                printf("   %d   0%d\n", res3, res4 );
                }
                if (res1 < 10 && res2 < 10 && res1 > -1 && res2 > -1){
                printf("   0%d   0%d\n", res3, res4);
                }
                if (res3 < 10 && res4 < 10 && res3 > -1 && res4 > -1){
                printf("   0%d   0%d\n", res3, res4);
                }
                
                if (res1 > 9 && res2 > 9 || res1 < 0 && res2 < 0){
                printf("   %d   %d\n\n", res1, res2);
                }
                if (res3 > 9 && res4 > 9 || res3 < 0 && res4 < 0){
                printf("   %d   %d\n\n", res3, res4);
                }
        
                e = RealizarNovamente();
                printf("\n");
            break;

            case 4:
                printf("   MULTIPLICACAO:\n");
                printf("   Digite a segunda matriz:\n");
                printf("   A11: ");
                scanf("   %d", &n);
                printf("   A12: ");
                scanf("   %d", &o);
                printf("   A21: ");
                scanf("   %d", &p);
                printf("   A22: ");
                scanf("   %d", &q);
                printf("   \n");
                printf("   A soma das matrizes eh:\n");

                res1 = h*n+i*p;  
                res2 = h*o+i*q;
                res3 = j*n+k*p;
                res4 = j*o+k*q;
                if (res1 < 10 && res2 > 9 || res1 > -1 && res2 < 0){
                printf("   0%d   %d\n", res1, res2);
                }
                if (res2 < 10 && res1 > 9 || res2 > -1 && res1 < 0){
                printf("   %d   0%d\n", res1, res2);
                
                }
                if (res3 < 10 && res4 > 9 || res3 > -1 && res4 < 0){
                printf("   0%d   %d\n", res3, res4);
                }
                if (res4 < 10 && res3 > 9 || res4 < 0 && res3 > -1){
                printf("   %d   0%d\n", res3, res4 );
                }

                if (res1 < 10 && res2 < 10  && res1 > -1 && res2 > -1){
                printf("   0%d   0%d\n", res3, res4);
                }
                if (res3 < 10 && res4 < 10 && res3 > -1 && res4 > -1){
                printf("   0%d   0%d\n", res3, res4);
                }
                
                if (res1 > 9 && res2 > 9 || res1 < 0 && res2 < 0){
                printf("   %d   %d\n\n", res1, res2);
                }
                if (res3 > 9 && res4 > 9 || res3 < 0 && res4 < 0){
                printf("   %d   %d\n\n", res3, res4);
                }

                e = RealizarNovamente();
                printf("\n");
        break;
    }

} while (e == 1);
}

void AnaliseCombinatoria()
{
    char palavra[20] = "\0";
    char semRepetir[20] = "\0";
    int divisores[10];
    float resultado = 0;

	int n, p, s, i, ip, fatn, fatp, fatp2, p2, A, C, cont, e;
	char r[1];
	printf("   \n");
	printf("   Analise Combinatoria:\n");

do{
    printf("   \n");
    printf("   1 - Arranjo Simples\n");
    printf("   2 - Combinacao\n");
    printf("   3 - Permutacao Simples\n");
    printf("   4 - Principio fundamental da contagem\n");
    printf("   5 - Permutacao com elementos repetidos\n");
    printf("\n");
    printf("   Informe a opcao desejada:");
    scanf("   %d", &s);


    switch (s)
    {
    case 1:

		printf("   Entre com o N: ");
    	scanf("   %d", &n);
    	printf("   Entre com o P: ");
    	scanf("   %d", &p);
    	printf("\n");
		fatn = 1;

		if ( n > p)
		{

       	for (i = 1; i <= n; i = i + 1)
       	{
           fatn = fatn * i;
       	}

		p = n-p;

		fatp = 1;
       	for (i = 1; i <= p; i = i + 1)
       	{
           fatp = fatp * i;
       	}

		A = fatn/fatp;

		printf("   Resultado Arranjo: %d\n", A);
		}
		else
		{
			printf("   Valor invalido, N deve ser maior que P\n");
		}
e = RealizarNovamente();
		break;

    case 2:

    	printf("   Entre com o N: ");
    	scanf("   %d", &n);
    	printf("   Entre com o P: ");
    	scanf("   %d", &p);

    	if ( n > p)
		{

		fatn = 1;
       	for (i = 1; i <= n; i = i + 1)
       	{
           fatn = fatn * i;
       	}

		p2 = p;
		p = n-p;

		fatp = 1;
       	for (i = 1; i <= p; i = i + 1)
       	{
           fatp = fatp * i;
       	}

       	fatp2 = 1;
       	for (i = 1; i <= p2; i = i + 1)
       	{
           fatp2 = fatp2 * i;
       	}

		C = (fatn/fatp) / fatp2;
		printf("   Resultado Combinacao:%d\n", C);
		}
		else
		{
			printf("   Valor invalido N tem que ser maior que P\n");
		}
e = RealizarNovamente();
		break;

		case 3:

		printf("   Entre com o N: ");
    	scanf("   %d", &n);

		fatn = 1;
       	for (i = 1; i <= n; i = i + 1)
       	{
           fatn = fatn * i;
       	}


       	printf("   Resultado Permutacao de N: %d\n", fatn);
e = RealizarNovamente();
       	break;

       	case 4:

       	printf("   Entre com um valor: ");
    	scanf("   %d", &n);
    	cont = n;

       	while ( n != 0)
       	{
       		printf("   Entre com mais um valor ou precione 0 para parar: ");
    		scanf("   %d", &n);
    		if (n != 0)
    		{
				cont = cont * n;
			}
		}
		printf("   Resultado :%d\n", cont);
 e = RealizarNovamente();
		break;

        case 5:
            //limpa as variaveis que o programa não limpa
            strncpy(palavra,"\0",20);
            strncpy(semRepetir,"\0",20);
            for (int x = 0;x<10;x++) divisores[x] = 0;

            printf("\n   Informe uma palavra:");
            scanf(" %s", palavra);

            //faz semRepetir não ter letras repetidas
            for (int x=0,z=0,controle;x<20;x++){
                controle = 0;
                if (palavra[x] == '\0') break;
                for (int y=0;y<20;y++)  if (palavra[x] == semRepetir[y])    controle = 1;
                if (controle == 0) semRepetir[z++] = palavra[x];
            }

            //ve quantas letras se repetem para adicionar aos divisores
            for (int x=0,controle,z=0;x<20;x++){
                if (semRepetir[x] == '\0') break;
                controle = 0;
                for (int y=0;y<20;y++)
                    if  (semRepetir[x] == palavra[y]) controle++;
                if (controle > 1) divisores[z++] = controle;
            }

            //faz a fatoração dos numeros de letras
            resultado = strlen(palavra);
            for (int dividendo = strlen(palavra)-1;dividendo>0;dividendo--){
                resultado *= dividendo;
            }

            //faz a divisões dos numeros fatoriais
            for (int y=0;y<20;y++){
                if (divisores[y] == 0) break;
                for(divisores[y];divisores[y]>0;divisores[y]--)   resultado /= divisores[y];
            }

            printf("   A quantidade de possibilidades eh: %.2f\n\n",resultado);
            e = RealizarNovamente();
        break;

	}
	} while (e == 1);
}

int main() {
    LimparTela();
    char menu[2];
    printf( "             ,ggg,                                                                     ,gggg,                                          \n"
            "            dP  8I                           ,dPYb,                        8I         d8' '8I                                         \n"
            "           dP   88                           IP'`Yb                        8I         88' 'dP                                         \n"
            "          dP    88                           I8  8I                        8I      8888888P                                           \n"
            "         ,8'    88                           I8  8'  gg                    8I         88                                gg            \n"
            "         d88888888   gg,gggg,    gg,gggg,    I8 dP         ,ggg,     ,gggg,8I         88          ,ggggg,    ,gggg,gg          ,gggg, \n"
            "        ,8      88   I8P    Yb   I8P    Yb   I8dP    88   i8   8i   ddd  dY8I    ,aa,_88         dPd  dY8g  dPd  dY8I   88    dPd  dYb\n"
            "  dP   ,8P      Y8   I8'    ,8i  I8'    ,8i  I8P     88   I8, ,8I  i8'    ,8I   dP' '88P        i8'    ,8I i8'    ,8I   88   i8'      \n"
            "  Yb,_,dP       `8b,,I8 _  ,d8' ,I8 _  ,d8' ,d8b,_ _,88,_ `YbadP' ,d8,   ,d8b,  Yb,_,d88b,,_   ,d8,   ,d8',d8,   ,d8I _,88,_,d8,_    _\n"
            "    Y8P*         `Y8PI8 YY88888PPI8 YY88888P8P'PY888P''Y8888PPY888PPY8888P'`Y8   'Y8P'   PY8888'PPY8888PP  P'Y8888PP888''PPY8PPPY88PPP\n"
            "                     I8          I8                                                                              ,d8I'                \n"
            "                     I8          I8                                                                            ,dP'8I                 \n"
            "                     I8          I8                                                                           ,8   8I                 \n"
            "                     I8          I8                                                                           I8   8I                 \n"
            "                     I8          I8                                                                           `8, ,8I                 \n"
            "                     I8          I8                                                                            `Y8P'                  \n\n");

       printf("                                                              Press ENTER to continue\n");
       getchar();
    while(1) {
        LimparTela();
        inicio:;
        printf( "    _____________________________ \n"
                "   |            MENU             |\n"
                "   |1- Somatoria                 |\n"
                "   |2- Logica Proposicional      |\n"
                "   |3- Matriz                    |\n"
                "   |4- Analise Combinatoria      |\n"
                "   |5- Sair                      |\n"
                "   |_____________________________|\n"
                "    Escolha a operacao desejada:");
        scanf("%1s", menu);

        if       (!strcmp(menu,"1")) {
            LimparTela();
            Somatoria();
        }
        else if  (!strcmp(menu,"2")) {
            LimparTela();
            LogicaProposicional();
        }
        else if  (!strcmp(menu,"3")) {
            LimparTela();
            Matriz();
        }
        else if  (!strcmp(menu,"4")) {
            LimparTela();
            AnaliseCombinatoria();
        }
        else if  (!strcmp(menu,"5")) goto fim;
        else  {
            printf("   |=============================|\n");
            printf("   |*******Comando INVALIDO******|\n");
            printf("   |=============================|\n");
            goto inicio;
        }
    }

    fim :   LimparTela();
            printf("\n   |=============================|");
            printf("\n   |*******FIM DO PROGRAMA*******|");
            printf("\n   |=============================|\n\n");
    
    return EXIT_SUCCESS;
}
