/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: triou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:51:25 by triou             #+#    #+#             */
/*   Updated: 2018/06/20 23:12:34 by triou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <stdlib.h>
#include "libft.h"

int	main(int ac, char **av)
{
	t_stack	*head;
	t_stack	*tail;

	head = NULL;
	tail = NULL;
	if (ac < 2)
		ft_puterr();
	VERBOSE = ft_strequ("-v", av[1]);
/*	if (!ft_readfile(av))
		ft_readstdn(ac, av);*/
	return (0);
}
