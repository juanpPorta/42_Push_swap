/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:37:18 by marvin            #+#    #+#             */
/*   Updated: 2021/11/24 16:40:18 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(int num)
{
	if (num == 0)
		printf("error de parametros \n");
	else if (num == 2)
		printf("los parametros tienen letras\n");
	exit (0);
}

int	ft_atoi(char *str)
{
	int				i;
	int				s;
	unsigned int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] <= 13 || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		if (r > 2147483647 && s == 1)
			ft_error(0);
		if (r > 2147483648 && s == -1)
			ft_error(0);
		i++;
	}
	return (r * s);
}
