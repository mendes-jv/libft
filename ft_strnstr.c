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

	first_occurrence = NULL;
	while (*big && len--)
	{
		if (!(ft_strncmp(big, little, len)))
			first_occurrence = (char *)big;
		big++;
	}
	return (first_occurrence);
}
