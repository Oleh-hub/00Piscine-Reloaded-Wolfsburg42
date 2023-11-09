/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:42:40 by oruban            #+#    #+#             */
/*   Updated: 2023/11/09 13:45:33 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : malloc
// • Reproduce the behavior of the function strdup (man strdup).

// NAME
//      strdup, strndup -- save a copy of a string
// SYNOPSIS
//      #include <string.h>
//      char *strdup(const char *s1);
// DESCRIPTION
// The strdup() function allocates sufficient memory for a copy of the
// string s1, does the copy, and returns a pointer to it.  The pointer may
// subsequently be used as an argument to the function free(3).
// If insufficient memory is available, NULL is returned and errno is 
// set to ENOMEM.
// SEE ALSO
//      free(3), malloc(3)

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char *dest;	
// 	for (int i = 1; i < argc; i ++)
// 	{
// 		printf("%i    strdup: '%s' '%s'\n", i, argv[i], strdup(argv[i]));
// 		dest = ft_strdup(argv[i]);
// 		printf("%i ft_strdup: '%s' '%s'\n", i, argv[i], dest);
// 		free(dest);
// 	}
// }
