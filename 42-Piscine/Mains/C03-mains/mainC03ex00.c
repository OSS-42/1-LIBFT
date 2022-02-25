/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:55:11 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/01 09:58:14 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "OSS 117";
	s2 = "OSS 117";
	printf("s1 vs s2 (=0) :%d\n", ft_strcmp(s1, s2));
	s3 = "OSS 118";
	printf("s1 vs s3 (-0) :%d\n", ft_strcmp(s1, s3));
	s4 = "OSS 116";
	printf("s1 vs s4 (+0) :%d\n", ft_strcmp(s1, s4));
	return (0);
}
