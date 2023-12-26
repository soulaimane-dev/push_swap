/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:00:19 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/25 18:01:12 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_stack **stack)
{
	t_temp	temp;

	temp.i = (*stack)->x;
	temp.j = (*stack)->next->x;
	temp.x = (*stack)->next->next->x;
	if (check_is_sorted(*stack) == 1)
		return ;
	if (temp.i > temp.j && temp.i > temp.x)
	{
		ra(stack);
		if (temp.j > temp.x)
			sa(stack);
	}
	else if (temp.j > temp.i && temp.j > temp.x)
	{
		if (temp.i > temp.x)
			rra(stack);
		else
		{
			sa(stack);
			ra(stack);
		}
	}
	else
		sa(stack);
}

int	ft_last_index(t_stack *top)
{
	t_stack	*curr;

	curr = top;
	while (curr->next != NULL)
		curr = curr->next;
	return (curr->index);
}

int	ft_biggset_index(t_stack *a)
{
	int		big;
	t_stack	*curr;

	big = 0;
	curr = a;
	while (curr != NULL)
	{
		if (curr->index > big)
			big = curr->index;
		curr = curr->next;
	}
	return (big);
}
