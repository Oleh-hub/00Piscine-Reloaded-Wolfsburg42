/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oruban <oruban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:18:03 by oruban            #+#    #+#             */
/*   Updated: 2023/11/10 19:18:03 by oruban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a file ft_point.h that’ll compile the following main :
// #include "ft_point.h"
// void set_point(t_point *point)
// {
// point->x = 42;
// point->y = 21;
// }
// int main(void)
// {
// t_point point;
// set_point(&point);
// return (0);
// }
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif
