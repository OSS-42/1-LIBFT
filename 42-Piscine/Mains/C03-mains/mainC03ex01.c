/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03ex01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:34:34 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/01 10:37:29 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	int		n;

	n = 5;
	s1 = "Hubert Bonnisseur de la Bathe";
	s2 = "Hubert Bonnisseur de la Bathe";
	printf("s1 vs s2 (=0) :%d\n", ft_strncmp(s1, s2, n));
	s3 = "Hudert Bonnisseur de la Bathe";
	printf("s1 vs s3 (-0) :%d\n", ft_strncmp(s1, s3, n));
	n = 15;
	s4 = "Hubert Bonnasseur de la Bathe";
	printf("s1 vs s4 (+0) :%d\n", ft_strncmp(s1, s4, n));
	return (0);
}
