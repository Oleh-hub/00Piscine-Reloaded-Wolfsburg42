/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:22:49 by oruban            #+#    #+#             */
/*   Updated: 2023/11/09 15:48:00 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : ft_putchar
// • We’re dealing with a program here, you should therefore have a function 
// main in your .c file.
// • Create a program that displays its given arguments.
// • Example :
// $>./a.out test1 test2 test3
// test1
// test2
// test3
// $>

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);	
// }

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
