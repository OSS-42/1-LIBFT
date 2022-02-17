/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstein@student.42quebec.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:08:58 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/31 09:29:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n);

int main(void)
{
	printf("Devrait etre P:\n");
   	ft_is_negative(0);
	printf("\n");
	printf("Devrait etre P:\n");
	ft_is_negative(42);
	printf("\n");
	printf("Devrait etre N:\n"),
	ft_is_negative(-42);
	printf("\n");
	return(0);
}
