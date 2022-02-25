/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:29:48 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/25 09:32:24 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
  int a;
  int b;

  a = 45;
  b = 6;
  ft_ultimate_div_mod(&a, &b);
  printf("a / b = %d\n", a);
  printf("a %% b = %d\n", b);
  return (0);
}
