#ifndef ieee754

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ieee754{
  int sign;
  int exp;
  double signif;
} ieee754;

ieee754 double_to_ieee754(double x);

double ieee754_to_double(ieee754 number);

void print_ieee754(ieee754 number);
#endif