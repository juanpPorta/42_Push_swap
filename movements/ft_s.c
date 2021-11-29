/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:45:37 by jporta            #+#    #+#             */
/*   Updated: 2021/11/25 22:11:48 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_push *push, int input)
{
	int	*temp;
	if (push->countbmod > 1)
	{
		temp = 0;
		temp = push->bmod[0];
		push->bmod[0] = push->bmod[1];
		push->bmod[1] = temp;
		if (input == 0)
			printf("sb\n");
	}
}

void	ft_sa(t_push *push, int input)
{
	int	*temp;
	if (push->countamod > 1)
	{
		temp = 0;
		temp = push->amod[0];
		push->amod[0] = push->amod[1];
		push->amod[1] = temp;
		if (input == 0)
			printf("sa\n");
	}
}

void	ft_ss(t_push *push)
{
	ft_sa(&push, 1);
	ft_sb(&push, 1);
	printf("ss\n");
}

void	ft_pa(t_push *push)
{
	int	*temp;
	int		y;

	temp = 0;
	y = push->countbmod;
	if (push->countamod > 0)
	{
		if (push->countbmod > 0)
		{
			while (y-- > push->countbmod)
				push->bmod[y + 1] = push->bmod[y];
			push->countbmod += 1;
		}
		else 
		{
			push->bmod[0] = push->amod[0];
			push->countbmod += 1;	
		}
		y = 0;
		while (y++ < push->countbmod)
		{
			push->amod[y] = push->amod[y + 1];
			push->countamod -= 1;
		}
		printf("pb\n");
	}
}

/* void	ft_pa(t_push *push)
{
	int	*temp;
	int	countinv;
	int		y;

	temp = 0;
	y = 0;
	countinv = push->countamod;
	if (push->countbmod > 1)
	{
		while (countinv > push->countamod)
		push->amod[countinv]
		push->amod[y + 1] = push->bmod[y];
		push->amod[1] = temp;
		printf("pa\n");
	}
} */
