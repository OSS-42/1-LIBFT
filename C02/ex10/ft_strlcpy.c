/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:28:57 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/08 17:36:08 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (size < 1)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
			dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (len);
}
