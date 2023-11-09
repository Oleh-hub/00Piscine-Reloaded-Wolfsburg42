/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:37:47 by oruban            #+#    #+#             */
/*   Updated: 2023/11/08 15:01:42 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Create a function that returns the square root of a number (if it exists),
// or 0 if the square root is an irrational number.
// • Your function must return its result in less than two seconds.

int	ft_sqrt(int nb)
{
	int	i;
	int	quadrat;

	i = 1;
	quadrat = 1;
	while (quadrat < nb)
	{
		i++;
		quadrat = i * i;
	}
	if (quadrat == nb)
		return (i);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	// int nb = 9;
// 	for (int i = 1; i < argc; i++)
// 	{
// 		printf("sqrt(%i) = %i\n", atoi(argv[i]), ft_sqrt(atoi(argv[i])));
// 	}
// }
