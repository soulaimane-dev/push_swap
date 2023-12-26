/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:44:13 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/26 11:11:53 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ss(t_stack **a, t_stack **b)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_swap_stack(a);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
	if (*b != NULL && (*b)->next != NULL)
		ft_swap_stack(b);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	rr(t_stack **a, t_stack **b)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_rotate_stack(a);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
	if (*b != NULL && (*b)->next != NULL)
		ft_rotate_stack(b);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	if (*a != NULL && (*a)->next != NULL)
		ft_reverse_rotate_stack(a);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
	if (*b != NULL && (*b)->next != NULL)
		ft_reverse_rotate_stack(b);
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
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
