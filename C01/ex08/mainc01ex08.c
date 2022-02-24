/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01ex08.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:49:39 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/23 14:49:39 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int main()
{
    int index;
    int size;

    size = 10;
    index = 0;
    int tab[11] = {12,543,65,-23,76,25,87,103,0,69};
    while (index < size)
    {   
        printf("%d,", tab[index]);
        index++;
    }
    printf("\nSorting...\n");
    ft_sort_int_tab(tab, size);
    index = 0;
    while (index < size)
    {   
        printf("%d,", tab[index]);
        index++;
    }
    printf("\n");
    return (0);
}