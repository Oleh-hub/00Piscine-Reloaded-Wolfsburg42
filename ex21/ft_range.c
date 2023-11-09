/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:47:31 by oruban            #+#    #+#             */
/*   Updated: 2023/11/09 14:32:32 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : malloc
// • Create a function ft_range which returns an array of ints. This int 
// array should contain all values between min and max.
// • Min included - max excluded.
// • If min´value is greater or equal to max’s value, a null pointer 
// should be returned.

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	if (min > max)
		return (NULL);
	a = (int *) malloc((max - min) * sizeof(max));
	i = 0;
	while (i < max - min)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	int *a;
	int min = -15;
	int max = 15;

	a = ft_range(min, max);
	if (!a)
	{
		printf(" min > max !");
		return 1;
	}
	for (int i = 0; i < max - min; i++)
	{
		printf("%i ", a[i]);
	}
	printf("\n");
	free (a);
}
