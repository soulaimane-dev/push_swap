/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:08:29 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 12:56:42 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "../GTN/get_next_line.h"

typedef struct s_list
{
	int				x;
	struct s_list	*next;

}	t_stack;

int		ft_strcmp(char	*s1, char *s2);
void	sa(t_stack **a);
void	pa(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rra(t_stack **a);
void	ss(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		ft_stack_size(t_stack *top);
void	is_empty(char *str);
int		ft_atoi(const char *str);
void	sb(t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	rb(t_stack **b);
void	rrb(t_stack	**b);
void	ft_isdigit(char	*nbr);
int		check_is_sorted(t_stack *top);
void	check_is_repeated(t_stack *top);
void	handel_number(t_stack **stack, char *str);
void	checker(char	*str);
t_stack	*ft_create_node(int value);
void	ft_push(t_stack **stack, t_stack *node);
int		ft_strcmp(char	*s1, char *s2);
char	**ft_split(char const *s, char c);
void	ft_push_stack(t_stack **stack1, t_stack **stack2);
void	ft_swap_stack(t_stack **stack);
void	ft_rotate_stack(t_stack **stack);
void	ft_reverse_rotate_stack(t_stack **stack);
void	ft_clean(t_stack **stack);

#endif
