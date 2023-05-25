/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:36:50 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/20 20:39:37 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	else if (start > len || len > ft_strlen(s))
		len = 0;
	substring = (char *)malloc(len + 1);
	if (start > ft_strlen(s))
		start = 0;
	if (substring != NULL && s != NULL)
		ft_strlcpy(substring, (s + start), (len + 1));
	return (substring);
}
