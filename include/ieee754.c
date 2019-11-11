#include "ieee754.h"

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

double ieee754_to_double(ieee754 number){
  return (number.signif * pow(-1,number.sign) * pow(2,number.exp));
}

void print_ieee754(ieee754 number){
  printf("Sinal: %i\n",number.sign);
  printf("Expoente: %g\n",pow(2,number.exp));
  printf("Mantissa: %e\n",number.signif);
}

void main(){
  ieee754 number = double_to_ieee754(6.0);
  print_ieee754(number);
}