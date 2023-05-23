/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:59:26 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/21 01:59:43 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	delimiter_count(char const *s, char c)
{
	size_t	counter;
	size_t	index;

	counter = 1;
	index = 0;
	while (s[index])
		if (s[index++] == c && s[index] != c)
			counter++;
	return (counter);
}

static size_t	ft_strsublen(char *start, char c)
{
	size_t	index;

	index = 1;
	while (*start++ != c)
		index++;
	return (index);
}

char	**ft_split(char const *s, char c)
{
	size_t	delimiter;
	size_t	index;
	char	*start;
	char	*string;
	char	**array;

	if (!s)
		return (NULL);
	string = ft_strtrim(s, &c);
	delimiter = delimiter_count(string, c);
	start = string;
	array = malloc(sizeof(char *) * (delimiter + 1));
	index = 0;
	while (delimiter--)
	{
		array[index++] = ft_substr(start, 0, ft_strsublen(start, c) + 1);
		start = ft_strchr(string, c) + 1;
		while (*start == c)
			start++;
	}
	array[index] = NULL;
	return (array);
}
