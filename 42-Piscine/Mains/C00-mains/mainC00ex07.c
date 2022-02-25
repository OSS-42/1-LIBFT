/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:32:00 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/31 09:32:06 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int main()
{
    ft_putnbr(0);
	printf("\n");
	ft_putnbr(-42);
	printf("\n");
	ft_putnbr(42424242);
	printf("\n");	
	ft_putnbr(-2147483648);
	printf("\n");
    return (0);
}
