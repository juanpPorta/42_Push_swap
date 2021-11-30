/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:56:47 by jporta            #+#    #+#             */
/*   Updated: 2021/11/30 20:19:21 by jporta           ###   ########.fr       */
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
	int		ya;
	int		yt;
	int		**amod;
	int		**bmod;
	int		**intmod;
	int		countG;
	int		minum;
	int		maxnum;
	int		countamod;
	int		countbmod;
	t_list	*stacka;
	t_list	*stackb;

}		t_push;

void	ft_primero(t_push *push, int input);
void	ft_threeshort(t_push *push);
void	ft_check(t_push *push);
void	ft_rrr(t_push *push);
void	ft_rrb(t_push *push, int input);
void	ft_rra(t_push *push, int input);
void	ft_rr(t_push *push);
void	ft_ra(t_push *push, int input);
void	ft_rb(t_push *push, int input);
void	ft_pa(t_push *push);
void	ft_sa(t_push *push, int input);
void	ft_sb(t_push *push, int input);
void	ft_pb(t_push *push);
char	**ft_checkargv(char **argv, t_push *push);
int		ft_countmal(char **argv);
char	**ft_malloc(char **mal, int count);
void	ft_save(t_push *push, char **argv);
size_t	ft_takesize(char **argv);
void	ft_free(char **matrix);
void	ft_takeints(t_push *push);
void	ft_init(t_push *push);
void	push_swap(t_push *push);
int		**ft_mallocint(int **mal, int count);
int		ft_countmalint(t_push *push);
void	ft_freeint(int **matrix);
void	ft_buble(t_push *push);
#endif