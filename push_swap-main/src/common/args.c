/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaner <mtaner@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:49:58 by mtaner            #+#    #+#             */
/*   Updated: 2023/06/04 15:49:58 by mtaner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <common/common.h>

void	read_args(int argc, char **argv, t_mem *mem)
{
	int	j;
	int	i;
	int	prev_space;

	i = 1;
	prev_space = 1;
	while (i < argc)
	{
		prev_space = 1;
		j = -1;
		while (argv[i][++j])
		{
			if (argv[i][j] != '+' && argv[i][j] != '-' && argv[i][j] != ' '
				&& !ft_isdigit(argv[i][j]))
				exit_error(mem);
			if (prev_space == 1 && argv[i][j] != ' ')
			{
				push_init(&(mem->a), ft_atoi(argv[i] + j, mem), -1, mem);
				prev_space = 0;
			}
			prev_space = argv[i][j] == ' ';
		}
		i++;
	}
}
