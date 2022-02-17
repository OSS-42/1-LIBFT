/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:57:00 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/25 15:44:11 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
	char	str[] = "minuscule";
	char	str2[] = "MaJusCulE";
    char	str3[3] = "";
	
    printf("---------------------------------------------------------------\n");
    printf("renvoie 1 si alphabetique minuscule et vide, sinon 0");
	printf("\ntest1\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str, ft_str_is_lowercase(str));
    printf("\ntest2\nInput: %s\nRetour attendu : 0\nRetour fonction: %d", str2, ft_str_is_lowercase(str2));
    printf("\ntest3\nInput: %s\nRetour attendu : 1\nRetour fonction: %d", str3, ft_str_is_lowercase(str3));
    printf("\n***************************************************************");
}
