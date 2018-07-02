/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ab.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 03:30:10 by abiestro          #+#    #+#             */
/*   Updated: 2018/06/30 19:11:39 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_AB_H
# define PUSH_SWAP_AB_H
#include <stdio.h>

typedef struct	s_ps_range
{
	int			min;
	int			max;
	int			compteur;
}				t_ps_range;
void    algo_fast_sort(t_lst *alst, t_lst *blst);
void	ft_bubble_sort(t_lst *alst, t_lst *blst);
int		ft_algo_sort_ten(t_lst *alst, t_lst *blst);
int		ft_get_nbr_element(t_lst *alst);
int		ft_getmed(size_t count, t_stack *list, int rank);
void	*ft_find_rotation_bubble_sort(t_lst *alst, t_ps_range *range1, t_ps_range *range2);

void    ft_set_dual_range(t_ps_range *dual_range, int index,
		t_lst *alst, int size);
void    ft_create_dual_range(t_ps_range **item);

#endif
