/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:53:06 by jporta            #+#    #+#             */
/*   Updated: 2021/12/06 21:08:55 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_fin(t_push *push, int count, int input)
{
	int	y;

	if (input == 1)
	{
		y = 0;
		while (*push->amod[y] > count || *push->amod[y] == -1)
			y++;
		return (y);
	}
	if (input == 0)
	{
		y = push->countamod - 1;
		while (*push->amod[y] > count || *push->amod[y] == -1)
			y--;
		return (y);
	}
	return (0);
}

void	ft_check(t_push *push)
{
	if (push->countg <= 5)
		ft_check_sort(push);
	else if (push->countg <= 100 && push->countg > 5)
		ft_sort_medium(push);
	else if (push->countg <= 500 && push->countg > 100)
		ft_sort_max(push);
}
