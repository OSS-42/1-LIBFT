/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:46:00 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/09 14:13:10 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	if (str[count] == 0)
		return (str);
	ft_lowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		count = 1;
	}
	while (str[count] != '\0')
	{
		if (str[count] < '0'
			|| (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a')
			|| str[count] > 'z')
			if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
				str[count + 1] = str[count + 1] - 32;
		count++;
	}
	return (str);
}
