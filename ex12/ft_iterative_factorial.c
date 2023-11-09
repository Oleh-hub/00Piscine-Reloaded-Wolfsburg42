/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:42:41 by oruban            #+#    #+#             */
/*   Updated: 2023/11/08 09:08:28 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Files to turn in : ft_iterative_factorial.c
// Allowed functions : None
// • Create an iterated function that returns a number. This number is the 
// result of a factorial operation based on the number given as a parameter.
// • If there’s an error, the function should return 0.
// • Here’s how it should be prototyped :
// int ft_iterative_factorial(int nb);
// • Your function must return its result in less than two seconds.

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb--;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	for (int i = -1; i < 15; i++)
// 		printf("%i! = %i\n", i, ft_iterative_factorial(i));	
// }
