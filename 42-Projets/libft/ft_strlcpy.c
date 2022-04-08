/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:01:40 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/08 12:11:51 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen((char *)src);
	i = 0;
	j = ft_strlen(dst);
	dlen = j;
	if (j > dstsize)
		return (slen);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
