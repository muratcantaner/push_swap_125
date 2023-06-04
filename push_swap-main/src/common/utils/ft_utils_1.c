/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaner <mtaner@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:49:58 by mtaner            #+#    #+#             */
/*   Updated: 2023/06/04 15:49:58 by mtaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str, t_mem *mem)
{
	int		ne;
	long	nbr;

	nbr = 0;
	ne = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			ne *= -1;
		++str;
	}
	--str;
	while (++str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - '0');
		if ((ne == 1 && nbr > 0x7FFFFFFF) || (ne == -1 && nbr > 0x80000000))
			exit_error(mem);
	}
	return ((int)(nbr * ne));
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
