/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parshe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:26:27 by jporta            #+#    #+#             */
/*   Updated: 2021/11/23 20:14:34 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_countmalint(t_push *push)
{
	int	y;
	int	count;

	y = 0;
	count = 0;
	while (push->a[y])
	{
		count++;
		y++;
	}
	return (count);
}

int	**ft_mallocint(int **mal, int count)
{
	int	y;
	int	x;

	mal = malloc(sizeof(int *) * count);
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
	y = 0;
	while (y < push->countG)
	{
		x = 0;
		push->amod[y] = malloc(sizeof(int) * 1);
		push->amod[y][x] = ft_atoi(push->a[y]);
		printf("hola: %d\n", *push->amod[y]);
		y++;
	}
}
