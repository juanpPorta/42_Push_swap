/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_undred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:52:44 by jporta            #+#    #+#             */
/*   Updated: 2021/12/02 04:13:45 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_primero2(t_push *push, int input)
{
	if (input == 1)
	{
		while (*push->bmod[0] != push->maxnum)
			ft_rb(push, 0);
		ft_pa(push);
		push->maxnum = push->countbmod - 1;
	}
	if (input == 0)
	{
		while (*push->bmod[0] != push->maxnum)
			ft_rrb(push, 0);
		ft_pa(push);
		push->maxnum = push->countbmod - 1;
	}
}

void	ft_recolocate(t_push *push)
{
	int	y;
	int	count;
	int	w;

	push->maxnum = push->countbmod - 1;
	while (push->countbmod != 0)
	{
		y = 0;
		w = push->countbmod - 1;
		while (*push->bmod[y] != push->maxnum)
			y++;
		while (*push->bmod[w] != push->maxnum)
			w--;
		if (y < push->countbmod - w)
			ft_primero2(push, 1);
		else
			ft_primero2(push, 0);
	}
}

void	ft_calc(t_push *push, int count)
{
	int	y;

	y = (count + 1) / 2;
	if (push->countbmod == 0)
		ft_pb(push);
	else if (*push->amod[0] < y)
		ft_pb(push);
	else if (*push->amod[0] >= y)
	{
		ft_pb(push);
		ft_rb(push, 0);
	}
}

void	ft_sort_medium(t_push *push)
{
	int	y;
	int	count;
	int	w;
	int	yx;
	int	xD;

	count = 19;
	while (push->countamod != 0)
	{
		while (push->countamod > push->countG - (count + 1))
		{
			y = 0;
			w = push->countamod - 1;
			while (*push->amod[y] > count)
				y++;
			yx = *push->amod[y];
			while (*push->amod[w] > count)
				w--;
			xD = *push->amod[w];
			if (y < w)
				while (*push->amod[0] != yx)
					ft_ra(push, 0);
			else
				while (*push->amod[0] != xD)
					ft_rra(push, 0);
			ft_calc(push, count);
		}
		count += 20;
	}
	ft_recolocate(push);
}

/* void	ft_sort_max(t_push *push)
{
	int	y;
	int	count;
	int	w;

	count = 19;
	while (push->countamod != 0)
	{
		y = 0;
		w = push->countamod - 1;
		while (*push->amod[y] >= count)
			y++;
		y = *push->amod[y];
		while (*push->amod[w] >= count)
			w--;
		w = *push->amod[w];
		if (y < push->countamod - w)
			while (*push->amod[0] != y)
				ft_ra(push, 0);
		else
			while (*push->amod[0] != w)
				ft_rra(push, 0);
		ft_pb(push);
		count += 20;
	}
	while (push->countbmod != 0)
		ft_pa(push);
}
 */