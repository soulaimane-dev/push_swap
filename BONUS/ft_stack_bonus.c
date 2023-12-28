/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:00:34 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 12:56:32 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

/*
	push the first element iint stack 2to the beginning of stack a t stack 1
*/

void	ft_push_stack(t_stack **stack1, t_stack **stack2)
{
	t_stack	*temp;

	temp = *stack2;
	(*stack2) = temp->next;
	temp->next = *stack1;
	*stack1 = temp;
}

void	ft_swap_stack(t_stack **stack)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *stack;
	temp2 = (*stack)->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	*stack = temp2;
}
/*
	The first element becomes the last one
*/

void	ft_rotate_stack(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*curr;

	temp = *stack;
	*stack = temp->next;
	curr = *stack;
	while (curr->next != NULL)
		curr = curr->next;
	temp->next = NULL;
	curr->next = temp;
}
/*
	The last element becomes the first one
*/

void	ft_reverse_rotate_stack(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*curr;

	curr = *stack;
	while (curr->next->next != NULL)
		curr = curr->next;
	temp = curr->next;
	curr->next = NULL;
	temp->next = *stack;
	*stack = temp;
}

void	ft_clean(t_stack **stack)
{
	t_stack	*curr;
	t_stack	*next;

	curr = *stack;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*stack = NULL;
}
