/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_short.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:29:53 by jporta            #+#    #+#             */
/*   Updated: 2021/12/01 20:07:09 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_primero(t_push *push, int input)
{
	if (input == 1)
	{
		while (*push->amod[0] != push->minum)
			ft_ra(push, 0);
		ft_pb(push);
		push->minum = push->countG - push->countamod;
	}
	if (input == 0)
	{
		while (*push->amod[0] != push->minum)
			ft_rra(push, 0);
		ft_pb(push);
		push->minum = push->countG - push->countamod;
	}
	if (*push->amod[0] < *push->amod[1] && *push->amod[1] < *push->amod[2]
		&& *push->amod[2] < *push->amod[3])
		return ;
}

void	ft_fivehort(t_push *push)
{
	int	y;

	if (*push->amod[0] < *push->amod[1] && *push->amod[1] < *push->amod[2]
		&& *push->amod[2] < *push->amod[3] && *push->amod[3] < *push->amod[4])
		return ;
	y = 0;
	while (*push->amod[y] != 0)
		y++;
	while (push->countamod != 3)
	{
		if (y <= push->countG / 2)
			ft_primero(push, 1);
		else
			ft_primero(push, 0);
	}
	ft_threeshort(push);
	ft_pa(push);
	ft_pa(push);
}

void	ft_fourhort(t_push *push)
{
	int	y;

	if (*push->amod[0] < *push->amod[1] && *push->amod[1] < *push->amod[2]
		&& *push->amod[2] < *push->amod[3])
		return ;
	y = 0;
	while (*push->amod[y] != 0)
		y++;
	if (y <= push->countG / 2)
		ft_primero(push, 1);
	else
		ft_primero(push, 0);
	ft_threeshort(push);
	ft_pa(push);
}

void	ft_threeshort(t_push *push)
{
	if (*push->amod[0] < *push->amod[1] && *push->amod[1] < *push->amod[2])
		return ;
	else if (*push->amod[0] > *push->amod[1] && *push->amod[1] < *push->amod[2]
		&& *push->amod[0] < *push->amod[2])
		ft_sa(push, 0);
	else if (*push->amod[0] > *push->amod[1] && *push->amod[1] > *push->amod[2]
		&& *push->amod[0] > *push->amod[2])
	{
		ft_sa(push, 0);
		ft_rra(push, 0);
	}
	else if (*push->amod[0] > *push->amod[1] && *push->amod[1] < *push->amod[2]
		&& *push->amod[0] > *push->amod[2])
		ft_ra(push, 0);
	else if (*push->amod[0] < *push->amod[1] && *push->amod[1] > *push->amod[2]
		&& *push->amod[0] < *push->amod[2])
	{
		ft_sa(push, 0);
		ft_ra(push, 0);
	}
	else if (*push->amod[0] < *push->amod[1] && *push->amod[1] > *push->amod[2]
		&& *push->amod[0] > *push->amod[2])
		ft_rra(push, 0);
}

void	ft_check_sort(t_push *push)
{
	if (push->countG == 1)
		return ;
	if (push->countG == 2)
	{
		if (*push->amod[0] > *push->amod[1])
			ft_sa(push, 0);
		else
			return ;
	}	
	if (push->countG == 3)
		ft_threeshort(push);
	if (push->countG == 4)
		ft_fourhort(push);
	if (push->countG == 5)
		ft_fivehort(push);
}
