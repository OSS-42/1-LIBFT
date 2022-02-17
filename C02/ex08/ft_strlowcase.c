/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:49:46 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 11:50:10 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strlowcase(char *str)
{
  int i;

  i = 0;
  if (str[i] == '\0')
    return (str);
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
    str[i] = str[i];
  i++;
  }
  return (str);
}
