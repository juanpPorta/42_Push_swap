/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:45:37 by jporta            #+#    #+#             */
/*   Updated: 2021/11/29 19:34:57 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_push *push, int input)
{
	int	*temp;

	if (push->countbmod > 1)
	{
		temp = 0;
		temp = push->bmod[0];
		push->bmod[0] = push->bmod[1];
		push->bmod[1] = temp;
		if (input == 0)
			printf("sb\n");
	}
}

void	ft_sa(t_push *push, int input)
{
	int	*temp;

	if (push->countamod > 1)
	{
		temp = 0;
		temp = push->amod[0];
		push->amod[0] = push->amod[1];
		push->amod[1] = temp;
		if (input == 0)
			printf("sa\n");
	}
}

void	ft_ss(t_push *push)
{
	ft_sa(push, 1);
	ft_sb(push, 1);
	printf("ss\n");
}

void	ft_pa(t_push *push)
{
	int		*temp;
	int		y;

	temp = 0;
	if (push->countbmod > 0)
	{
		if (*push->amod[0] == -1)
			*push->amod[0] = *push->bmod[0];
		else
		{
			y = push->countamod;
			while (y-- > 0)
				*push->amod[y + 1] = *push->amod[y];
			*push->amod[0] = *push->bmod[0];
		}
		push->countamod += 1;
		push->countbmod -= 1;
		y = -1;
		while (++y < push->countbmod)
			*push->bmod[y] = *push->bmod[y + 1];
		*push->bmod[y] = -1;
		printf("pa\n");
	}
}

void	ft_pb(t_push *push)
{
	int		*temp;
	int		y;

	temp = 0;
	if (push->countamod > 0)
	{
		if (*push->bmod[0] == -1)
			*push->bmod[0] = *push->amod[0];
		else
		{
			y = push->countbmod;
			while (y-- > 0)
				*push->bmod[y + 1] = *push->bmod[y];
			*push->bmod[0] = *push->amod[0];
		}
		push->countbmod += 1;
		push->countamod -= 1;
		y = -1;
		while (++y < push->countamod)
			*push->amod[y] = *push->amod[y + 1];
		*push->amod[y] = -1;
		printf("pb\n");
	}
}
