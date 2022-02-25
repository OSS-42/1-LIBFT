/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:55:48 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/30 15:24:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_filter(int argc, char *argv);
void	ft_genrow(int a, int b, int c, int d);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (ft_filter(argc, argv[1]) == 0)
		ft_putstr("Error");
	ft_genrow(1,1,1,1);
	//ft_checkduplicates();
	//ft_checkviews();
	//ft_displaysolution();
	return(0);
	
}
