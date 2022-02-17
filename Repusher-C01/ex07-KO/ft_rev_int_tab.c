/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:36:40 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/01 15:39:12 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	while (tab[i] && i < (size / 2))
	{
		buffer = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = buffer;
		i++;
	}
}
