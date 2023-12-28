/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:23:21 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 17:32:59 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_valide(int ac, char **av, t_stack **top)
{
	int	i;

	i = 1;
	if (ac == 1)
		exit(0);
	while (av[i])
	{
		ft_isdigit(av[i]);
		checker(av[i]);
		is_empty(av[i]);
		i++;
	}
	i = 1;
	while (av[i])
	{
		handel_number(top, av[i]);
		i++;
	}
	check_is_repeated(*top);
	if (check_is_sorted(*top) == 1)
		exit(0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	ft_valide(ac, av, &a);
	index_stack(&a);
	if (ft_stack_size(a) == 5 && ft_last_index(a) == 1)
		rra(&a);
	if (ft_stack_size(a) == 2)
		sa(&a);
	else
	{
		ft_algo_from_a_to_b(&a, &b);
		ft_algo_from_b_to_a(&a, &b);
	}
	ft_clean(&a);
}
