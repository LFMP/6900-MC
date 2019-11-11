#include "include/e_x.h"

double calc_e(double x){
  return (1 + x + (pow(x,2)/fatorial02) + (pow(x,3)/fatorial03) + (pow(x,4)/fatorial04) + (pow(x,5)/fatorial05) + (pow(x,6)/fatorial06) + (pow(x,7)/fatorial07) + (pow(x,8)/fatorial08) + (pow(x,9)/fatorial09) + (pow(x,10)/fatorial10) + (pow(x,11)/fatorial11) + (pow(x,12)/fatorial12) + (pow(x,13)/fatorial13) + (pow(x,14)/fatorial14) + (pow(x,15)/fatorial15));
}
void e(double x,ieee754 *res){
  double coef = log2_e;
  double k = (coef - x) / (-coef);
  double x1 = x - k * coef;           
  *res = double_to_ieee754(pow(2,k) * calc_e(x1));
}