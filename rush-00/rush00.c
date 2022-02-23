/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:05:38 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/23 10:05:38 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	horizontal(int x);

void	line(int x, int y);

void	horizontal(int x)
{
	int		pos;
	char	c;

	c = '-';
	pos = 2;
	while (pos < x)
	{
		ft_putchar(c);
		pos++;
	}
	return ;
}

void	line(int x, int y)
{
	char	*corner;

	corner = "oooo";
	if (x == 1 && y == 1)
	{
		ft_putchar(corner[0]);
	}
	if (y == 1)
	{
		ft_putchar(corner[0]);
		horizontal(x);
		if (x > 1)
			ft_putchar(corner[1]);
	}
	if (y > 1)
	{
		ft_putchar(corner[2]);
		horizontal(x);
		if (x > 1)
			ft_putchar(corner[3]);
	}
	ft_putchar('\n');
	return ;
}

void	vertical(int x)
{
	int		pos;
	char	c;
	char	d;

	c = '|';
	d = ' ';
	pos = 1;
	ft_putchar(c);
	pos++;
	if (x > 1)
	{
		while (pos < x)
		{
			ft_putchar(d);
			pos++;
		}
		ft_putchar(c);
	}
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	int		height;

	if (x < 0 || y < 0)
		return ;
	line(x, y);
	height = 2;
	while (height < y)
	{
		vertical(x);
		height++;
	}
	if (y > 1)
		line(x, y);
	return ;
}
