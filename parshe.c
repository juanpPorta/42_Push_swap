/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parshe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:26:27 by jporta            #+#    #+#             */
/*   Updated: 2021/12/01 20:00:31 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checnums(t_push *push)
{
	int	i;
	int	y;

	y = 0;
	i = 0;
	while (y < push->countg)
	{
		while (i < push->countg - 1)
		{
			if (y == i)
				i++;
			if (*push->amod[y] == *push->amod[i])
				ft_error(0);
			i++;
		}
		i = 0;
		y++;
	}
}

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

void	ft_saveint(t_push *push)
{
	push->countg = ft_countmalint(push);
	push->amod = calloc(sizeof(int *), push->countg + 1);
}

void	ft_takeints(t_push *push)
{
	int	y;

	ft_saveint(push);
	y = 0;
	while (y < push->countg)
	{
		push->amod[y] = malloc(sizeof(int));
		*push->amod[y] = ft_atoi(push->a[y]);
		y++;
	}
	ft_checnums(push);
}
