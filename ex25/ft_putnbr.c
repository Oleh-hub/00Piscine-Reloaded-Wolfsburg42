/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:42:48 by oruban            #+#    #+#             */
/*   Updated: 2023/11/11 15:42:33 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allowed functions : write
• Create a function that displays the number entered as a parameter. 
The function has to be able to display all possible values within an int type 
variable.
• Here’s how it should be prototyped :
void ft_putnbr(int nb);
• For example:
◦ ft_putnbr(42) displays "42".*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	output;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	output = nb % 10 + '0';
	write(1, &output, 1);
}

// #include <stdio.h>
// #include <limits.h>

// int main(void)
// {
// 	int nb = 0;
	
// 	printf("The INT_MIN is: %d\n", INT_MIN);
// 	printf("The INT_MAX is: %d\n", INT_MAX);
// 	printf("\n");
// 	printf("The number is: %d \n", nb);
// 	printf("The string is: ");
// 	printf("\n");
// 	ft_putnbr( nb );
// 	printf("\n");
	
// 	nb = INT_MIN;
// 	printf("The number is: %d \n", nb);
// 	printf("The string is: ");
// 	printf("\n");
// 	ft_putnbr( nb );
// 	printf("\n");
	
// 	nb = INT_MAX;
// 	printf("The number is: %d \n", nb);
// 	printf("The string is: ");
// 	printf("\n");
// 	ft_putnbr( nb );
// 	printf("\n");

// 	nb = -3;
// 	printf("The number is: %d \n", nb);
// 	printf("The string is: ");
// 	printf("\n");
// 	ft_putnbr( nb );
// 	printf("\n");

// 	nb = 1;
// 	printf("The number is: %d \n", nb);
// 	printf("The string is: ");
// 	printf("\n");
// 	ft_putnbr( nb );
// 	printf("\n");

// 	nb = 99;
// 	printf("The number is: %d \n", nb);
// 	printf("The string is: ");
// 	printf("\n");
// 	ft_putnbr( nb );
// 	printf("\n");

// 	return 0;
// }
