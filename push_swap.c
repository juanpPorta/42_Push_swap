/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/11/17 16:48:01 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_push *push)
{
	push = NULL;
	push->a = NULL;
	push->a = NULL;
}

void	ft_Stoa(char **argv, t_push *push)
{
	char	**temp;
	int		y;
	int		x;

	y = 0;
	push->ya = 0;
	while (argv[++y])
	{
		temp = ft_split(argv[y], ' ');
		push->yt = -1;
		while (temp[++push->yt])
		{
			push->a[push->ya]
				= ft_strdup(temp[push->yt]);
			push->ya += 1;
		}
		ft_free(temp);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_push	push;

	ft_save(&push, argv, argc);
	ft_Stoa(argv, &push);
	if (argc <= 0)
		return (0);
	i = -1;
	while (push.a[++i] < ft_countmal(argv))
		printf("push: %s\n", push.a[i]);
	return (0);
}
