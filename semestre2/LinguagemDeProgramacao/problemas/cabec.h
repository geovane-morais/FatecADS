#ifndef cabec
#define cabec

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//funcaExtra.c

//Limpa o console tanto de windows quanto linux
void LimparTela();

//Fim do funcaExtra.c

//Problema1.c

int contCandidatos;

//Definir o tamanho maximo do vetor
#define T 100
#define Q 50

//Executa o codigo do problema1
void problema1();

//tipo ponteiro pra evitar consumo desnecessario de memoria
typedef struct Candidato *pcandidato;

//Definir um valor de 100 posicoes para armazenar um ponteiro
//para um aluno
pcandidato vCandidatos[T];

//rotina para iniciarlizar o vetor de ponteiros com nulo
void inicializar();

//rotina para ler os dados do usuario
void ler(int p);

//imprimir os dados de um aluno procurado
void imprimir(int CodInf);

//imprimir os dados de todos os alunos cadastrados
void imprimirTodos(char* pgabarito);

//Fim do Problema1.c

//Problema4.c

//Executa o codigo do problema4
void problema4();

//define o tamanho da mensagem recebida
#define TamVet 256

//Variaveis utilizadas
char msg[TamVet];   //msg a ser criptografada
char msgInv[TamVet];//recebe valor invertido de msg no Passo2
char rzn;           //recebe parametro de realizar novamente

//Executa o primeiro processamento de criptografia
void Passo1(char *x);

//Executa o segundo processamento de criptografia
void Passo2(char *x);

//Executa o terceiro processamento de criptografia
void Passo3(char *x);

//Verifica se o caracter eh letra minuscula ou maiuscula
//Caso verdadeiro retorna 1, caso contrario retorna 0
int AnalisarChar (char a);

//Atribui caracteres nulos em toda a string
void LimparChar(char *x);

//Fim do Problema2.c




#endif // cabec
