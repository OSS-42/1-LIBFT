/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:27:23 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/09 18:54:23 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

extern int	g_errno;

int		ft_check_lines(char *buffer);
int		ft_check_printable(char *buffer);
int		ft_last_three(char *buffer);
int		ft_check_legend(char *buffer);
int		ft_min_row(char *buffer);
int		ft_samelength(char *buffer);
int		ft_check_char(char *buffer);
void	ft_putstr(char *buffer);
int		ft_check_map(char *buffer);
int		ft_check_map2(char *buffer);
int		ft_check_map3(char *buffer);

int	ft_check_printable(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		if ((buffer[i] < 32 || buffer[i] == 127) && buffer[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putstr(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		write(1, &buffer[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int		fd;
	char	buffer[2001];
	int		i;
	int		len;

	i = 0;
	fd = open("map.txt", O_RDONLY);
	len = read(fd, buffer, 2000);
	ft_putstr(buffer);
	if (fd == -1)
		return (0);
	close(fd);
	if (buffer[i] == 0)
		ft_putstr("map error");
	buffer[len] = '\0';
	if (ft_check_printable(buffer) == 0)
		ft_putstr("map error");
	if (ft_check_map(buffer) == 0 && ft_check_map2(buffer)
		&& ft_check_map3(buffer) == 0)
		ft_putstr("map error");
	ft_putstr("la carte est bonne");
	return (0);
}
