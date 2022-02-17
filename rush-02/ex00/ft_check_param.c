/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:48:13 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/06 14:04:08 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_params(int count, char **param)
{
	int	flag;
	int	row;
	int	col;

	flag = 1;
	if (count < 2 || count > 3)
		flag = 0;
	row = 1;
	col = 0;
	if (count == 2)
	{
		while (param[row][col] != '\0')
		{
			if (param[row][col] != 32 && !(param[row][col] >= '0' && param[row][col] <= '9'))
				flag = 0;
			col++;		
		}
	}
	//if (count == 3)
	// check validity of input parameters
    // ouverture en O_RDWR du dico
    // read pour chercher valeur
    // écriture pour remplacer texte
	return (flag);	
}
