/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 15:45:25 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/25 15:45:25 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    char    *str;

    str = s;
    str[n] = '\0';
    n--;
    while (n > 0)
    {
        str[n] = c;
        n--;
    }
    str[n] = '\0';
    return (s);
}