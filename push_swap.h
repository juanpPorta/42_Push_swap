/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:56:47 by jporta            #+#    #+#             */
/*   Updated: 2021/11/17 19:27:29 by jporta           ###   ########.fr       */
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
	int		ya;
	int		xa;
	int		yt;
	int		xt;
	int		**amod;
	int		countG;

}		t_push;

void	ft_sa(t_push push);
void	ft_sb(t_push push);
char	**ft_checkargv(char **argv, t_push *push);
int		ft_countmal(char **argv);
char	**ft_malloc(char **mal, int count);
void	ft_save(t_push *push, char **argv, int argc);
size_t	ft_takesize(char **argv);
void	ft_free(char **matrix);
void	ft_takeints(t_push *push);
void	ft_init(t_push *push);
void	push_swap(t_push *push);
#endif