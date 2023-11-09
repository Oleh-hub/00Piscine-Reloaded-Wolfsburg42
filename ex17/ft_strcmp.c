/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:27:31 by oruban            #+#    #+#             */
/*   Updated: 2023/11/08 19:17:48 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// • Reproduce the behavior of the function strcmp (man strcmp).
// NAME
//      strcmp, strncmp -- compare strings
// DESCRIPTION
//      The strcmp() and strncmp() functions lexicographically compare the 
// 	 null-terminated strings s1 and s2.
// RETURN VALUES
//      The strcmp() and strncmp() functions return an integer greater than,
// 	 equal to, or less than 0, according as the string s1 is greater than,
// 	 equal to, or less than the string s2.  The comparison is done using
// 	 unsigned characters, so that `\200' is greater than `\0'.

int	ft_strcmp(char *s1, char *s2)
{
	while (((unsigned char) *s1 == (unsigned char) *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char **argv)
// {
// 	if (argc < 3 || argc > 3)
// 	{
// 		printf("Please input 2 arguments.\n");
// 		return (1);
// 	}
// 	printf("strcmp('%s', '%s') = %i\n", argv[1], argv[2], 
// 		strcmp(argv[1], argv[2]));
// 	printf("ft_strcmp('%s', '%s') = %i\n", argv[1], argv[2], 
// 		ft_strcmp(argv[1], argv[2]));
// }
