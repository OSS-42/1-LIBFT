/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:01:40 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/08 13:24:31 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen((char *)src);
	i = 0;
<<<<<<< HEAD
	if (dstsize > 0)
=======
	if (dstsize <= 0)
		return (slen);
	while (src[i] != '\0' && i < dstsize - 1)
>>>>>>> 1bcf3237b8723bdfabcb782a037d42f324396db1
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (slen);
}
