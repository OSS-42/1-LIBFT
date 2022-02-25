/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC01ex08.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:17:31 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/30 16:51:31 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int	main (void)
{
    int tab[12] = {-1,5,7,8,7,8,12,-4,9,10,4,42};
    int i;
    int size;

    size = 12;
    /*i = 0;
    while (i < size)
    {
        tab[i] = size - i;
        printf("%d : %d\n", i + 1, tab[i]);
        i++;
    }
	*/
    ft_sort_int_tab(tab, size);
    printf("j'ordonne...\n");
    i = 0;
    while (i < size)
    {
        printf("%d : %d\n", i + 1, tab[i]);
        i++;
    }
}
