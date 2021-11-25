/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/11/25 02:06:17 by jporta           ###   ########.fr       */
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
				ft_error(1);
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
	int		ya;
	int		yt;

	y = 0;
	ya = 0;
	while (argv[++y])
	{
		temp = ft_split(argv[y], ' ');
		yt = -1;
		while (temp[++yt])
		{
			push->a[ya] = ft_strdup(temp[yt]);
			ya += 1;
		}
		ft_free(temp);
	}
	push->a[ya] = NULL;
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
	ft_buble(&push);
	i = 0;
	while (i < push.countG)
	{
		printf("el numero %s, tiene la posicion %d:\n",
			 push.a[i], *push.intmod[i]);
		i++;
	}
	printf("el tamaño del array es: %d\n", push.countG);
	return (0);
}
