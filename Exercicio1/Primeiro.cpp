#include "Primeiro.h"

void Primeiro::setfdexix(float Fx)
{
	// f(x) = x^2 - 3x - 5
	result = (Fx * Fx) - (3 * Fx) + 5;
	x = result;
}	

float Primeiro::getfdexix()
{
	return x;
}


