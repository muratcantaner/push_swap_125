/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaner <mtaner@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:49:58 by mtaner            #+#    #+#             */
/*   Updated: 2023/06/04 15:49:58 by mtaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

int	list_size(t_list *l)
{
	int	i;

	i = 0;
	while (l)
	{
		i++;
		l = l->next;
	}
	return (i);
}

t_list	*get_last(t_list *l)
{
	if (l == NULL)
		return (NULL);
	while (l->next)
	{
		l = l->next;
	}
	return (l);
}

int	list_contains_value(t_list *l, int value)
{
	while (l)
	{
		if (l->value == value)
			return (1);
		l = l->next;
	}
	return (0);
}

int	is_ordered(t_mem *m)
{
	int		prev;
	t_list	*l;

	if (m->b)
		return (0);
	if (!m->a)
		return (1);
	l = m->a;
	prev = l->value;
	while (l)
	{
		if (prev > l->value)
			return (0);
		prev = l->value;
		l = l->next;
	}
	return (1);
}
