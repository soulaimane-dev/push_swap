/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:30:39 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/26 11:11:21 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sb(t_stack **b)
{
	if (*b != NULL && (*b)->next != NULL)
		ft_swap_stack(b);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	pb(t_stack **b, t_stack **a)
{
	if (*a != NULL)
		ft_push_stack(b, a);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	rb(t_stack **b)
{
	if (*b != NULL && (*b)->next != NULL)
		ft_rotate_stack(b);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	rrb(t_stack	**b)
{
	if (*b != NULL && (*b)->next != NULL)
		ft_reverse_rotate_stack(b);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}
