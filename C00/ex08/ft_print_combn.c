/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:09:51 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/17 11:09:51 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    increment(char *dest, int n, int round);
void    ft_putstr(char *dest);
void    updest(char *dest, int n, int round);
void    ft_putchar(char c);
int    checkend(char *dest, char *end);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *dest)
{
    int index;

    index = 0;
    while (dest[index] != '\0')
    {
        ft_putchar(dest[index]);
        index++;
    }
    return ;
}

int checkend(char *dest, char *end)
{
    int index;

    index = 0;
    while (dest[index] == end[index] && dest[index] != '\0' && end[index] != '\0')
        index++;
    return (dest[index] - end[index]);
}    

void    updest(char *dest, int n, int round)
{
    int pos;

    pos = n - 1;
    round = round + 1;
    dest[pos - 1] = dest[pos - 1] + 1;
    dest[pos] = dest[pos - 1] + 1;
    ft_putstr(dest);
    if (round == 8)
        return ;
    write(1, ", ", 2);
    increment(dest, n, round);
}

void    increment(char *dest, int n, int round)
{
    char    end[n];
    int     pos;
    int     position;

    pos = n - 1;
    position = n;
    while (pos >= 0)
    {
        end[pos] = 10 - (n - pos);
        pos--;
    }
    end[n] = '\0';
    pos = n - 1;
    while (dest[pos] != '9')
    {
        if (checkend(dest, end) == 0)
            return ;
        dest[pos] = dest[pos] + 1;
        ft_putstr(dest);
        write(1, ", ", 2);
    }
    updest(dest, position, round);
    return ;
}

void    ft_print_combn(int n)
{
    char    dest[n];
    char    *ref;
    int     index;
    int     round;

    index = 0;
    round = 0;
    ref = "0123456789";
    while (ref[index] != '\0' && index <= n)
    {
        dest[index] = ref[index];
        index++;
    }
    dest[index] = '\0';
    ft_putstr(dest);
    write(1, ", ", 2);
    increment(dest, n, round);
}

int main(void)
{
    ft_print_combn(9);
    return (0);
}