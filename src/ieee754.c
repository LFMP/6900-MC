#include "include/ieee754.h"

ieee754 double_to_ieee754(double x){
  ieee754 number;
  number.exp = floorl(log2(x));
  if(x < 0){
    x = x*(-1);
    number.sign = 1;
  }else{
    number.sign = 0;
  }
  number.signif = x/(pow(2, number.exp)) - 1.0;
  return number;
}

long double ieee754_to_double(ieee754 number){
  return ((1 + number.signif) * pow(-1,number.sign) * pow(2,number.exp));
}

void print_ieee754(ieee754 number){
  printf("Sinal: %i\n",number.sign);
  printf("Expoente: %i\n",(int)pow(2,number.exp));
  printf("Mantissa: %0.10lg\n",number.signif);
}