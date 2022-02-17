/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:56:44 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 11:17:16 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
  int i;
  char strTest[] = "Hubert Bonnisseur de la Barthe";

  i = ft_strlen(strTest);
  printf("%d\n", i);
  return (0);
}
