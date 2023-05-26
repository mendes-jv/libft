/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:04:52 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/25 15:13:51 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ilen(long number)
{
	size_t	counter;

	counter = 0;
	if (number <= 0)
	{
		number *= -1;
		counter++;
	}
	while (number)
	{
		number /= 10;
		counter++;
	}
	return (counter);
}

static void	ft_putnbr_str(long number, size_t index, size_t length,
		char *string)
{
	while (index < length)
	{
		string[--length] = (number % 10) + '0';
		number /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	number;
	size_t	length;
	char	*string;

	number = n;
	length = ft_ilen(number);
	string = ft_calloc(length + 1, sizeof(char));
	if (number < 0)
	{
		number *= -1;
		*string = '-';
		ft_putnbr_str(number, 1, length, string);
	}
	else
		ft_putnbr_str(number, 0, length, string);
	return (string);
}
