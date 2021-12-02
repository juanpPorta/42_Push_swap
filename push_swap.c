/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/12/02 04:45:49 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_checkminus(t_push *push)
{
	int	y;
	int	x;
	int	count;

	y = -1;
	while (push->a[++y])
	{
		x = 0;
		count = 0;
		while (push->a[y][x])
		{
			if (push->a[y][x] == '-' || push->a[y][x] == '+')
				count++;
			x++;
		}
		if (count > 1)
			ft_error(0);
	}
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
				ft_error(0);
			}
			if (ft_isdigit(push->a[y][x]) == 0)
			{
				ft_free(push->a);
				ft_error(0);
			}
			ft_checkminus(push);
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
		if (ft_strlen(argv[y]) == 0)
			ft_error(0);
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
	t_list	*aux;

	if (argc <= 1)
		return (0);
	ft_save(&push, argv);
	ft_Stoa(argv, &push);
	ft_takeints(&push);
	ft_buble(&push);
	push_swap(&push);
	ft_check(&push);
	i = 0;
	/* while (i < push.countG)
	{
		printf("este es el array ordenado: %d\n", *push.amod[i]);
		i++;
	}
	printf("el tamaño del array es: %d\n", push.countG); */
	return (0);
}
