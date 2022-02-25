/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_is_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:28:30 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 10:37:43 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
  int result;

  char str[] = "OSS 117 -->[]";
  char str2[] = "OSS\n 117";
  char str3[] = "";
  printf("source : %s\n", str);
  result = ft_str_is_printable(str);
  printf("Seulement des printables : %d\n", result);
  printf("source : %s\n", str2);
  result = ft_str_is_printable(str2);
  printf("Seulement des printables : %d\n", result);
  printf("source : %s\n", str3);
  result = ft_str_is_printable(str3);
  printf("Seulement des printables : %d\n", result);
  return (0);
}
