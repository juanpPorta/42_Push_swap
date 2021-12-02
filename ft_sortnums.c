/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortnums.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 06:58:03 by jporta            #+#    #+#             */
/*   Updated: 2021/12/02 13:24:49 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_mapeofin(t_push *push)
{
	int	y;

	y = 0;
	while (y < push->countG)
	{
		push->amod[y] = push->intmod[y];
		y++;
	}
}

void	ft_mapeo(t_push *push)
{
	int	i;
	int	y;
	int	num;

	y = 0;
	i = 0;
	while (y < push->countG)
	{
		num = 0;
		while (i < push->countG)
		{
			if (*push->amod[y] > *push->amod[i])
				num++;
			i++;
		}
		*push->intmod[y] = num;
		i = 0;
		y++;
	}
	ft_mapeofin(push);
}

void	ft_malintmod(t_push *push)
{
	int	y;

	push->intmod = ft_mallocint(push->intmod, push->countG);
	y = 0;
	while (y < push->countG)
	{
		push->intmod[y] = malloc(sizeof(int) * 1);
		y++;
	}
}

void	ft_sortint(t_push *push)
{
	push->minum = 0;
	push->maxnum = push->countG - 1;
}

void	ft_buble(t_push *push)
{
	ft_malintmod(push);
	ft_mapeo(push);
	ft_sortint(push);
}
