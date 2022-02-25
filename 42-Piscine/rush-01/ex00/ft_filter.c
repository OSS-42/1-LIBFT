/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filtre.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:55:28 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/30 15:00:38 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *argv);

int	ft_strlen(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_filter(int argc, char *argv)
{
	int	i;

	i = 0;
	if (argc != 2 || argv == 0)
		return (0);
	if (ft_strlen(argv) != 31)
		return (0);
	while (i < 31)
	{
		if ((argv[i] < '1' || argv[i] > '4') && argv[i] != 32)
			return (0);
		if ((argv[i] >= '1' && argv[i] <= '4') && (argv[(i + 1)] != 32
				&& argv[(i +1)] != '\0'))
			return (0);
		i++;
	}
	i = 0;
	while (i <= 22)
	{
		if ((argv[i] + argv[(i + 8)] < (3 + 2 * 48))
			|| (argv[i] + argv[(i + 8)] > (5 + 2 * 48)))
			return (0);
		i = i + 2;
	}
	return (1);
}	
