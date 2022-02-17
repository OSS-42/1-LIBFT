/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:07:03 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/28 12:06:15 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 5;
    printf("Avant :%d\n", nbr);
	ft_ft(&nbr);
	printf("Après :%d\n", nbr);
	return (0);
}
