/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:05:14 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/12 22:45:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <limits.h>

static int	ft_size(long nb);

int	ft_size(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		size;
	long	nb;

	nb = n;
	size = ft_size(n);
	dst = (char *)malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	dst[size + 1] = '\0';
	if (nb == 0)
		dst[0] = 48;
	if (nb < 0)
	{
		dst[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		dst[size] = 48 + nb % 10;
		nb = nb / 10;
		size--;
	}
	return (dst);
}

/*int main (void)
{
	int	n1;
	int	n2;

	n1 = INT_MAX;
	n2 = INT_MIN;
	printf("n1 : %d\n", n1);
	printf("n2 : %d\n", n2);
	printf("s1 : %s\n", ft_itoa(n1));
	printf("s2 : %s\n", ft_itoa(n2));
}*/