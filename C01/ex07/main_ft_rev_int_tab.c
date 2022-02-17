/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_rev_int_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:55:00 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/25 15:56:42 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[12];
	int i;
	int size;

	size = 12;
	i = 0;
	while (i < size)
	{
		tab[i] = size - i;
    printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
  printf("je swappe...\n");
  i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
}
