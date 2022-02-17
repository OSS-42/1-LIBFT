/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:15:31 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/26 07:59:17 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

void ft_printmemory(char *str, int len)
{
    int i = 0;
    
    write (1, "\n", 1);
    while (i <= len)
    {
        if (str[i])
            write (1, &str[i], 1);
        else
            write (1, "@", 1);
        i++;
    }
}

int	main()
{
	char	src[] = "ABCDEFGHIJ";
	char	dest[11];
    char    dest2[11];
    unsigned int    i;
    unsigned int    i2;
    unsigned int    test = 1;
    unsigned int    testval[] = {6, 11, 3, 9, 0};
    
    printf("---------------------------------------------------------------\n");
    printf("Doit reproduire strlcpy\n");
    printf("Input string: %s", src);
    while (test <= 5)
    {
        i = ft_strlcpy(dest, src, testval[test - 1]);
        i2 = strlcpy(dest2, src, testval[test - 1]);
        printf("\n\nTest%d\ninput size: %d\nRetour attendu : %s\nRetour Dest    : %s\nRetour attendu2: %d\nRetour fonction: %d\n",test, testval[test - 1], dest2, dest, i2, i);
        write (1, "Print memory", 13);
        ft_printmemory(dest2,11);
        ft_printmemory(dest,11);
        test++;
    }
    printf("\n***************************************************************");
}
