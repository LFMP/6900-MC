#include "include/coss.h"

double coss(double x){
  return 1 - (pow(x,2)/fatorial02) + (pow(x,4)/fatorial04) - (pow(x,6)/fatorial06) + (pow(x,8)/fatorial08) - (pow(x,10)/fatorial10);
}