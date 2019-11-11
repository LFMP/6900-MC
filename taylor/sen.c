#include "sen.h"

void sen(double x, ieee754 *res){
  int y = 0;
  int k = (x - y) / PI_sobre_2;
  double xk = x - k * PI_sobre_2;
  double resto = k%4;

  if (resto == 0){
    *res = double_to_ieee754(x - (pow(x,3)/fatorial03) + (pow(x,5)/fatorial05) - (pow(x,7)/fatorial07) + (pow(x,9)/fatorial09) - (pow(x,11)/fatorial11));
  }else if(resto == 1){
    *res = double_to_ieee754(cos(xk));
  }else if(resto == 2){
    *res = double_to_ieee754(-(x - (pow(x,3)/fatorial03) + (pow(x,5)/fatorial05) - (pow(x,7)/fatorial07) + (pow(x,9)/fatorial09) - (pow(x,11)/fatorial11)));
  }else if(resto == 3){
    *res = double_to_ieee754(- cos(xk));
  }
}