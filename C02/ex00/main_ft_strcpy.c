/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:18:37 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/26 16:16:30 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char  *ft_strcpy(char *dest, char *src);

int main(void)
{
  char  src[] = "OSS 117";
  char  dest[] = "OSS 1001";

  printf("source :%s\n", src);
  printf("destination :%s\n", dest);
  ft_strcpy(dest, src);
  printf("je copie...%\n");
  printf("destination :%s\n", dest);
  return (0);
}
