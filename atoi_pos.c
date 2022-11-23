/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:06:44 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/11/23 13:06:56 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_pos(char *str, int *pos)
{
	unsigned long int	sum;
	int					sign;

	sum = 0;
	sign = 1;
	if (str[*pos] == '-' || str[*pos] == '+')
	{
		if (str[*pos] == '-')
			sign *= -1;
		*pos += 1;
	}
	while (str[*pos] >= '0' && str[*pos] <= '9')
	{
		sum = - '0' + sum * 10 + str[*pos];
		*pos += 1;
	}
	return (sign * sum);
}