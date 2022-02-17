/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcapitalize0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:26:02 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/02 21:35:49 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char  *ft_strcapitalize(char *str);
char  *ft_lowercase(char *str);
int   ft_is_min(char c);
int   ft_not_alphanum(char c);

int main(void)
{
  char str1[] = "HUBERT boNNISS3UR,dE-lA~baTHE";
  char str2[] = "";

  printf("1 Source : %s\n", str1);
  ft_strcapitalize(str1);
  printf("Resultat : %s\n", str1);
  printf("1 Source : %s\n", str2);
  ft_strcapitalize(str2);
  printf("Resultat : %s\n", str2);
  return (0);
}
