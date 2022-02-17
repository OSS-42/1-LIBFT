/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03ex03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:05:37 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/01 13:08:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);

int main(void)
{
	char	s1[50] = "Hubert Bonnisseur de la Bathe";
	char	s2[50] = " est OSS 117!";
	int		n;

	n = 8;
	printf("Phrase (coupe a OSS): %s\n", ft_strncat(s1, s2, n));
	return (0);
}
