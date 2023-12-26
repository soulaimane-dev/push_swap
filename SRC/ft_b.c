/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:30:39 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/26 10:42:51 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack **b)
{
	ft_swap_stack(b);
	write(1, "sb\n", 3);
}

void	pb(t_stack **b, t_stack **a)
{
	ft_push_stack(b, a);
	write(1, "pb\n", 3);
}

void	rb(t_stack **b)
{
	ft_rotate_stack(b);
	write(1, "rb\n", 3);
}

void	rrb(t_stack	**b)
{
	ft_reverse_rotate_stack(b);
	write(1, "rrb\n", 4);
}
