// • Create a macro ABS which replaces its argument by it absolute value :
// #define ABS(Value)

 #define ABS(Value)		\
	if (Value < 0)		\
		Value = -Value;	\
	else				\
		Value = Value;


// #include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int i = -100;

	ABS(i);
	printf("%d ", i);
	printf("\n");

	i = 100;
	
	ABS(i);
	printf("%d ", i);
	printf("\n");
}
