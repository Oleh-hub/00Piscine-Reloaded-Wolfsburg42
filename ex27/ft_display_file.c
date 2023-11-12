/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:36:11 by oruban            #+#    #+#             */
/*   Updated: 2023/11/12 16:55:03 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Piscine_Reloaded: Turn-in directory : ex27/ 
// Piscine 42July2023 :Turn-in directory : ex00/
// Files to turn in : Makefile, and files needed for your program
// Allowed functions : close, open, read, write
// • Create a program called ft_display_file that displays, on the standard
//  output, only the content of the file given as argument.
// • The submission directory should have a Makefile with the following rules:
//  all,clean, fclean. The binary will be called ft_display_file.
// • The malloc function is forbidden. You can only do this exercise by 
// declaring a fixed-sized array.
// • All files given as arguments will be valid.
// • Error messages have to be displayed on their reserved output followed by 
// a new line.
// • If no argument is given, it should display
// File name missing.
// • If there is more than one argument, it should display
// Too many arguments.
// • If the file cannot be read, it should display
// Cannot read file

#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#define BYTES2READ 256

void	ft_display_file(char *pathname)
{
	int		descriptor;
	int		flags;
	int		count;
	char	buf[BYTES2READ];

	flags = O_RDONLY;
	descriptor = open(pathname, flags);
	if (-1 == descriptor)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	count = 1;
	while (count)
	{
		count = read(descriptor, buf, BYTES2READ);
		write(1, buf, count);
	}
	if (count == -1)
		write(1, "Cannot read file.\n", 18);
	close(descriptor);
}

int	main(int argc, char **argv)
{
	if (1 == argc)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
