/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:55:53 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 14:22:37 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_stack **a)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_swap_stack(a);
}

void	pa(t_stack **a, t_stack **b)
{
	if (*b != NULL)
		ft_push_stack(a, b);
}

void	ra(t_stack **a)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_rotate_stack(a);
}

void	rra(t_stack **a)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_reverse_rotate_stack(a);
}
