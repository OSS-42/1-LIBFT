/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03ex04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:59:34 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/01 17:01:54 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char s1[50] = "Hubert Bonnisseur de la Bathe";
	char s2[50] = "Bon";
	char s3[50] = "";
	char s4[50] = "Hubert Bonnisseur de la Bathe est OSS 117";
	char s5[50] = "OSS 117";

	printf("Result (normal): %s\n", ft_strstr(s1, s2));
	printf("Result (vide): %s\n", ft_strstr(s1, s3));
	printf("Result (+ grand): %s\n", ft_strstr(s1, s4));
	printf("Result (pas la): %s\n", ft_strstr(s1, s5));
	return (0);
}
