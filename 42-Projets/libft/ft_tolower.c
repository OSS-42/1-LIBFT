/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:22:56 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/25 14:22:56 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_tolower(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		str[i] = str[i];
	i++;
	}
	return (str);
}
