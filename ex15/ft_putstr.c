/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:03:00 by oruban            #+#    #+#             */
/*   Updated: 2023/11/09 15:51:09 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : ft_putchar
// • Create a function that displays a string of characters on the 
// standard output.

// #include <unistd.h>

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	for (int i = 1; i < argc; i++)
// 	{
// 		ft_putstr(argv[i]);
// 		write(1, "\n", 1);
// 	}
// }
