/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaner <mtaner@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:49:58 by mtaner            #+#    #+#             */
/*   Updated: 2023/06/04 15:49:58 by mtaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	rotate_b_a(t_mem *mem)
{
	put_top_to_bottom(&(mem->a));
	put_top_to_bottom(&(mem->b));
	if (mem->print)
		ft_putstr("rr");
}

void	ft_puterr(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
		i++;
	n = '\n';
	write(2, str, i);
	write(2, &n, 1);
}
