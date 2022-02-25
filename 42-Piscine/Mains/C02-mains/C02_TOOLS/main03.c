/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:57:00 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/25 15:25:36 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	char	str[] = "5435262356426";
	char	str2[] = "a4532";
    char    str3[3] = "";
	
    printf("---------------------------------------------------------------\n");
    printf("renvoie 1 si numeric ou vide, sinon 0");
	printf("\nTest1\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str, ft_str_is_numeric(str));
    printf("\nTest2\nInput: %s\nRetour attendu : 0\nRetour fonction: %d", str2, ft_str_is_numeric(str2));
    printf("\nTest3\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str3, ft_str_is_numeric(str3));
    printf("\n***************************************************************");
}

