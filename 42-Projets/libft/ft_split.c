/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:24:56 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/14 10:38:21 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
/*
static void	*ft_wordstorage(char *ptr, char *str, size_t wordlen, size_t i)
=======
static unsigned int	ft_wordcount(char *s, char c)
>>>>>>> 5773c9fe379be50bebc78556697d5657da384c91
{
	unsigned int	i;
	unsigned int	wordcount;

	i = 0;
	wordcount = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			wordcount++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (wordcount);
}
*/

<<<<<<< HEAD
/*
static char	**ft_rowsalloc(char *ptr, size_t row)
=======
static char	*ft_wordstorage(char *s, int i, unsigned int wordlen)
>>>>>>> 5773c9fe379be50bebc78556697d5657da384c91
{
	char			*word;
	unsigned int	pos;

<<<<<<< HEAD
	new_ptr = (char **)malloc(sizeof(char) * row);
	ft_memmove(new_ptr, ptr, row);
	free(ptr);
	return (new_ptr);
=======
	pos = 0;
	word = (char *)malloc(sizeof(char) * (wordlen + 1));
	if (!word)
		return (NULL);
	while (pos < wordlen)
	{
		word[pos] = s[i];
		pos++;
	}
	word[pos + 1] = '\0';
	return (word);
>>>>>>> 5773c9fe379be50bebc78556697d5657da384c91
}
*/

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	row;
	unsigned int	wordlen;
<<<<<<< HEAD
	char			**dst;
	
	dst = NULL;
=======
	char			**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_wordcount((char *)s, c) + 1));
	if (!tab)
		return (NULL);
>>>>>>> 5773c9fe379be50bebc78556697d5657da384c91
	i = 0;
	row = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		wordlen = 0;
		while (s[i + wordlen] && s[i + wordlen] != c)
			wordlen++;
<<<<<<< HEAD
//			write(1, &s[i - 1], 1);
			if (wordcount > cycles)
			{
//				write(1, "\n", 1);
//				printf("wordlen : %d\n", wordlen);
				*dst[wordcount - 1] = (char *)malloc(sizeof(char) * wordcount);
				dst[wordcount - 1][wordlen + 1] = '\0';
				while (wordlen > 0)
				{
					*dst[wordcount - 1] = (char *)malloc(sizeof(char) * (wordlen + 1));
					dst[wordcount - 1][wordlen] = s[wordlen + i];
					wordlen--;
				}
//				wordlen = 0;
			}
=======
		if (i < wordlen)
		{
			tab[row] = ft_wordstorage((char *)s, i, wordlen);
			row++;
>>>>>>> 5773c9fe379be50bebc78556697d5657da384c91
		}
		*dst[wordcount] = (char *)malloc(sizeof(char) * 1);
		dst[wordcount][0] = '\0';
	}
	tab[row] = NULL;
	return (tab);
}

<<<<<<< HEAD
int main (void)
{
	unsigned int	i;
	
	char **table;
	char	s1[] = "     Please   Split   Me   !     ";
	/*char	s2[] = "OSS117 - Alerte Rouge en Afrique Noire !";
	char	s3[] = "OSS117 ";
	char	s4[] = " OSS117";
	char	s5[] = "OSS117";*/
	char	c = ' ';

	i = 0;
	
	table = ft_split(s1, c);
  
	while (table[i])
	{
		printf(" s1 (4) : %s\n", *table);
		i++;
	}
	/*printf(" s2 (8) : %s\n", ft_split(s2, c));
	printf(" s3 (1) : %s\n", ft_split(s3, c));
	printf(" s4 (1) : %s\n", ft_split(s4, c));
	printf(" s5 (1) : %s\n", ft_split(s5, c));*/

	return (0);
}

/*
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

*/
=======
int	main (void)
{
	char **tab;
	int i;

	i = 0;
	while (i < 9)
	{
		tab = ft_split("OSS 117 - Alerte Rouge en Afrique Noire", ' ');
		printf("mot #%d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}
>>>>>>> 5773c9fe379be50bebc78556697d5657da384c91
