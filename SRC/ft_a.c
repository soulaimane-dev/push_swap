/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:22:17 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/26 11:57:33 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	ft_swap_stack(a);
	write(1, "sa\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	ft_push_stack(a, b);
	write(1, "pa\n", 3);
}

void	ra(t_stack **a)
{
	ft_rotate_stack(a);
	write(1, "ra\n", 3);
}

void	rra(t_stack **a)
{
	ft_reverse_rotate_stack(a);
	write(1, "rra\n", 4);
}
