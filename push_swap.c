/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/12/02 13:24:35 by jporta           ###   ########.fr       */
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

void	ft_stoa(char **argv, t_push *push)
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
	ft_checknums(push);
}

int	main(int argc, char **argv)
{
	t_push	*push;

	push = malloc(sizeof(t_push));
	if (argc <= 1)
		return (0);
	ft_save(push, argv);
	ft_stoa(argv, push);
	ft_takeints(push);
	ft_buble(push);
	push_swap(push);
	ft_check(push);
	ft_free(push->a);
	ft_freeint(push->amod);
	ft_freeint(push->bmod);
	ft_freeint(push->intmod);
	free(push);
	return (0);
}
