/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 22:37:00 by jovicto2          #+#    #+#             */
/*   Updated: 2024/06/03 22:41:08 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdjoin(char *first, char *second, char *delimiter)
{
	char	*string;
	size_t	length;

	length = ft_strlen(first);
	string = (char *)malloc(length + ft_strlen(second) + ft_strlen(delimiter) + 1);
	if (string && first && second && delimiter)
	{
		ft_strlcpy(string, first, length + 1);
		while (*delimiter)
			string[length++] = *delimiter++;
		while (*second)
			string[length++] = *second++;
		string[length] = '\0';
	}
	return (string);
}
