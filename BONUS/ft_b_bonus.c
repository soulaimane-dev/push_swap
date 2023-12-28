/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:30:39 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 14:23:15 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sb(t_stack **b)
{
	if (*b != NULL && (*b)->next != NULL)
		ft_swap_stack(b);
}

void	pb(t_stack **b, t_stack **a)
{
	if (*a != NULL)
		ft_push_stack(b, a);
}

void	rb(t_stack **b)
{
	if (*b != NULL && (*b)->next != NULL)
		ft_rotate_stack(b);
}

void	rrb(t_stack	**b)
{
	if (*b != NULL && (*b)->next != NULL)
		ft_reverse_rotate_stack(b);
}
