/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parshe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:26:27 by jporta            #+#    #+#             */
/*   Updated: 2021/11/24 18:16:30 by jporta           ###   ########.fr       */
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
	mal = malloc(sizeof(int *) * count);
	return (mal);
}

void	ft_saveint(t_push *push)
{
	push->countG = ft_countmalint(push);
	push->amod = ft_mallocint(push->amod, push->countG);
}

void	ft_takeints(t_push *push)
{
	int	y;

	ft_saveint(push);
	y = 0;
	while (y < push->countG)
	{
		push->amod[y] = malloc(sizeof(int) * 1);
		*push->amod[y] = ft_atoi(push->a[y]);
		y++;
	}
}
