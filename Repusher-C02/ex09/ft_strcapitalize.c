/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:46:00 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/02 09:06:03 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_not_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int	ft_is_min(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

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
		return (0);
	ft_lowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
		count++;
	}
	while (str[count] != '\0')
	{
		if ((ft_not_alphanum(str[count]) == 1)
			&& (ft_is_min(str[count + 1]) == 1))
			str[count + 1] = str[count + 1] - 32;
		count++;
	}
	return (str);
}
