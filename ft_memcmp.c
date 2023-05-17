/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:42:00 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/16 21:02:07 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (!n)
		return (index);
	while (index < ft_strlen(s1) && n--)
		if (*(int *)(s1 + index) == *(int *)(s2 + index))
			index++;
	return (*(int *)s1 - *(int *)s2);
}
