// #include "include/sen.h"
// #include "include/coss.h"
//#include "include/e_x.h"
//include "include/lnd.h"
#include "include/sqrtd.h"

void main(){
  ieee754 res;
  ieee754 e = double_to_ieee754(9);
  printf("###############################\n");
  print_ieee754(e);
  printf("###############################\n");
  printf("sqrt:\n");
  sqrtd(&e, &res);
  print_ieee754(res);
  // res = double_to_ieee754(1451);
  // print_ieee754(res);
  // printf("%g\n",ieee754_to_double(res));
}