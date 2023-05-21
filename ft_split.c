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

char	**ft_split(char const *s, char c)
{
	size_t	start;
	size_t	index;
	size_t	split;
	char	**array;

	start = 0;
	index = 0;
	split = 0;
	while (s[index])
		if (ft_strchr(s, c))
			split++;
	array = malloc(sizeof(char *) * (split + 1));
	index = 0;
	split = 0;
	if (!s)
		return (NULL);
	while (s[split])
	{
		split = ft_strlen(ft_strchr(s, c));
		if (s[start] != s[split])
			array[index] = ft_substr(s + start, start, split - start + 1);
		start = ++split;
	}
	array[index] = NULL;
	return (array);
}
