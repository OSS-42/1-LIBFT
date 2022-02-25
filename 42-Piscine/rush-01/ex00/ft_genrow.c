/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_genrow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:38:16 by ewurstei          #+#    #+#             */
/*   Updated: 2022/01/30 15:10:44 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_make_table (char *str)
{
    char [1][4];
}

void    ft_make_string (int a, int b, int c, int d)
{
    char str[7];
    int i;

    i = 0;
    while (i < 8)
    {
        if(i == 0)
            str[i] = a + 48;
        else if (i == 2)
            str[i] = b + 48;
        else if (i == 4)
            str[i] = c + 48;
        else if (i == 6)
            str[i] = d + 48;
        else
            str[i] = ' ';
        i++;
    }
    ft_make_table(str);
}

void ft_genrow(int a, int b, int c, int d)
{
    a = 1;
    while (a <= 4)
    {
        b = 1;
        while (b <=4)
        {
            c = 1;
            while (c <= 4)
            {
                d = 1;
                while (d <= 4)
                {
                    if ((a !=b ) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d))
                        ft_make_string(a, b, c, d);
                    d++;    
                }
                c++;
            }
            b++;
        }
        a++;
    }
}
