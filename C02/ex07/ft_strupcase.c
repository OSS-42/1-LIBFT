/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:28:28 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/27 14:55:55 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
  int i;

  i = 0;
  if (str[i] == '\0')
    return (str);
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
    str[i] = str[i];
  i++;
  }
return (str);
}
