/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:42 by jporta            #+#    #+#             */
/*   Updated: 2021/11/23 20:21:28 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_push *push)
{
	push->ya = 0;
	push->xa = 0;
	push->yt = 0;
	push->xt = 0;
	push->a = 0;
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
			push->a[push->ya] = ft_strdup(temp[push->yt]);
			push->ya += 1;
		}
		ft_free(temp);
	}
	push->a[push->ya] = NULL;
}

int	main(int argc, char **argv)
{
	int		i;
	t_push	push;
	int		contador;

	if (argc <= 0)
		return (0);
	ft_save(&push, argv, argc);
	ft_Stoa(argv, &push);
	ft_takeints(&push);
	printf("hola\n");
	/* push_swap(&push); */
	i = 0;
	contador = ft_countmal(argv);
	/* while (i < push.countG && push.amod[i])
	{
		printf("push: %d\n", *push.amod[i]);
		i++;
	} */
	ft_freeint(&push);
	return (0);
}
