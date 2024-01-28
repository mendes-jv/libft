/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:00:40 by jovicto2          #+#    #+#             */
/*   Updated: 2023/12/11 11:00:41 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

long long	ft_operate(long long a, long long b, char operator)
{
	if (operator == MIN)
	{
		if (a <= b)
			return (a);
		return (b);
	}
	if (a >= b)
		return (a);
	return (b);
}