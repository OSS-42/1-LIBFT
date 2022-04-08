/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:41:09 by ewurstei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/08 11:21:07 by ewurstei         ###   ########.fr       */
=======
/*   Updated: 2022/04/07 16:24:21 by ewurstei         ###   ########.fr       */
>>>>>>> 11cd5158105e41171e9d0cecbb43c275ad012680
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = ft_strlen(dest);
<<<<<<< HEAD
	dlen = j;
=======
	dlen = ft_strlen(dest);
>>>>>>> 11cd5158105e41171e9d0cecbb43c275ad012680
	slen = ft_strlen((char *)src);
	if (dlen > dstsize)
		return (dstsize + slen);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
