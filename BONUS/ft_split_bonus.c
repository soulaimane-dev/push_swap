/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:19:29 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/28 12:56:27 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	get_free(int index, char **result)
{
	while (index)
	{
		index--;
		free(result[index]);
	}
	free(result);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 1;
	while (*s)
	{
		if (*s == c)
		{
			in_word = 1;
		}
		else
		{
			if (in_word)
			{
				in_word = 0;
				count++;
			}
		}
		s++;
	}
	return (count);
}

static char	*ft_my_strdup(char const *s, int len)
{
	char	*result;
	int		i;

	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static int	fill_result(char **result, char const *s, char c, int word_count)
{
	int	i;
	int	len;

	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		result[i] = ft_my_strdup(s, len);
		if (result[i] == NULL)
		{
			get_free(i, result);
			return (1);
		}
		s += len;
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	int		i;
	int		result_return;

	i = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	result_return = fill_result(result, s, c, word_count);
	if (result_return == 1)
		return (NULL);
	result[word_count] = NULL;
	return (result);
}
