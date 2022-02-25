/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:41:09 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/25 14:41:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;
	return (lenght);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	unsigned int	k;
	int				l;

	i = 0;
	j = ft_strlen(dest);
	k = j;
	l = ft_strlen(src);
	while (src[i] != '\0' && i < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (dest[i] == 0 || k > size)
		return (j);
	dest[j] = '\0';
	return (j + l);
}
