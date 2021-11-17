/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/11/17 17:36:07 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_push *push)
{
	push->ya = 0;
	push->xa = 0;
	push->yt = 0;
	push->xt = 0;
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

	if (argc <= 0)
		return (0);
	ft_save(&push, argv, argc);
	ft_Stoa(argv, &push);
	ft_takeints(&push);
	i = -1;
	printf("%i", ft_countmal(argv));
	while (++i <= ft_countmal(argv) && push.a[i])
		printf("push: %s\n", push.a[i]);
	return (0);
}
