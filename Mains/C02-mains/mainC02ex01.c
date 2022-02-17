/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:26:16 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/26 17:04:24 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char  *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
  char  src[] = "OSS 117";
  char  dest[] = "PQQ 2001";
  int n;

  n = 5;
  printf("source :%s\n", src);
  printf("destination :%s\n", dest);
  ft_strncpy(dest, src, n);
  printf("je copie...\n");
  printf("destination :%s\n", dest);
  return (0);
}
