/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_to_table.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:11:45 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/06 14:08:09 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_dict_to_table(char *dict);
int		ft_check_string(char *str);

int		ft_check_string(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (dict[i] != '\0')
	{
		while (dict[i] != ':')
		{
			if (dict[i] < '0' || dict[i] > '9')
				flag = 0;
			i++;
		}
		i++;
		while (dict[i] != '\0')
		{
			if (!(dict[i] >= 'a' && dict[i] <= 'z') || !(dict[i] >= 'A' && dict[i] <= 'Z'))
			   flag = 0;	
			i++;
		}
	}
	write(1, "Dict Error", 10);
	write(1, "\n", 1);
}

void	ft_dict_to_table(char *dict)
{
	int	row;
	int	col;
	int	i;
	int	nb;
	int	maxrow;
	char *s1;

	// row = nbre de lignes total du dictionnaire (a définir)
	char tab[maxrow][2];
	// on récupère chaque ligne du dictionnaire pour la traiter
	col = 0;
	row = 0;
	i = 0;
	nb = 0;
	ft_check_string(dict);
	while (row <= maxrow)
	{
		while (dict[i] != ' ')
		{
			nb = nb * 10 + (dict[i] - 48)
			i++;
		}
		tab[row][0] = nb;
		row++;
	}
	col++;
	row = 0;
	while (row <= maxrow)
	{
		while (dict[i] != '\0')
		{
			if ((dict[i] >= 'a' && dict[i] <= 'z') || (dict[i] >= 'A' && dict[i] <= 'Z'))
				tab[row][1] = &dict[i];
			i++;
		}
		row++;
	}
}
