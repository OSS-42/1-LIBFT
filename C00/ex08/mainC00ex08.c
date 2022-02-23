/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC00ex08.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:04:57 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/22 19:04:57 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_print_combn(int n);

int main(void)
{
    int n;

    n = 7;
    printf("n = %d\n", n);
    ft_print_combn(n);
    return (0);
}