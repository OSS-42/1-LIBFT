/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC02ex10.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:49:24 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/31 15:34:57 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	int	size;
	int	result;
	char	src[] = "OSS 117";
	char	dest[] = "PQQ 2001";

	size = 7;
	printf("Source :%s\n", src);
	printf("Destination :%s\n", dest);
	printf("je copie...\n");
	result = ft_strlcpy(dest, src, size);
	printf("Longueur copie :%d\n", result);
	return (0);
}
