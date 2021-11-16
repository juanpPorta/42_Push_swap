/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/11/16 19:00:22 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_push *push)
{
	push = NULL;
	push->a = NULL;
	push->a = NULL;
}

int	ft_countmal(char **argv)
{
	int	y;
	int	x;
	int	count;

	y = 0;
	count = 0;
	while (argv[++y])
	{
		x = -1;
		while (argv[y][++x])
		{	
			if (argv[y][x] != ' ' && argv[y][x] != '\0')
				count++;
		}
	}
	return (count);
}

void	ft_malloc(char **mal, int count)
{
	int	y;
	int	x;

	y = -1;
	mal = malloc(sizeof(int) * count);
	while (++y <= count)
	{
		mal[y] = malloc(sizeof(int) * count);
	}
}

void	ft_save(t_push *push, char **argv, int argc)
{	
	int	count;

	count = 0;
	count = ft_countmal(argv);
	ft_malloc(push->a, count);
}

int	main(int argc, char **argv)
{
	int		i;
	t_push	push;

	ft_save(&push, argv, argc);
	push.a = ft_split(argv[1], ' ');
	if (argc <= 0)
		return (0);
	i = -1;
	while (push.a[i])
		printf("push: %s\n", push.a[++i]);
	return (0);
}
