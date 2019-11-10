#ifndef ieee754

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ieee754{
  char sign;
  char exp[12];
  char signif[53];
} ieee754;

ieee754 double_to_ieee754(double x);

double ieee754_to_double(ieee754 number);

void print_ieee754(ieee754 number);
#endif