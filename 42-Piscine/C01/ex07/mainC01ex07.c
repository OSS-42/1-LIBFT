/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC01ex07.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:12:51 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/23 14:12:51 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

int main()
{
    int tab[25];
    int size;
    int index;

    size = 10;
    index = 0;
    while (index < size)
    {
        tab[index] = size - index;
        printf("pos %d : %d", index, tab[index]);
        if (index != size -1)
            printf(" - ");
        index++;
    }
    printf("\nje swappe...\n");
    ft_rev_int_tab(tab, size);
    index = 0;
    while (index < size)
    {
        printf("pos %d : %d", index, tab[index]);
        if (index != size -1)
            printf(" - ");
        index++;
    }
    printf("\n");
    return (0);
}