/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:53:06 by jporta            #+#    #+#             */
/*   Updated: 2021/12/02 03:15:22 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_check(t_push *push)
{
	if (push->countG <= 5)
		ft_check_sort(push);
	if (push->countG <= 100)
		ft_sort_medium(push);
/* 	if (push->countG == 500)
		ft_sort_max(push); */
}
