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

void    ft_print_combn(int n);
void    ft_print_comb1(int n);

void    ft_print_comb1(int n)
{
    char    a;

    a = '0';
    while (a <= '9')
    {
        write(1, &a, 1);
        if (a < '9')
            write(1, ', ', 2);
        a++;
    }
}

void    ft_print_combn(int n)
{
    if (n <= 0 && n >= 10)
        return (0);
    if (n == 1)
        ft_print_comb1(n);
    if (n >= 2)
    {
        while (n > 0)
        {
            ft_print_comb1(n);
            n--;
        }        
    }
}

int main(void)
{
    ft_print_combn(2);
    return (0);
}