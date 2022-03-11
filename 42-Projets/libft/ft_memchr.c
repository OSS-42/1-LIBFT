/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:30:19 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/28 14:30:19 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	const char	*str;
	int			i;

	i = 0;
	str = s;
	while (str[i] != '\0')
	{
		if (str[i] = c)
			return (str);
		i++;
	}
	return (NULL);
}