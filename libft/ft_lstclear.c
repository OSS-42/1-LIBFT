/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:55:11 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/21 13:40:53 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buffer;
	
	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = buffer;
	}
//	free(*lst);
//	*lst = NULL;
}
