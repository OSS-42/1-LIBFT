/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:05:01 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/26 18:10:15 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main (void)
{
  int z;
  char str[] = "OSS";
  char str2[] = "OSS 117";
  char str3[] = "";

  printf("source : %s\n", str);
  z = ft_str_is_alpha(str);
  printf("contient seulement l'alphabet: %d\n", z);
  printf("source : %s\n", str2);
  z = ft_str_is_alpha(str2);
  printf("contient seulement l'alphabet: %d\n", z);
  printf("source : %s\n", str3);
  z = ft_str_is_alpha(str3);
  printf("contient seulement l'alphabet: %d\n", z);
}
