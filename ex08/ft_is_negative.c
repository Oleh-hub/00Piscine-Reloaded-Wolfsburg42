/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:00:21 by oruban            #+#    #+#             */
/*   Updated: 2023/11/09 15:46:44 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : ft_putchar
// • Create a function that displays ’N’ or ’P’ depending on the integer’s sign
//  entered as a parameter. If n is negative, display ’N’. If n is positive or
// null, display ’P’.

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// int	main(void)
// {
// 	for(int i = -5; i < 5; i++)
// 	{
// 		ft_is_negative(i);
// 		write(1, "\n", 1);
// 	}
// }
