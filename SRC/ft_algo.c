/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:57:06 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 12:46:12 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	temp_a_to_b(t_stack **a, t_stack **b, t_temp *pevo)
{
	if (ft_stack_size(*b) > 1 && (*b)->index < pevo->p2
		&& (*b)->index > pevo->lp && (*a)->index > pevo->p1)
		rr(a, b);
	else if ((*a)->index <= pevo->p1)
		pb(b, a);
	else if (ft_stack_size(*b) > 1 && (*b)->index < pevo->p2
		&& (*b)->index > pevo->lp)
		rb(b);
	else
		ra(a);
}

void	ft_algo_from_a_to_b(t_stack **a, t_stack **b)
{
	t_temp	pevo;

	pevo.p1 = ft_stack_size(*a) / 3;
	pevo.p2 = ft_stack_size(*a) / 6;
	pevo.lp = -1;
	while (ft_stack_size(*a) > 3)
	{
		temp_a_to_b(a, b, &pevo);
		if (ft_stack_size(*b) == pevo.p1)
		{
			pevo.lp = pevo.p1;
			pevo.p2 = pevo.p1 + (ft_stack_size(*a) / 6);
			pevo.p1 += (ft_stack_size(*a) / 3);
		}
	}
	ft_sort3(a);
}

static void	ft_best_move(t_stack **a, t_stack **b)
{
	int		i;
	int		size;
	t_stack	*curr;

	curr = *b;
	i = 0;
	size = ft_stack_size(*b) / 2;
	while (curr != NULL)
	{
		if (curr->index > ft_last_index(*a))
			break ;
		i++;
		curr = curr->next;
	}
	if (i <= size)
		rb(b);
	else
		rrb(b);
}

static void	temp_b_to_a(t_stack **a, t_stack **b)
{
	if ((*b)->index == (*a)->index - 1)
		pa(a, b);
	else if (ft_last_index(*b) == (*a)->index -1)
	{
		rrb(b);
		pa(a, b);
	}
	else if (ft_last_index(*a) == ft_biggset_index(*a))
	{
		pa(a, b);
		ra(a);
	}
	else if (ft_last_index(*a) < (*b)->index)
	{
		pa(a, b);
		ra(a);
	}
	else if (ft_last_index(*a) != (*a)->index - 1)
		ft_best_move(a, b);
	if (ft_last_index(*a) == (*a)->index - 1)
		rra(a);
}

void	ft_algo_from_b_to_a(t_stack **a, t_stack **b)
{
	while (*b != NULL)
	{
		temp_b_to_a(a, b);
	}
	while (check_is_sorted(*a) == 0)
	{
		if (ft_last_index(*a) == (*a)->index - 1)
			rra(a);
	}
}
