#include "include/sqrtd.h"

int fatorial(int n){
  int fat;
  for(fat = 1; n > 1; n = n - 1){
    fat = fat * n;
  }
  return fat;
}

double serieraiz(double xk){
  double soma = 0;
  for (int i = 1; i < 34; i++){
    soma += ((pow(-1,i)*fatorial(2*i))/(pow(4,i)*pow(fatorial(i),2)*(1-(2*i))))*pow(xk,i);
  }
  return soma;
}

void sqrtd(ieee754 *x,ieee754 *res){
  if(((int)x->exp)%2 == 0){
    double xk = (1 + x->signif);
    *res = double_to_ieee754(pow(2,x->exp/2)*serieraiz(xk));
  }else{
    double xk = (1 + x->signif);
    *res = double_to_ieee754(raiz2*pow(2,(x->exp-1)/2)*serieraiz(xk));
  }
}