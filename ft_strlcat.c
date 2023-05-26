/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 02:01:18 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/18 02:02:43 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	destiny_length;
	size_t	result;

	result = 0;
	index = 0;
	destiny_length = ft_strlen(dst);
	if (destiny_length > size)
		result = ft_strlen(src) + size;
	else
		result = ft_strlen(src) + destiny_length;
	while ((destiny_length + 1) < size && src[index])
		dst[destiny_length++] = src[index++];
	if (size)
		dst[destiny_length + index] = '\0';
	return (result);
}
