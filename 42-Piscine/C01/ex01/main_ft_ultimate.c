/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ultimate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:12:53 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/25 16:02:03 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********);

int main(void)
{
  int a;
  int *nbr1;
  int **nbr2;
  int ***nbr3;
  int ****nbr4;
  int *****nbr5;
  int ******nbr6;
  int *******nbr7;
  int ********nbr8;
  int *********nbr9;

  a = 5;
  nbr1 = &a;
  nbr2 = &nbr1;
  nbr3 = &nbr2;
  nbr4 = &nbr3;
  nbr5 = &nbr4;
  nbr6 = &nbr5;
  nbr7 = &nbr6;
  nbr8 = &nbr7;
  nbr9 = &nbr8;
  printf("Avant : %d\n", a);
  ft_ultimate_ft(nbr9);
  printf("Apres : %d\n", a);
  return (0);
}
