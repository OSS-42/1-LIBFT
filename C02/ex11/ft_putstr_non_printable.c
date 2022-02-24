/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:22 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/08 17:37:51 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_base(char z);
void	ft_putchar(char z);

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_base(char z)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[z / 16]);
	ft_putchar(base[z % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 0)
		{
			ft_putchar('\\');
			ft_putchar(0);
			ft_putchar(0);
		}
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_base(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
