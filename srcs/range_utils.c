/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 18:02:44 by abiestro          #+#    #+#             */
/*   Updated: 2018/06/30 18:19:47 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap_ab.h"
#include <stdlib.h>

void	ft_set_dual_range(t_ps_range *dual_range, int index,
		t_lst *alst, int size)
{
	if (index == 0)
	{
		dual_range->max = ft_getmed(size, alst->head, size / 2 - 1);
		dual_range->min = ft_getmed(size, alst->head, size / 2 - 11);
		dual_range->compteur = 10;
	}
	else
	{
		dual_range->max = ft_getmed(size, alst->head, size / 2 + 10);
		dual_range->min = ft_getmed(size, alst->head, size / 2 );
		dual_range->compteur = 10;
	}
}
