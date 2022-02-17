/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:46:32 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 10:13:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
  int result;

  char str[] = "117";
  char str2[] = "OSS 117";
  char str3[] = "";
  printf("source : %s\n", str);
  result = ft_str_is_numeric(str);
  printf("contient seulement des chiffres : %d\n", result);
  printf("source : %s\n", str2);
  result = ft_str_is_numeric(str2);
  printf("contient seulement des chiffres : %d\n", result);
  printf("source : %s\n", str3);
  result = ft_str_is_numeric(str3);
  printf("contient seulement des chiffres : %d\n", result);
  return (0);
}
