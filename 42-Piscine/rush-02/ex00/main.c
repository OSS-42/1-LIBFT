/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:16:17 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/06 17:25:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_params(int count, char **param);

int main(int argc, char **argv)
{
	int	ok;

	ok = 1;
	if (ft_check_params(argc, argv) == 0)
	{
		write(1, "error", 5);
		write(1, "\n", 1);
		ok = 0;
	}

	if (ok == '0')
		return (0);

	if (ft_check_dict() == 0)
	{
		write(1, "Dict error", 10);
		write(1, "\n", 1);
		ok = 0;
	}

	if (ok == '0')
		return (0);
	
	// create table from dict ft_dict_to_table.c 
	// find string in table with ft_strstr
	// write text
	//
	// missing : rewriting dictionnary
	return (0);
}
