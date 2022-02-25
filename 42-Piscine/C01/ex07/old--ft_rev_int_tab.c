/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:36:40 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/25 15:56:15 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *debtab, int *fintab)
{
  int buffer;

  buffer = *debtab;
  *debtab = *fintab;
  *fintab = buffer;
}

void ft_rev_int_tab(int *tab, int size)
{
  int i;

  i = 0;
  while (i < size / 2)
  {
    ft_swap(tab + i, tab + size - 1 - i);
    i++;
  }
}
