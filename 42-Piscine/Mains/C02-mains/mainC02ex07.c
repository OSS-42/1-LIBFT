/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:45:47 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 11:30:37 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
  char str[] = "oSs 117";
  char str2[] = "Hubert Bonnisseur de la Bathe";
  char str3[] = "";

  printf("source : %s\n", str);
  ft_strupcase(str);
  printf("en lettres capitales : %s\n", str);
  printf("source : %s\n", str2);
  ft_strupcase(str2);
  printf("en lettres capitales : %s\n", str2);
  printf("source : %s\n", str3);
  ft_strupcase(str3);
  printf("en lettres capitales : %s\n", str3);
  return (0);
}
