/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:13:59 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/31 10:43:32 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
  int result;

  char str[] = "oss";
  char str2[] = "osS";
  char str3[] = "";
  printf("source : %s\n", str);
  result = ft_str_is_lowercase(str);
  printf("Seulement des miniscules : %d\n", result);
  printf("source : %s\n", str2);
  result = ft_str_is_lowercase(str2);
  printf("Seulement des miniscules : %d\n", result);
  printf("source : %s\n", str3);
  result = ft_str_is_lowercase(str3);
  printf("Seulement des miniscules : %d\n", result);
  return (0);
}
