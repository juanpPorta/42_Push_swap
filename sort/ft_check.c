/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:53:06 by jporta            #+#    #+#             */
/*   Updated: 2021/12/02 11:41:42 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_me_corto_las_pelotas(t_push *push, int count, int input)
{
	int	y;

	if (input == 1)
	{
		y = 0;
		while (*push->amod[y] > count)
			y++;
		return (y);
	}
	if (input == 0)
	{
		y = push->countamod - 1;
		while (*push->amod[y] > count)
			y--;
		return (y);
	}
	return (0);
}

void	ft_check(t_push *push)
{
	if (push->countG <= 5)
		ft_check_sort(push);
	if (push->countG == 100)
		ft_sort_medium(push);
	if (push->countG == 500)
		ft_sort_max(push);
}
