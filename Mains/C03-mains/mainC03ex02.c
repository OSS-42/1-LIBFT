/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03ex02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:32:21 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/01 13:05:21 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

int	main(void)
{
	char	s1[50] = "Hubert Bonnisseur de la Bathe";
	char	s2[50] = " est OSS 117!";

	printf("Phrase : %s\n", ft_strcat(s1, s2));
	return (0);
}
