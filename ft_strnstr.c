/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:47:40 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/16 18:48:32 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*first_occurrence;
	size_t	index;
	size_t	little_length;

	first_occurrence = NULL;
	index = 0;
	little_length = ft_strlen(little);
	while (big[index] && index < len && little_length)
	{
		if (!ft_strncmp((big + index), little, little_length) && (index + little_length <= len))
		{
			first_occurrence = (char *)(big + index);
			break;
		}
		index++;
	}
	if (!little_length)
		first_occurrence = (char *)big;
	return (first_occurrence);
}
