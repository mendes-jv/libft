/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:31:05 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/07 20:30:43 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_isalnum('a'));
	printf("%i", ft_isalnum('4'));
	printf("%i", ft_isalnum('\n'));
	printf("%s", "\n");
	printf("%i", ft_isalpha('a'));
	printf("%i", ft_isalpha('4'));
	printf("%i", ft_isalpha('\n'));
	printf("%s", "\n");
	printf("%i", ft_isdigit('b'));
	printf("%i", ft_isdigit('3'));
	printf("%i", ft_isdigit('\n'));
	printf("%s", "\n");
	printf("%i", ft_tolower('a'));
	printf("%i", ft_tolower('G'));
	printf("%i", ft_tolower('0'));
	printf("%s", "\n");
	printf("%i", ft_toupper('G'));
	printf("%i", ft_toupper('a'));
	printf("%i", ft_toupper('0'));
	return (0);
}
