/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:17:31 by oruban            #+#    #+#             */
/*   Updated: 2023/11/08 16:22:37 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Reproduce the behavior of the function strlen (man strlen).

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>

// int main (int argc, char **argv)
// {
// 	for (int i = 1; i < argc; i++)
// 	{
// 		printf("strlen('%s') = %lu	", argv[i], strlen(argv[i]));
// 		printf("ft_strlen('%s') = %i\n", argv[i], ft_strlen(argv[i]));
// 	}
// }
