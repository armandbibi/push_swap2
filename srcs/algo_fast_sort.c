/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_fast_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 03:16:57 by abiestro          #+#    #+#             */
/*   Updated: 2018/06/30 21:43:58 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap_ab.h"
#include <stdio.h>
#include <unistd.h>

static void ft_sort_3(t_lst *alst, t_lst *blst)
{
	int a;
	int b;
	int c;

	a = alst->head->n;
	b = alst->head->prev->n;
	c = alst->tail->n;
	if (a < b && a < c)
	{
			ft_ra(alst, blst);
		if (b < c)
			ft_sa(alst, blst);
	}
	else if (a < b && a > c)
		ft_sa(alst, blst);
	else if (a > b && a < c)
		ft_rra(alst, blst);
	if (a > b && a > c && b < c)
	{
		ft_sa(alst, blst);
		ft_ra(alst, blst);
	}
}
void	algo_fast_sort(t_lst *alst, t_lst *blst)
{
	if (ft_get_nbr_element(alst) == 3)
	{
		ft_sort_3(alst, blst);
		return ;
	}
	else
	{
		ft_bubble_sort(alst, blst);
	ft_lstprint(alst->head, blst->head);
	}
}
