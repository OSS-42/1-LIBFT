/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:15:31 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/25 14:24:23 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main()
{
	char	src[18] = "Je copie une str.";
    char	dest[] = "------------------------------";
    char    dest2[] = "------------------------------";
    
    printf("---------------------------------------------------------------\n");
	ft_strcpy(dest, src);
    strcpy(dest2, src);
	printf("La fonction doit copier la string src dans dest.\nsrc : %s\nretour attendu : %s\nretour fonction: %s", src, dest2, dest);
    printf("\n***************************************************************");
}
