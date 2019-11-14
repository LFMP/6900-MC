from math import *
import math


def serie(x):
	res = 0
	for i in range(50):
		res = res + (
		    (((-1)**i) * factorial(2 * i)) /
		    ((1 - 2 * i) * (factorial(i)**2) * (4**i))
		) * x**i
	return res


def quad(x):
	k = ceil(log2(x))
	xk = x / 2**k
	return 2**(k / 2) * serie(xk - 1)


def Num2IEEE(x):
	if x > 0:
		e = int(math.log(x, 2))
		real = math.pow(2, (math.log(x, 2) - e))
		s = 1
	else:
		e = int(math.log(-x, 2))
		real = math.pow(2, (math.log(-x, 2) - e))
		s = -1

	m = real - 1

	return s, e, m, real


def ieeQuad(x):
	sinal, exp, m, real = Num2IEEE(x)
	return 2**((exp - 1) / 2) * serie(m) * math.sqrt(2)