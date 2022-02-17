/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:35:22 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/02 10:56:30 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_base(int z);

char	ft_base(int z)
{
	char	*base;

	base = "0123456789abcdef";
	return (base[z]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex1;
	char	hex2;

	i = 0;
	hex1 = 0;
	hex2 = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			hex1 = (str[i] / 16) + 48;
			hex2 = ft_base(str[i] % 16);
			write(1, "\\", 1);
			write(1, &hex1, 1);
			write(1, &hex2, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
