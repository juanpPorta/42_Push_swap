/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:40:49 by jporta            #+#    #+#             */
/*   Updated: 2021/11/29 20:57:16 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_push *push, int input)
{
	int	y;
	int	temp;

	y = push->countamod - 1;
	temp = *push->amod[push->countamod - 1];
	while (y > 0)
	{
		*push->amod[y] = *push->amod[y - 1];
		y--;
	}
	*push->amod[y] = temp;
	if (input == 0)
		printf("rra\n");
}

void	ft_rrb(t_push *push, int input)
{
	int	y;
	int	temp;

	y = push->countbmod - 1;
	temp = *push->bmod[push->countbmod - 1];
	while (y > 0)
	{
		*push->bmod[y] = *push->bmod[y - 1];
		y--;
	}
	*push->bmod[y] = temp;
	if (input == 0)
		printf("rrb\n");
}

void	ft_rrr(t_push *push)
{
	ft_rra(push, 1);
	ft_rrb(push, 1);
	printf("rrr\n");
}
