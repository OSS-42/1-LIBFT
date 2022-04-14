/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:24:56 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/13 16:29:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	*ft_wordstorage(char *ptr, char *str, size_t wordlen, size_t i)
{
	ptr = (char *)malloc(sizeof(char) * (wordlen + 1));
	ptr[wordlen + 1] = '\0';
	while (wordlen > 0)
	{
		ptr[wordlen] = str[wordlen + i]; 
		wordlen--;
	}
	return (ptr);
}

static void	**ft_rowsalloc(void **ptr, size_t size)
{
	char	**new_ptr;

	**new_ptr = (char **)malloc(sizeof(char) * size + 1);
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
*/
static unsigned int	ft_wordcount(char *s, char c)
{
	unsigned int	i;
	unsigned int	wordcount;
	unsigned int	cycles;
	unsigned int	wordlen;
	char			**dst;

	i = 0;
	wordcount = 0;
	wordlen = 0;
	cycles = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			cycles = wordcount;
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				wordcount++;
			i++;
			wordlen++;
			write(1, &s[i - 1], 1);
			if (wordcount > cycles)
			{
				write(1, "\n", 1);
				printf("wordlen : %d\n", wordlen);
//				dst = ft_rowsralloc(**dst, wordcount);
//				dst = ft_wordstorage(*dst, s, wordlen, i);
				wordlen = 0;
			}
		}
	}
//	return (dst);
	return (wordcount);
}

/*char **ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	size;
	unsigned int	wordcount;
	char 			**dst;
	
	if (!s)
		return (NULL);

	wordcount = ft_wordcount((char *)s, c);

	i = 0;
	while (wordcount > 0)
	{
		while (s[i])
		{
			
			i++;
		}
		wordcount--;
	}
	
	return (dst);
}*/

int main (void)
{
	char	s1[] = "     Please   Split   Me   !     ";
	char	s2[] = "OSS117 - Alerte Rouge en Afrique Noire !";
	char	s3[] = "OSS117 ";
	char	s4[] = " OSS117";
	char	s5[] = "OSS117";
	char	c = ' ';

	printf("wordcount s1 (4) : %u\n", ft_wordcount(s1, c));
	printf("wordcount s2 (8) : %u\n", ft_wordcount(s2, c));
	printf("wordcount s3 (1) : %u\n", ft_wordcount(s3, c));
	printf("wordcount s4 (1) : %u\n", ft_wordcount(s4, c));
	printf("wordcount s5 (1) : %u\n", ft_wordcount(s5, c));

	return (0);
}

/*	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("ch : %c\n", c);
	printf("fts1 : %s\n", **ft_split(*s1, c));
	printf("fts2 : %s\n", **ft_split(*s2, c));*/
	