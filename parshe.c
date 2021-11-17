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

int	ft_countmalint(t_push *push)
{
	int	y;
	int	x;
	int	count;

	y = -1;
	count = 0;
	while (push->a[++y])
		count++;
	return (count);
}

int	**ft_mallocint(int **mal, int count)
{
	int	y;
	int	x;

	y = -1;
	mal = malloc(sizeof(int *) * count);
	while (++y <= count)
	{
		mal[y] = malloc(sizeof(int *) * 1);
	}
	return (mal);
}

void	ft_saveint(t_push *push)
{	
	int	count;

	count = 0;
	count = ft_countmalint(push);
	push->countG = count;
	push->amod = ft_mallocint(push->amod, count);
}

void	ft_takeints(t_push *push)
{
	int	y;
	int	x;

	y = -1;
	ft_saveint(push);
	ft_init(push);
	while (push->a[++y])
	{
		x = 0;
		push->amod[y][x] = ft_atoi(push->a[y]);
	}
	y = -1;
	x = 0;
	while (push->amod[++y] && push->amod[y][x])
	{
		printf("este: %d\n", push->amod[y][x]);
	}
}
