#include "include/sen.h"

void main(){
  ieee754 res;
  sen(PI_sobre_2, &res);
  print_ieee754(res);
}