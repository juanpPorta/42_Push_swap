/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:45:37 by jporta            #+#    #+#             */
/*   Updated: 2021/11/16 16:32:24 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_push push)
{
	char	*temp;

	temp = 0;
	temp = push.b[0];
	push.b[0] = push.b[1];
	push.b[1] = temp;
}

void	ft_sa(t_push push)
{
	char	*temp;

	temp = 0;
	temp = push.a[0];
	push.a[0] = push.a[1];
	push.a[1] = temp;
}
