/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:07:11 by oruban            #+#    #+#             */
/*   Updated: 2023/11/08 11:36:36 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Create a recursive function that returns the factorial of the 
// number given as a parameter.
// • If there’s an error, the function should return 0.

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	if (0 == nb)
		return (1);
	else
	{
		result = nb;
		result *= ft_recursive_factorial(--nb);
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	for (int i = -1; i < 15; i++)
// 		printf("%i! = %i\n", i, ft_recursive_factorial(i));	
// }
