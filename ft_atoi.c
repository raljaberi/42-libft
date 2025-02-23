/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raljaber <raljaber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:46:30 by raljaber          #+#    #+#             */
/*   Updated: 2023/12/22 11:46:25 by raljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(long long result, int sign, char x)
{
	if (sign == 1)
	{
		if ((result == LLONG_MAX / 10 && x > '7') || result > LLONG_MAX / 10)
			return (-1);
	}
	else if (sign == -1)
	{
		if ((result == LLONG_MAX / 10 && x > '8') || result > LLONG_MAX / 10)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long long	result;
	int			sign;
	int			overflow;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		overflow = check_overflow(result, sign, *str);
		if (overflow != 1)
			return (overflow);
		result = (result * 10) + (*str - '0');
		str++;
	}
	return ((int)result * sign);
}
