/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:00:35 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 16:52:34 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_isdigit(char	*nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (!(nbr[i] >= '0' && nbr[i] <= '9') && (nbr[i] != ' ')
			&& (nbr[i] != '+') && (nbr[i] != '-'))
		{
			write(2, "Error\n", 7);
			exit(1);
		}
		i++;
	}
}

int	check_is_sorted(t_stack *top)
{
	if (top == NULL || top->next == NULL)
		return (1);
	while (top->next)
	{
		if (top->x > top->next->x)
			return (0);
		top = top->next;
	}
	return (1);
}

void	check_is_repeated(t_stack *top)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = top;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			if (temp1->x == temp2->x)
			{
				write(2, "Error\n", 7);
				exit(1);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}

void	handel_number(t_stack **stack, char *str)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split(str, ' ');
	while (arr[i])
	{
		if (ft_strlen(arr[i]) > 11)
		{
			write(2, "Error\n", 7);
			exit(1);
		}
		ft_push(stack, ft_create_node(ft_atoi(arr[i])));
		i++;
	}
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	checker(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			{
				write(2, "Error\n", 7);
				exit(1);
			}
		}
		i++;
	}
}
