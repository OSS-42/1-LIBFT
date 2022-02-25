/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:18:57 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/25 08:54:37 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 42;
    b = 4;
    div = 0;
    mod = 0;
    ft_div_mod(a, b, &div, &mod);
    printf("a / b = %d\n", div);
    printf("a % b = %d\n", mod);
    return (0);
}
