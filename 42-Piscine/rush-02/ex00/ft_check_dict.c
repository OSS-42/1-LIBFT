/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:08:21 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/06 16:27:00 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

extern int errno;

int main(void)
{
	int fd;
	char s1[2000];
	int	flag;
	int i;
	int	j;
	int	k;
	int	len;
	char s2[5000];

	i = 0;
	flag = 1;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error", 10);
		flag = 0;
	}
	
	read(fd, s2, 2000);
	len = ft_strlen(s2);
	printf("Longueur :%d\n", len);
	close(fd); 
	
	fd = open("numbers.dict.txt", O_RDONLY);	
	
	read(fd, s1, len);
	s1[len] = '\0';
	printf("%s\n", s1);

	if (s1[i] == 0)
		flag = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\n')
		{
			k = 0;
			break ;
			while (s1[k] != ':')
			{
				if (s1[k] != ' ' || (s1[k] < '0' || s1[k] > '9'))
					flag = 0;
				k++;
			}
			j = k;
			if (s1[j] != ':' || s1[j] != ' ' || s1[j] < 'a' || s1[j] > 'z' || s1[j] < 'A' || s1[j] > 'Z')
				flag = 5;
			j++;
		}
		i = j;
		i++;
	}
	if (close(fd) < 0)
	{
		perror("c1");
		return (1);
	}
	printf("longueur : %d\n", ft_strlen(s1));
	printf("flag :%d\n", flag);
	return (flag);
}
