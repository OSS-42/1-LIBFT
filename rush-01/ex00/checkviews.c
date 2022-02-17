/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:15:30 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/30 15:25:27 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


check_colup(char **argv)
{
	int	i;
	int temp;

	i = 0;
	temp = 0;
	while (arg[i] < 7)
	{
		if (argv[i][j] < argv[(i + 8)][j]
			   temp += 1;	
		i++;
	}if
	if (arg[i] > col1up)
		return (0);
	return (1);	
	}
}

check_coldown(char **argv)
{
	int	i;
	int temp;

	i = 0;
	temp = 0;
	while (arg[i] < 7)
	{
		if (argv[i][j] < argv[i][j+1]
			   temp += 1;	
		i++;
	}
	if (arg[i] > col1up)
		return (0);
	return (1);	
	}
}

check_rowleftp(char **argv)
{
	int	i;
	int temp;

	i = 0;
	temp = 0;
	while (arg[i] < 7)
	{
		if (argv[i][j] < argv[i][j+1]
			   temp += 1;	
		i++;
	}
	if (arg[i] > col1up)
		return (0);
	return (1);	
	}
}

check_rowright(char **argv)
{
	int	i;
	int temp;

	i = 0;
	temp = 0;
	while (arg[i] < 7)
	{
		if (argv[i][j] < argv[i][j+1]
			   temp += 1;	
		i++;
	}
	if (arg[i] > col1up)
		return (0);
	return (1);	
	}
}

