/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:19:33 by jporta            #+#    #+#             */
/*   Updated: 2021/11/17 17:29:33 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

char	**ft_malloc(char **mal, int count)
{
	int	y;
	int	x;

	y = -1;
	mal = malloc(sizeof(char *) * count);
	return (mal);
}

void	ft_save(t_push *push, char **argv, int argc)
{	
	int	count;

	count = 0;
	count = ft_countmal(argv);
	push->a = ft_malloc(push->a, count);
}

size_t	ft_takesize(char **argv)
{
	size_t	i;

	i = 1;
	while (argv[i])
		i++;
	return (i);
}
