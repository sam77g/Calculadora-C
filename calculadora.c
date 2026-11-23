#include <stdio.h>
#include "calculadora.h"

float somar(float a, float b ){
  float soma = a + b ;
  return soma ;
};

double dividir(double a, double b){
  if(b == 0){
    printf("Valor inválido \n");
  }else{
    double div = a / b ;
    printf("resultado : %.2lf \n", div);
  };
}

float multiplicar(float a, float b){
  float mult = a*b ;
  return mult ;
};

float subtrair(float a, float b){
  float sub = a - b ;
  return sub ;
}
