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

void    ft_putchar(char c);
void    comb(int start, int n);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    comb(int start, int n)
{
    int index;

    if (n == 0)
    {
        ft_putchar(',');
        ft_putchar(' ');
        return ;
    }
    index = start + 1;
    while (index < 10)
    {
        ft_putchar(start + 48);
        ft_putchar(index + 48);
        comb(index, n - 1);
        index++;
    }
}

void    ft_print_combn(int n)
{
    comb(0, n);
}

int main(void)
{
    ft_print_combn(1);
    return (0);
}