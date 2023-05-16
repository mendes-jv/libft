/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:42:00 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/13 18:45:39 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (!n)
		return (0);
	while (index < ft_strlen(s1) && n--)
		if (*(int *)(s1 + index) == *(int *)(s1 + index))
			index++;
	return (*(int *)s1 - *(int *)s2);
}
