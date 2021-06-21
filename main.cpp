#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"
using namespace std;

int main() {
  int op;
  tComplexos resul, a, b;
    float mod;

    lerNumero(&a);
    lerNumero(&b);

    cout << "Escolha uma opcao:\n";
    cout << "1 - Somar\n";
    cout << "2 - Subtracao\n";
    cout << "3 - Multiplicacao\n";
    cout << "4 - Divisao\n";
    cout << "5 - Modulo\n";
     cin >> op;
       switch (op){
         case 1:
         resul = soma(a,b);
         break;
         case 2:
         resul = subtracao(a,b);
         break;
         case 3:
        resul = multiplicacao(a,b);
         break;
        case 4:
        resul = divisao(a,b);
        break;
        case 5:
        mod = modulo(a);
        break;
        default:
        cout << "Opcao invalida!"<<"  \n\n\n ";
        break;
  }

  if(op == 5){
    cout << "Modulo do Primeiro numero = " << mod;
  }else{
    cout << "Parte real = " << resul.parteReal;
    cout << "\nParte imaginaria = " << resul.parteImaginaria<<"i";
  }

  return 0;
}