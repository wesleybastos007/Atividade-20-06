#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

using namespace std;


tComplexos soma(tComplexos a, tComplexos b);
tComplexos subtracao(tComplexos a, tComplexos b);
tComplexos multiplicacao(tComplexos a, tComplexos b);
tComplexos divisao(tComplexos a, tComplexos b);
float modulo(tComplexos x);

void lerNumero(tComplexos *n);

tComplexos soma(tComplexos a, tComplexos b){
  tComplexos resultado;
  resultado.parteReal = a.parteReal + b.parteReal;
  resultado.parteImaginaria = a.parteImaginaria + b.parteImaginaria;
  return resultado;
}

tComplexos subtracao(tComplexos a, tComplexos b){
  tComplexos resultado;
  resultado.parteReal = a.parteReal - b.parteReal;
  resultado.parteImaginaria = a.parteImaginaria - b.parteImaginaria;
  return resultado;
}

tComplexos multiplicacao(tComplexos a, tComplexos b){
  tComplexos resultado;
  resultado.parteReal = (a.parteReal * b.parteReal) - (a.parteImaginaria * b.parteImaginaria);
  resultado.parteImaginaria = (a.parteReal * b.parteImaginaria) + (a.parteImaginaria * b.parteReal);
  return resultado;
}

tComplexos divisao(tComplexos a, tComplexos b){
  tComplexos resultado;
  resultado.parteReal = (((a.parteReal * b.parteReal) + (a.parteImaginaria * b.parteImaginaria)) / (b.parteReal * b.parteReal + b.parteImaginaria * b.parteImaginaria));
  resultado.parteImaginaria = ((-(a.parteReal * b.parteImaginaria) + (a.parteImaginaria * b.parteReal )) / (b.parteReal * b.parteReal + b.parteImaginaria * b.parteImaginaria));
  return resultado;
}

float modulo(tComplexos x){
  return sqrt(x.parteReal * x.parteReal + x.parteImaginaria * x.parteImaginaria);
}

void lerNumero(tComplexos *n){
  cout << "Digite a parte real:";
  cin >> (*n).parteReal;
  cout << "Digite a parte imaginaria:";
  cin >> (*n).parteImaginaria;
}
