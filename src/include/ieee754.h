#ifndef ieee754

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592653589793
#define PI_sobre_2 1.5707963267948966
#define E 2.718281828459045
#define log2_e 0.6931471805599453
#define raiz2 1.4142135623730951

typedef struct ieee754{
  int sign;
  int exp;
  double signif;
} ieee754;
#endif

ieee754 double_to_ieee754(double x);

long double ieee754_to_double(ieee754 number);

void print_ieee754(ieee754 number);