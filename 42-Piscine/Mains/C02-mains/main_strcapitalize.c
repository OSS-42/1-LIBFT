/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcapitalize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:26:02 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 17:34:43 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);
char *ft_strlowcase(char *str);
int ft_char_is_alpha(char c);
int ft_char_is_alphaN(char c);

int main(void)
{
  char str[] = "0sS 117";
  char str2[] = "HUBERT boNNISS3UR,dE-lA~baTHE";
  char str3[] = "";

  printf("source : %s\n", str);
  ft_strcapitalize(str);
  printf("juste les debuts de mots en Majuscules : %s\n", str);
  printf("source : %s\n", str2);
  ft_strcapitalize(str2);
  printf("juste les debuts de mots en Majuscules : %s\n", str2);
  printf("source : %s\n", str3);
  ft_strcapitalize(str3);
  printf("juste les debuts de mots en Majuscules : %s\n", str3);
  return (0);
}
