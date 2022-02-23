/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:01:59 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/23 14:01:59 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int	index;

	index = 0;
	while (index < size / 2)
	{
		buffer = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = buffer;
		index++;
	}
}
