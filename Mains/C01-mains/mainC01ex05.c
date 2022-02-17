/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:07:27 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/25 08:55:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_putstr(char *str);
void    tf_putchar(char c);

int main(void)
{
    printf("OSS 117 :\n");
  char strtest[] = "OSS 117";

  ft_putstr(strtest);
  return (0);
}
