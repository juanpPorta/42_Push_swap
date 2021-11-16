/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:56:47 by jporta            #+#    #+#             */
/*   Updated: 2021/11/16 17:46:57 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

typedef struct s_push
{
	char	**a;
	char	**b;
	char	**save;

}		t_push;

void	ft_sa(t_push push);
void	ft_sb(t_push push);
char	**ft_checkargv(char **argv, t_push *push);
#endif