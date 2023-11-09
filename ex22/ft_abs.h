// • Create a macro ABS which replaces its argument by it absolute value :
// #define ABS(Value)

#define ABS(Value)		\
	if (Value < 0)		\
		Value = -Value;	\
	else				\
		Value = Value;
