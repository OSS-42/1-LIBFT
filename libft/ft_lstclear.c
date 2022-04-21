/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:55:11 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/21 09:55:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{

	recursivite ?
	t_list	*buffer;
	t_list	*next;

	buffer = *lst;
	if (del)
	{
		if (buffer)
		{
			next = buffer->next;
			del(buffer->content);
			free(buffer);
			buffer = next;
		}
		*lst = NULL;
	}	
}
