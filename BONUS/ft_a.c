/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:22:17 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/26 11:12:21 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_stack **a)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_swap_stack(a);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	pa(t_stack **a, t_stack **b)
{
	if (*b != NULL)
		ft_push_stack(a, b);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	ra(t_stack **a)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_rotate_stack(a);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	rra(t_stack **a)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_reverse_rotate_stack(a);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}
