/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_short_pass_bubble_sort.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiestro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 21:43:29 by abiestro          #+#    #+#             */
/*   Updated: 2018/06/30 17:27:14 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap_ab.h"
#include <stdio.h>

int ft_count_ra(t_lst *alst, t_ps_range *range1, t_ps_range *range2)
{
	int i;
	int compteur;
	t_stack *s;

	i = 0;
	compteur = 0;
	s = alst->head;
	while (i < range1->compteur + range2->compteur && s != alst->tail)
	{
		if ((s->n <= range1->max && s->n >= range1->min) ||
			(s->n <= range2->max && s->n >= range2->min))
			i++;
		compteur++;
		s = s->prev;
	}
	return (compteur);
}

int ft_count_rra(t_lst *alst, t_ps_range *range1, t_ps_range *range2)
{
	int i;
	int compteur;
	t_stack *s;

	i = 0;
	compteur = 0;
	s = alst->tail;
	while (i < range1->compteur + range2->compteur && s != alst->head)
	{
		if ((s->n < range1->max && s->n >= range1->min) ||
				(s->n < range2->max && s->n >= range2->min))
			i++;
		compteur++;
		s = s->next;
	}
	return (compteur);
}

void	*ft_find_rotation_bubble_sort(t_lst *alst, t_ps_range *range1, t_ps_range *range2)
{
	int nbr_ra;
	int nbr_rra;

	nbr_ra = ft_count_ra(alst, range1, range2);
	nbr_rra = ft_count_rra(alst, range1, range2);
	if (nbr_ra <= nbr_rra)
		return (&ft_ra);
	else
		return (&ft_rra);
}
