/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:57:49 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 16:52:43 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				x;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef struct s_temp
{
	int	i;
	int	j;
	int	x;
	int	lp;
	int	p1;
	int	p2;
}	t_temp;

t_stack	*ft_create_node(int value);
void	ft_push(t_stack **stack, t_stack *node);

void	ft_swap_stack(t_stack **stack);
void	ft_push_stack(t_stack **stack1, t_stack **stack2);
void	ft_rotate_stack(t_stack **stack);
void	ft_reverse_rotate_stack(t_stack **stack);
void	ft_clean(t_stack **stack);
int		ft_strlen(char	*str);

void	sa(t_stack **a);
void	pa(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rra(t_stack **a);

void	sb(t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	rb(t_stack **b);
void	rrb(t_stack	**b);

void	ss(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		ft_stack_size(t_stack *top);

void	ft_isdigit(char	*nbr);
int		check_is_sorted(t_stack *top);
void	check_is_repeated(t_stack *top);
void	handel_number(t_stack **stack, char *str);
void	checker(char	*str);
void	is_empty(char *str);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);

void	index_stack(t_stack **a);
t_stack	*ft_make_sorted_stack(t_stack **a);

void	ft_sort3(t_stack **stack);
void	ft_algo_from_a_to_b(t_stack **a, t_stack **b);
void	ft_algo_from_b_to_a(t_stack **a, t_stack **b);

int		ft_biggset_index(t_stack *a);
int		ft_last_index(t_stack *top);

#endif
