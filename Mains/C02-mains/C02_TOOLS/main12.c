/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraymond <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:17:46 by mraymond          #+#    #+#             */
/*   Updated: 2022/01/27 11:01:29 by mraymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int main()
{
	char	str[] = {'T','e','s','t',' ','n','o','n','e',' ','p','r','i','n','t','a','b','l','e',' ',4,9,23,31,' ','1','2','3','\0'};
    char    str2[] = "Ceci est un test \n avec des sauts de ligne \t des tabs \v et autres caracteres non printables. J'ajoute du texte pour que sa soit plus long. Datsit!!";
    
	ft_print_memory(str, 28);
    printf("\n");
    ft_print_memory(str2, 28);
}
