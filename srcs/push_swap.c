/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 17:00:47 by triou             #+#    #+#             */
/*   Updated: 2018/06/27 03:39:49 by abiestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap_ab.h"
#include "libft.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_stack *alst;
	t_stack *blst;
	
	blst = NULL;
	if (ac < 2)
		return (0);
	alst = ft_readparams(ac, av, 1);
	//ft_lstsort(&alst, &blst);
	algo_fast_sort(alst, blst)
	ft_lstdel(alst);
	ft_lstdel(blst);
	algo_fast_short
	return (0);
}
