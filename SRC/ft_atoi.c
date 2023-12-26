/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:16:27 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/25 14:15:14 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_empty(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '\0')
	{
		write(2, "Error\n", 7);
		exit(1);
	}
}

static int	ft_handle(char *s, int sign)
{
	long int	nbr;
	long int	nb;

	nb = 0;
	nbr = 0;
	while (*s >= '0' && *s <= '9')
	{
		nb = nbr * 10 + (*s - '0');
		nbr = nb;
		s++;
	}
	if (nbr * sign > 2147483647 || nbr * sign < -2147483648
		|| *s == '+' || *s == '-')
	{
		write(2, "Error\n", 7);
		exit(1);
	}
	return ((int) nbr * sign);
}

int	ft_atoi(const char *str)
{
	char	*s;
	int		sign;

	sign = 1;
	s = (char *) str;
	while (*s == ' ' || *s == '\n' || *s == '\v' || *s == '\f'
		|| *s == '\t' || *s == '\r')
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		sign = -1;
		s++;
	}
	return (ft_handle(s, sign));
}
