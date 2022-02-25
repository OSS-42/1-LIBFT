/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:05:20 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/09 18:18:53 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_legend(char *buffer);
int	ft_last_three(char *buffer);
int	ft_check_char(char *buffer);

int	ft_check_legend(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	if (i < 4)
		return (0);
	return (1);
}

int	ft_last_three(char *buffer)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (buffer[len] != '\n')
		len++;
	len = len - 1;
	if (buffer[len] == buffer[len - 1] || buffer[len] == buffer [len - 2]
		|| buffer [len - 1] == buffer[len - 2])
		return (0);
	while (i < len - 2)
	{
		if (buffer[i] < '0' || buffer[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_char(char *buffer)
{
	int	i;
	int	len;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	len = i;
	i = i + 1;
	while (buffer[i] != '\0')
	{
		if ((buffer[i] != buffer[len - 3])
			&& (buffer[i] != buffer[len - 2])
			&& (buffer[i] != buffer[len - 1])
			&& buffer[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_map2(char *buffer)
{
	if (ft_check_char(buffer) == 0)
		return (0);
	if (ft_check_legend(buffer) == 0)
		return (0);
	if (ft_last_three(buffer) == 0)
		return (0);
	return (1);
}
