/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:14:22 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/03 14:26:21 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);
int		ft_putnbr(int nbi, char *base);
int		ft_strlen(char *str);
int		ft_base_is_ok(char *base);

int	ft_base_is_ok(char *base)
{
	int	i;
	int	j;

	j = 1;
    i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 122)
			return (0);
		while (base[j] != '\0' )
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	div;
	int	count;
	int	c;

	count = 0;
    if (!(ft_base_is_ok(base)) == 1)
		return ;
	div = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(base[nbr] / ft_strlen(base), base);
		ft_putnbr_base(base[nbr] & ft_strlen(base), base);
		count++;
	}
	if (nbr< ft_strlen(base))
		ft_putchar(base[nbr]);
}

int	main(void)
{
	int	nb1;
	char	*base1;

	nb1 = 12;
	base1 = "0123456789ABCDEF";
	ft_putnbr_base(nb1, base1);
	return (0);
}
