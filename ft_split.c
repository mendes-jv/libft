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

static size_t	ft_substrlen(char *start, char c)
{
	size_t	counter;

	counter = 0;
	while (*start != c && *start++)
		counter++;
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	delimiter;
	size_t	i;
	char	*start;
	char	*string;
	char	**arr;
	

	if (!s)
		return (NULL);
	string = ft_strtrim(s, &c);
	if (!*string)
	{
		free(string);
		return (ft_calloc(1, sizeof(char *)));
	}
	start = string;
	delimiter = delimiter_count(string, c);
	arr = ft_calloc(delimiter + 1, sizeof(char *));
	i = 0;
	while (delimiter--)
	{
		arr[i++] = ft_substr(string, 0, ft_substrlen(string, c));
		if (ft_strchr(string, c) != NULL)
			string = ft_strchr(string, c);
		while (*string == c && *string)
			string++;
	}
	free(start);
	return (arr);
}
