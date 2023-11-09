/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:15:39 by oruban            #+#    #+#             */
/*   Updated: 2023/11/07 19:41:30 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Create a function ft_div_mod prototyped like this :
// void ft_div_mod(int a, int b, int *div, int *mod);
// • This function divides parameters a by b and stores the result in the 
// int pointed by div. It also stores the remainder of the division of a 
// by b in the int pointed by mod.

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	int a = 101;
// 	int b = 2;
// 	int *div = malloc(sizeof(int));
// 	int *mod = malloc(sizeof(int));
// 	printf("b4: a=%i, b=%i, div=%p=%i, mod=%p=%i\n",a,b,div,*div,mod,*mod);
// 	ft_div_mod(a, b, div, mod);
// 	printf("after: a=%i, b=%i, div=%p=%i, mod=%p=%i\n",a,b,div,*div,mod,*mod);
// 	free(div);
// 	free(mod);
// }
