/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortnums.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:43:02 by jporta            #+#    #+#             */
/*   Updated: 2021/11/24 18:41:02 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_declare(t_push *push)
{
	push->minum = *push->intmod[0];
	printf("este es el minimo: %d\n", push->minum);
	push->maxnum = *push->intmod[push->countG - 1];
	printf("este es el maximo: %d\n", push->maxnum);
}

void	ft_sortint(t_push *push)
{
	int	y;
	int	tmp;

	y = 0;
	tmp = 0;
	printf("pepe\n");
	while (y < push->countG - 1)
	{
		if (*push->intmod[y] > *push->intmod[y + 1] && *push->intmod[y + 1])
		{
			tmp = *push->intmod[y];
			*push->intmod[y] = *push->intmod[y + 1];
			*push->intmod[y + 1] = tmp;
		}
		y++;
	}
	y = 0;
	while (y < push->countG - 1)
	{
		if (*push->intmod[y] < *push->intmod[y + 1])
			y++;
		else
			ft_sortint(push);
	}
}

int	*ft_strdupint(int *s1)
{
	int	*s_dup;

	s_dup = malloc(sizeof(int) * 1);
	if (!s_dup)
		return (0);
	ft_memcpy(s_dup, s1, sizeof(int) + 1);
	return (s_dup);
}

void	ft_cpy(t_push *push)
{
	int	y;
	int	x;

	push->intmod = ft_mallocint(push->intmod, push->countG);
	y = 0;
	while (y < push->countG)
	{
		x = 0;
		push->intmod[y] = ft_strdupint(push->amod[y]);
		y++;
	}
	ft_sortint(push);
}

void	ft_buble(t_push *push)
{
	int	y;

	y = 0;
	ft_cpy(push);
	ft_declare(push);
	while (y < push->countG)
	{
		printf("el numero de amod es: %d\n", *push->amod[y]);
		y++;
	}
}
