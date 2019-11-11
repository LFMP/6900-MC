#include "include/e_x.h"

double calc_e(double x){
  return (1 + x + pow(2,fatorial02) + pow(3,fatorial03) + pow(4,fatorial04) + pow(5,fatorial05) + pow(6,fatorial06) + pow(7,fatorial07) + pow(8,fatorial08) + pow(9,fatorial09) + pow(10,fatorial10) + pow(11,fatorial11) + pow(12,fatorial12) + pow(13,fatorial13) + pow(14,fatorial14) + pow(15,fatorial15));
}
ieee754 e(double x){
  double coef = log2(E);
  double k = (coef - x) / (-coef);
  double x1 = x - k * coef;
  return double_to_ieee754(pow(2,k) * calc_e(x1));
}