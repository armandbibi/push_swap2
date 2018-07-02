/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 19:26:56 by abiestro          #+#    #+#             */
/*   Updated: 2018/06/30 22:04:48 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checker.h"
#include "push_swap_ab.h"
#include <stdio.h>

static int check_limits(int n, t_ps_range *range1, t_ps_range *range2)
{
	if (n <= range1->max && n >= range1->min)
	{
		range1->compteur--;
		return (1);	
	}
	else if (n < range2->max && n >= range2->min)
	{
		range2->compteur--;
		return (1);
	}
	else 
		return 0;
}

void	ft_bubble_sort(t_lst *alst, t_lst *blst)
{
	t_ps_range	dual_range[2];
	void		*(*rotate)(t_lst*, t_lst*);
	int median;
	median = ft_get_median()

	while ((median = ft_getmed()))
	{
	}
	ft_lstprint(alst->head, blst->head);
	printf("\n\n%d\n\n\n", a);
	ft_getmed(ft_get_nbr_element(blst), blst->head, 1);
}
