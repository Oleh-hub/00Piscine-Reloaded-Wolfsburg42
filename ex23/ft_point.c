// DO NOT FORGET to install google translator plagin into chrome editor!

// • Create a file ft_point.h that’ll compile the following main :
// #include "ft_point.h"

// typedef struct s_point {
// 	int x;
// 	int y;
// }	t_point;

#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>

int main(void)
{
	t_point point;
	set_point(&point);
	printf("%i\n", point.x);
	printf("%i\n", point.y);
	return (0);
}
