/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:05:12 by oruban            #+#    #+#             */
/*   Updated: 2023/11/07 19:14:06 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Create a function that swaps the value of two integers whose addresses
//  are entered as parameters.

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>

// int main(void)
// {
// 	int A = 1;
// 	int B = 111;
// 	printf("   b4: A = %i, B = %i\n", A, B);
// 	ft_swap(&A, &B);
// 	printf("after: A = %i, B = %i\n", A, B);
// }
