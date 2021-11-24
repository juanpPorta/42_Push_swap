/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/11/24 21:17:53 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_push *push)
{
	push->ya = 0;
	push->yt = 0;
	push->a = 0;
}

void	ft_checknums(t_push *push)
{
	int	y;
	int	x;

	y = 0;
	while (push->a[y])
	{
		x = 0;
		while (push->a[y][x])
		{
			if (ft_isalpha(push->a[y][x]) == 1)
			{
				ft_free(push->a);
				ft_error(2);
			}
			x++;
		}
		y++;
	}
}

void	ft_Stoa(char **argv, t_push *push)
{
	char	**temp;
	int		y;

	y = 0;
	push->ya = 0;
	while (argv[++y])
	{
		temp = ft_split(argv[y], ' ');
		push->yt = -1;
		while (temp[++push->yt])
		{
			push->a[push->ya] = ft_strdup(temp[push->yt]);
			push->ya += 1;
		}
		ft_free(temp);
	}
	push->a[push->ya] = NULL;
	ft_checknums(push);
}

int	main(int argc, char **argv)
{
	int		i;
	t_push	push;

	if (argc <= 0)
		return (0);
	ft_save(&push, argv);
	ft_Stoa(argv, &push);
	ft_takeints(&push);
	/* ft_buble(&push); */
	i = 0;
	while (i < push.countG)
	{
		printf("el numero de amod es: %d\n", *push.amod[i]);
		i++;
	}
	printf("el tamaño del array es: %d\n", push.countG);
	return (0);
}
