/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is_uppercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:22:51 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 10:27:19 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
  int result;

  char str[] = "OsS";
  char str2[] = "OSS";
  char str3[] = "";
  printf("source : %s\n", str);
  result = ft_str_is_uppercase(str);
  printf("Seulement des majuscules : %d\n", result);
  printf("source : %s\n", str2);
  result = ft_str_is_uppercase(str2);
  printf("Seulement des majuscules : %d\n", result);
  printf("source : %s\n", str3);
  result = ft_str_is_uppercase(str3);
  printf("Seulement des majuscules : %d\n", result);
  return (0);
}
