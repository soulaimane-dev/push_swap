/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:44:13 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/21 11:30:31 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **a, t_stack **b)
{
	ft_swap_stack(a);
	ft_swap_stack(b);
	write(1, "ss\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotate_stack(a);
	ft_rotate_stack(b);
	write(1, "rr\n", 3);
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate_stack(a);
	ft_reverse_rotate_stack(b);
	write(1, "rrr\n", 4);
}

int	ft_stack_size(t_stack *top)
{
	t_stack	*curr;
	int		i;

	i = 0;
	curr = top;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
