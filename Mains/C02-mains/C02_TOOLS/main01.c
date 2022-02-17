/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:15:31 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/25 14:41:10 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define destlen 20

char *ft_strncpy(char *dest, char *src, unsigned int n);

void    ft_clear_dest(char *dest, char *dest2)
{
    int i = 0;
    
    while (i < destlen - 1)
    {
        dest[i] = '-';
        dest2[i] = '-';
        i++;
    }
    dest[i] = '\0';
    dest2[i] = '\0';
}

int	main()
{
	char	src[12] = "ABCDEFGHIJ";
	char	dest[destlen];
    char    dest2[destlen];
    int     test = 1;
    int     testval[] = {0, 8, 4, 15};
    int     i = 0;

    printf("---------------------------------------------------------------\n");
    ft_clear_dest(dest,dest2);
	printf("La fonction doit copier la string src dans dest du nombre de caractere specifie\nsrc: %s\nString de depart:%s", src, dest);
    while (test <= 4)
    {
        ft_clear_dest(dest,dest2);
        ft_strncpy(dest, src, testval[test - 1]);
        strncpy(dest2, src, testval[test - 1]);
        printf("\ntest%d: longueur: %d\nRetour attendu : %s\nRetour fonction: %s\n", test, testval[test-1], dest2, dest);
        test++;
    }
    i = 0;
    write (1, "\n", 1);
    printf("test4 memory print (le @@@@@----@ a la fin est important) @ = vide\n");
    while (i < destlen)
    {
        if (dest[i] == '\0')
            write (1, "@", 1);
        else
            write (1, &dest[i], 1);
        i++;
    }
    i = 0;
    write (1, "\n", 1);
    while (i < destlen)
    {
        if (dest[i] == '\0')
            write (1, "@", 1);
        else
            write (1, &dest[i], 1);
        i++;
    }
    write (1,"\n", 1);
}
