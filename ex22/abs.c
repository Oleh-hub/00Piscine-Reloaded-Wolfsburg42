// • Create a macro ABS which replaces its argument by it absolute value :
// #define ABS(Value)

//  #define ABS(Value)	(Value *(Value > 0) + ((-Value) * (Value < 0)))

#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	printf("%d ", ABS(-100));
	printf("\n");

	int i = -101;

	ABS(i);
	printf("%d ", ABS(i));
	printf("\n");

	i = 50;
	
	ABS(i);
	printf("%d ", i);
	printf("\n");
}
