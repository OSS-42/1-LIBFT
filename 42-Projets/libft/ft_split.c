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

static unsigned int	ft_wordcount(char *s, char c)
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

static char	*ft_wordstorage(char *s, int i, unsigned int wordlen)
{
	char			*word;
	unsigned int	pos;

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
}

char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	row;
	unsigned int	wordlen;
	char			**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_wordcount((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	row = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		wordlen = 0;
		while (s[i + wordlen] && s[i + wordlen] != c)
			wordlen++;
		if (i < wordlen)
		{
			tab[row] = ft_wordstorage((char *)s, i, wordlen);
			row++;
		}
	}
	tab[row] = NULL;
	return (tab);
}

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
