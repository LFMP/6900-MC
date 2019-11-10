#include "ieee754.h"

ieee754 double_to_ieee754(double x){
  ieee754 number;
  int exp, i;

  if (x>=0){
    number.sign = '0';
  }else{
    number.sign = '1';
  }
  x = frexp(x,&exp);
	exp += 1024;

  for(i=10; i>=0; --i){
		if(exp & 1){
      number.exp[i] = '1';
    }
		else{
      number.exp[i] = '0';
    }
		exp /= 2;
	}
	number.exp[11] = '\0';

  x *= 2;
  x -= 1.000000000000000;

  for(i=0; i<52; ++i){
		x *= 2;

		if(x >= 1.0000000000000000){
			number.signif[i] = '1';
			x -= 1.000000000000000;
		}
		else{
			number.signif[i] = '0';
		}
	}
	number.signif[i] = '\0';

	return number;
}

double ieee754_to_double(ieee754 number){
  if(number.sign == '0'){
    return (strtol(number.signif,NULL,2) * pow(2,strtol(number.exp,NULL,2)));
  }else{
    return (strtol(number.signif,NULL,2) * strtol(number.exp,NULL,2)-1023) * -1;
  }
  
}

void print_ieee754(ieee754 number){
  printf("Sinal: %c\n",number.sign);
  printf("Expoente: %s\n",number.exp);
  printf("Mantissa: %s\n",number.signif);
}