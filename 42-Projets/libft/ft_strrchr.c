/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:42:19 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/07 16:47:15 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*src;
	size_t	len;

	src = (char *)s;
	len = ft_strlen(src);
	a = (char)c;
	while (len > 0)
	{
		if (src[len] == a)
			return (&src[len]);
		len--;
	}
	return (NULL);
}
