/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:11:20 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/07 10:26:46 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer;

	buffer = ft_calloc(1, n);
	if (buffer == NULL)
		return (NULL);
	if (dest == NULL && src == NULL)
		return (NULL);
	ft_memcpy(buffer, src, n);
	ft_memcpy(dest, buffer, n);
	free(buffer);
	return (dest);
}
