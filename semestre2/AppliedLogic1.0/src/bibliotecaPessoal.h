#ifndef bibliotecaPessoal
#define bibliotecaPessoal

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>


void Funcao();
void Derivada();
void Integral();
void Matrizes();
void Ordenar();
void LimparTela();
int RealizarNovamente();

void OrganizaFloat(float *numero,int NumerodeArray);
double Fx(double x, double k,int opcao);
double CalcularIntegral(int a, int b, int precisao,int k, int opcao);
double radianoParaGraus (double rad);
double grausParaRadianos(double angulo);

#endif

