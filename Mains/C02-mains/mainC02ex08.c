/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:33:18 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 11:50:04 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char  *ft_strlowcase(char *str);

int main(void)
{
  char str[] = "OsS 117";
  char str2[] = "HUBERT BoNNISSEUR DE LA BaTHE";
  char str3[] = "";

  printf("source : %s\n", str);
  ft_strlowcase(str);
  printf("en lettres minuscules : %s\n", str);
  printf("source : %s\n", str2);
  ft_strlowcase(str2);
  printf("en lettres minuscules : %s\n", str2);
  printf("source : %s\n", str3);
  ft_strlowcase(str3);
  printf("en lettres minuscules : %s\n", str3);
  return (0);
}
