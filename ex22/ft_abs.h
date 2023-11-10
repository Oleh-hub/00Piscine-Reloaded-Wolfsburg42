/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:48:29 by oruban            #+#    #+#             */
/*   Updated: 2023/11/10 22:14:44 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a macro ABS which replaces its argument by it absolute value :
// #define ABS(Value)

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value)	(Value *(Value > 0) + ((-Value) * (Value < 0)))

#endif

// ft_abs.c
// ========
// #include "ft_abs.h"
// #include <stdio.h>

// int main(void)
// {
// 	printf("%d ", ABS(-100));
// 	printf("\n");

// 	int i = -101;

// 	ABS(i);
// 	printf("%d ", ABS(i));
// 	printf("\n");

// 	i = 50;

// 	ABS(i);
// 	printf("%d ", i);
// 	printf("\n");
// }
