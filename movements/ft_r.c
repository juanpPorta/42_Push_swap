/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:53:42 by jporta            #+#    #+#             */
/*   Updated: 2021/11/29 20:57:26 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_push *push, int input)
{
	int	y;
	int	temp;

	y = -1;
	temp = *push->amod[0];
	while (++y < push->countamod - 1)
	{
		*push->amod[y] = *push->amod[y + 1];
	}
	*push->amod[y] = temp;
	if (input == 0)
		printf("ra\n");
}

void	ft_rb(t_push *push, int input)
{
	int	y;
	int	temp;

	y = -1;
	temp = *push->bmod[0];
	while (++y < push->countbmod - 1)
	{
		*push->bmod[y] = *push->bmod[y + 1];
	}
	*push->bmod[y] = temp;
	if (input == 0)
		printf("rb\n");
}

void	ft_rr(t_push *push)
{
	ft_ra(push, 1);
	ft_rb(push, 1);
	printf("rr\n");
}
