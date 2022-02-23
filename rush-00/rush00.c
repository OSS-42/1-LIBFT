/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:05:38 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/23 10:05:38 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    vertical(int x, int y)
{
    int     pos;
    int     pos2;
    char    c;
    char    d;

    c = '|';
    d = ' ';
    pos2 = 2;
    while (pos2 < y)
    {
        pos = 1;
        ft_putchar(c);
        pos++;
        if (x > 1)
        {
            while (pos < x)
            {
                ft_putchar(d);
                pos++;
            }
            ft_putchar(c);
        }
        ft_putchar('\n');
        pos2++;
    }
    return ;
}

void    horizontal(int x)
{
    int     pos;
    char    c;

    c = '-';
    pos = 2;
    while (pos < x)
        {
            ft_putchar(c);
            pos++;
        }
    return ;
}

void    rush(int x, int y)
{
    char    *corner;
    int     height;

    corner = "oooo";
    if (x < 0 || y < 0)
        return ;
    if (x == 1 && y == 1)
    {
        ft_putchar(corner[0]);
        return ;
    }
    height = 1;
    if (height == 1)
    {
        ft_putchar(corner[0]);
        horizontal(x);
        if (x > 1)
            ft_putchar(corner[1]);
        ft_putchar('\n');
    } 
    if (height < y)
        vertical(x, y);
    if (y > 1)
    {
        ft_putchar(corner[2]);
        horizontal(x);
        if (x > 1)
            ft_putchar(corner[3]);
        ft_putchar('\n');
    }
    return ;
}