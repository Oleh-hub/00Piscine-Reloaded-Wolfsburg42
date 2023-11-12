/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:23:05 by oruban            #+#    #+#             */
/*   Updated: 2023/11/12 09:27:51 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function ft_count_if which will return the number of elements 
// of the array that return 1, passed to the function f.
// • The array will be delimited by 0.

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(tab[i] != NULL)
	{
		if(1 == f(tab[i]))
			j++;
		i++;
	}
	return(j)
}
