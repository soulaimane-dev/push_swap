/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:23:21 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 17:34:16 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
}

void	last_steps(void)
{
	write(2, "Error\n", 7);
	exit(1);
}

void	handel_steps(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "ra\n") == 0)
		ra(a);
	else if (ft_strcmp(str, "rb\n") == 0)
		rb(b);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(a, b);
	else if (ft_strcmp(str, "sa\n") == 0)
		sa(a);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(b);
	else if (ft_strcmp(str, "ss\n") == 0)
		ss(a, b);
	else if (ft_strcmp(str, "pa\n") == 0)
		pa(a, b);
	else if (ft_strcmp(str, "pb\n") == 0)
		pb(b, a);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra(a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rrb(b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(a, b);
	else
		last_steps();
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*str;

	a = NULL;
	b = NULL;
	ft_valide(ac, av, &a);
	str = get_next_line(0);
	while (str)
	{
		handel_steps(&a, &b, str);
		free(str);
		str = get_next_line(0);
	}
	free(str);
	if (check_is_sorted(a) == 1 && ft_stack_size(b) == 0)
		write(1, "OK\n", 3);
	else
	{
		ft_clean(&b);
		write(1, "KO", 3);
	}
	ft_clean(&a);
}
