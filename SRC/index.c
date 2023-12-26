/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:58:08 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/24 18:08:13 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sortme(t_stack *stack)
{
	t_stack	*curr1;
	t_stack	*curr2;
	int		temp;

	curr1 = stack;
	while (curr1 != NULL)
	{
		curr2 = stack;
		while (curr2 != NULL)
		{
			if (curr2->next != NULL && curr2->x > curr2->next->x)
			{
				temp = curr2->x;
				curr2->x = curr2->next->x;
				curr2->next->x = temp;
			}
			curr2 = curr2->next;
		}
		curr1 = curr1->next;
	}
}

t_stack	*ft_make_sorted_stack(t_stack **a)
{
	t_stack	*new;
	t_stack	*curr;
	int		i;

	new = NULL;
	curr = *a;
	while (curr != NULL)
	{
		ft_push(&new, ft_create_node(curr->x));
		curr = curr->next;
	}
	ft_sortme(new);
	curr = new;
	i = 1;
	while (curr != NULL)
	{
		curr->index = i;
		curr = curr->next;
		i++;
	}
	return (new);
}

void	index_stack(t_stack **a)
{
	t_stack	*new;
	t_stack	*temp1;
	t_stack	*temp2;

	new = ft_make_sorted_stack(a);
	temp1 = *a;
	while (temp1 != NULL)
	{
		temp2 = new;
		while (temp2 != NULL)
		{
			if (temp1->x == temp2->x)
			{
				temp1->index = temp2->index;
				break ;
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	ft_clean(&new);
}
