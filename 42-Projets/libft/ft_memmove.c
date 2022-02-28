/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:11:20 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/28 14:11:20 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*buffer;
	char		*dest2;
	int			i;

	dest2 = dest;
	buffer = src;
	i = 0;
	while (n > 0)
	{
		dest2[i] = buffer[i];
		i++;
		n--;
	}
	dest2[i] = '\0';
	return (dest);
}