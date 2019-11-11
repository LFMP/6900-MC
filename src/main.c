// #include "include/sen.h"
// #include "include/coss.h"
//#include "include/e_x.h"
#include "include/lnd.h"

void main(){
  ieee754 res;
  ieee754 e = double_to_ieee754(5);
  printf("ln:\n");
  lnd(&e, &res);
  print_ieee754(res);
  printf("%lg\n",ieee754_to_double(res));
  
  // res = double_to_ieee754(1451);
  // print_ieee754(res);
  // printf("%g\n",ieee754_to_double(res));
}