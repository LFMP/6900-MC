#include "include/lnd.h"

double serie(double xk){
  double soma=0;
  for (int i = 1; i < 100; i++){
    soma += (pow(-1,(i+1)) / i) * pow((xk-1),i);
  }
}

void lnd(ieee754 *x,ieee754 *res){
  double k = x->exp;
  double xk = (1 + x->signif);
  *res = double_to_ieee754((x->exp * log2_e) + serie(xk));
}