/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:23:25 by jporta            #+#    #+#             */
/*   Updated: 2021/11/19 15:30:39 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_saveint2(t_push *push)
{	
	int	count;

	count = 0;
	count = ft_countmalint(push);
	push->countG = count;
	push->bmod = ft_mallocint(push->amod, count);
}

void	push_swap(t_push *push)
{
	ft_saveint2(push);
}
