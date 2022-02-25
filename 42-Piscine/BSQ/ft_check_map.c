/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:16:16 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/09 20:00:44 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_first_line(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i] != '\n')
		i++;
	i = i + 1;
	while (buffer[i] != '\n')
	{	
		count++;
		i++;
	}
	return (count);
}

int	ft_samelenght(char *buffer)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	i = i + 1;
	while (buffer[i] != '\n')
		i++;
	i = i + 1;
	count = ft_first_line(buffer);
	while (buffer[i] != '\0')
	{
		j = 0;
		while (buffer[i] != '\n')
		{
			j++;
			i++;
		}
		if (j != count)
			return (0);
		i++;
	}
	return (1);
}

int	ft_min_row(char *buffer)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			count = count + 1;
		i++;
	}
	if (count < 2)
		return (0);
	if (count == 2)
	{
		i = 0;
		while (buffer[i] != '\n')
			i++;
		i = i + 1;
		if (buffer[i] == '\n')
		{
			return (0);
		}
	}
	return (1);
}

int	ft_check_map(char *buffer)
{
	if (ft_samelenght(buffer) == 0)
		return (0);
	if (ft_min_row(buffer) == 0)
		return (0);
	return (1);
}
