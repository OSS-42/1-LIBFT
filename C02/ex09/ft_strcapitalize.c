/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:04:35 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/02 21:34:13 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

 char *ft_strcapitalize(char *str);

 char *ft_strcapitalize(char *str)
 {
 	int		count;
 	int		charnext;
 	char	c;

 	count = 0;
 	charnext = 1;
 	while (str[count] != '\0')
 	{
 		c = str[count];
 		if (charnext == 1 && c >= 'a' && c <= 'z')
 			str[count] -= 32;
 		else if (charnext == 0 && c >= 'A' && c <= 'Z')
 			str[count] += 32;
 		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
 			charnext = 1;
 		else
 			charnext = 0;
 		count++;
 	}
 	return (str);
 }
