/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:57:00 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/25 15:19:11 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main()
{
	char	str[] = "Ceciestunephrase";
	char	str2[] = "4eci est une phrase 2";
    char    str3[3] = "";
	
    printf("---------------------------------------------------------------\n");
    printf("Renvoie 1 si alphabetique et vide, 0 sinon");
	printf("\nTest 1\ninput: %s\nRetour attendu : 1\nRetour fonction: %d", str, ft_str_is_alpha(str));
    printf("\nTest 2\ninput: %s\nRetour attendu : 0\nRetour fonction: %d", str2, ft_str_is_alpha(str2));
    printf("\nTest 3\ninput: %s\nRetour attendu : 1\nRetour fonction: %d", str3, ft_str_is_alpha(str3));
    printf("\n***************************************************************");
}

