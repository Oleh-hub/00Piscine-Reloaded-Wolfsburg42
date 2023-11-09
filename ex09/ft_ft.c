/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:35:46 by oruban            #+#    #+#             */
/*   Updated: 2023/11/07 19:02:17 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Create a function that takes a pointer to int as a parameter, and 
// sets the value "42" to that int.

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// #include <stdio.h>

// int main(void)
// {
// 	int *n;
// 	int i = 5;

// 	n = &i;	
// 	printf("%p %i\n", n, *n);
// 	ft_ft(n);
// 	printf("%p %i\n", n, *n);
// }
