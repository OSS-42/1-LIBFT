/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:21:51 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/08 17:26:08 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *prog);

void	ft_putstr(char *prog)
{
	int	i;

	i = 0;
	while (prog[i] != '\0')
	{
		write(1, &prog[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (0);
	ft_putstr(argv[0]);
	return (0);
}
