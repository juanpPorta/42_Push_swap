/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:53:06 by jporta            #+#    #+#             */
/*   Updated: 2021/11/30 20:12:27 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_fourhort(t_push *push)
{
	int	y;
	
	if (*push->amod[0] < *push->amod[1] && *push->amod[1] < *push->amod[2]
		&& *push->amod[2] < *push->amod[3])
		printf("ordenado\n");
	y = 0;
	while (*push->amod[y] != 0)
		y++;
	if (y < push->countG / 2)
		
}

void	ft_threeshort(t_push *push)
{
	if (*push->amod[0] < *push->amod[1] && *push->amod[1] < *push->amod[2])
		printf("ordenado\n");
	else if (*push->amod[0] > *push->amod[1] && *push->amod[1] < *push->amod[2] //1 0 2
		&& *push->amod[0] < *push->amod[2])
		ft_sa(push, 0);
	else if (*push->amod[0] > *push->amod[1] && *push->amod[1] > *push->amod[2] //2 1 0
		&& *push->amod[0] > *push->amod[2])
	{
		ft_sa(push, 0);
		ft_rra(push, 0);
	}
	else if (*push->amod[0] > *push->amod[1] && *push->amod[1] < *push->amod[2] //2 0 1
		&& *push->amod[0] > *push->amod[2])
		ft_ra(push, 0);
	else if (*push->amod[0] < *push->amod[1] && *push->amod[1] > *push->amod[2] //0 2 1
		&& *push->amod[0] < *push->amod[2])
	{
		ft_sa(push, 0);
		ft_ra(push, 0);
	}
	else if (*push->amod[0] < *push->amod[1] && *push->amod[1] > *push->amod[2] //1 2 0
		&& *push->amod[0] > *push->amod[2])
		ft_rra(push, 0);
}

void	ft_check(t_push *push)
{
	if (push->countG == 1)
		ft_error(2);
	if (push->countG == 2)
	{
		if (push->amod[0] > push->amod[1])
			ft_sa(push, 0);
		else
			printf("ya ordenados\n");
	}	
	if (push->countG == 3)
		ft_threeshort(push);
	if (push->countG == 4)
		ft_fourhort(push);
}
