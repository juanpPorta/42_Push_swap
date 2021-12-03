/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_undred.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 21:52:44 by jporta            #+#    #+#             */
/*   Updated: 2021/12/02 13:25:12 by jporta           ###   ########.fr       */
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
		if (y < (push->countbmod - w))
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
	int	count;
	int	yx;
	int	xD;

	count = 24;
	while (push->countamod != 0)
	{
		while (push->countamod > push->countg - (count + 1))
		{
			push->y = ft_me_corto_las_pelotas(push, count, 1);
			push->w = ft_me_corto_las_pelotas(push, count, 0);
			yx = *push->amod[push->y];
			xD = *push->amod[push->w];
			if (push->y < (push->countg - push->w))
				while (*push->amod[0] != yx)
					ft_ra(push, 0);
			else
				while (*push->amod[0] != xD)
					ft_rra(push, 0);
			ft_calc(push, count);
		}
		count += 25;
	}
	ft_recolocate(push);
}

void	ft_sort_max(t_push *push)
{
	int	count;
	int	yx;
	int	xD;

	count = 49;
	while (push->countamod != 0)
	{
		while (push->countamod > push->countg - (count + 1))
		{
			push->y = ft_me_corto_las_pelotas(push, count, 1);
			push->w = ft_me_corto_las_pelotas(push, count, 0);
			yx = *push->amod[push->y];
			xD = *push->amod[push->w];
			if (push->y < (push->countg - push->w))
				while (*push->amod[0] != yx)
					ft_ra(push, 0);
			else
				while (*push->amod[0] != xD)
					ft_rra(push, 0);
			ft_calc(push, count);
		}
		count += 50;
	}
	ft_recolocate(push);
}
