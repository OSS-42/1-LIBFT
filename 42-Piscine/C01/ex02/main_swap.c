/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:31:45 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/24 17:33:26 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *, int *);

int main(void)
{
  int a;
  int b;

  a = 10;
  b = 42;
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("je swap... \n");
  ft_swap(&a, &b);
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  return (0);
}
