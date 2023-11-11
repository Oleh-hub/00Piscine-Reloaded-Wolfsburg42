/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:01:36 by oruban            #+#    #+#             */
/*   Updated: 2023/11/11 18:16:13 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Create the function ft_foreach which, for a given ints array, applies a 
// function on all elements of the array. This function will be applied 
// following the array’s order.
// • For example, the function ft_foreach could be called as follows in order 
// to display all ints of the array :
// ft_foreach(tab, 1337, &ft_putnbr);

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

void ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;
	
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int main(void)
{
	int tab[] = {-2, -1, 0, 1, 2, 3, 4, 5};
	int length = 7;
	
	ft_foreach(tab, length, ft_putnbr);
}
