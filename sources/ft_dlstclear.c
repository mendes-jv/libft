/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:15:52 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/27 15:21:52 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_dlstclear(t_dlist **lst, void (*del)(void *), bool free_content)
{
	t_dlist	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		if (free_content)
			ft_dlstdelone(*lst, del);
		else
			del(*lst);
		*lst = tmp;
	}
}