/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatbmod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:23:25 by jporta            #+#    #+#             */
/*   Updated: 2021/11/29 19:26:27 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_initcounts(t_push *push)
{
	push->countamod = push->countG;
	push->countbmod = 0;
}

void	ft_saveint2(t_push *push)
{	
	int	y;

	push->bmod = ft_mallocint(push->amod, push->countG);
	y = -1;
	while (++y < push->countG)
	{
		push->bmod[y] = malloc(sizeof(int) * 1);
		*push->bmod[y] = -1;
	}
	ft_initcounts(push);
}

void	push_swap(t_push *push)
{
	ft_saveint2(push);
}
