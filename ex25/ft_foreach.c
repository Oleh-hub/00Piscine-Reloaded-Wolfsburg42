/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:01:36 by oruban            #+#    #+#             */
/*   Updated: 2023/11/11 15:51:06 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Create the function ft_foreach which, for a given ints array, applies a 
// function on all elements of the array. This function will be applied 
// following the array’s order.
// • For example, the function ft_foreach could be called as follows in order 
// to display all ints of the array :
// ft_foreach(tab, 1337, &ft_putnbr);

void	ft_putnbr(int nb);

void ft_foreach(int *tab, int length, void (*f)(int))
{

}

int main(void)
{
	int *tab = { -2, -1, 0, 1, 2};
	int length = 5;
	void (*f)(int);
	
	

	
}