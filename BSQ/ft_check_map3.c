/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:38:46 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/09 18:50:44 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num_of_line(char *buffer);

int	ft_num_of_line(char *buffer)
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
	return (count - 1);
}

int	ft_check_lines(char *buffer)
{
	int	i;
	int	rows;
	int	line;
	int	len;

	rows = 0;
	i = 0;
	while (buffer[i] != '\n')
		i++;
	len = i;
	i = 0;
	while (i < len)
	{
		while (buffer[i] >= '0' && buffer[i] <= '9')
		{
			rows = rows * 10 + (buffer[i] - 48);
			i++;
		}
		i++;
	}
	line = ft_num_of_line(buffer);
	if (rows != line)
		return (0);
	return (1);
}

int	ft_check_map3(char *buffer)
{
	if (ft_check_lines(buffer) == 0)
		return (0);
	return (1);
}
