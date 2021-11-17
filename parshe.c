/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parshe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:26:27 by jporta            #+#    #+#             */
/*   Updated: 2021/11/17 17:49:18 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	ft_countmalint(char **argv)
{
	int	y;
	int	x;
	int	count;

	y = 0;
	count = 0;
	while (argv[++y])
	{
		x = -1;
		while (argv[y][++x])
		{	
			if (argv[y][x] != ' ' && argv[y][x] != '\0')
				count++;
		}
	}
	return (count);
}

int	**ft_mallocint(int **mal, int count)
{
	int	y;
	int	x;

	y = -1;
	mal = malloc(sizeof(int *) * count);
	return (mal);
}

void	ft_saveint(t_push *push)
{	
	int	count;

	count = 0;
	count = ft_countmalint(push->a);
	push->amod = ft_mallocint(push->amod, count);
}

void	ft_takeints(t_push *push)
{
	ft_saveint(push);
	ft_init(push);
}
