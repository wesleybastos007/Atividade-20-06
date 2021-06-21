#ifndef comp
#define comp

typedef struct tipoComplexos{
  float parteReal, parteImaginaria;
} tComplexos;

      tComplexos soma(tComplexos a, tComplexos b);


        tComplexos subtracao(tComplexos a, tComplexos b);


           tComplexos multiplicacao(tComplexos a, tComplexos b);


             tComplexos divisao(tComplexos a, tComplexos b);


     float modulo(tComplexos x);

     void lerNumero(tComplexos *n);

 #endif
