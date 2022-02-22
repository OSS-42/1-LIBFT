/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:09:51 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/17 11:09:51 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    increment(char *dest, int n, int pos, int i);
void    ft_putstr(char *dest);
void    ft_putchar(char c);
int    checkend(char *dest, int n);
void    updest(char *dest, int n, int pos, int i);

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *dest)
{
    int index;

    index = 0;
    while (dest[index] != '\0')
    {
        ft_putchar(dest[index]);
        index++;
    }
    return ;
}

// utilisation d'une string de reference pour trouver la string de fin
// si n = 4, il s'agira des 4 derniers chiffres de la string : 6789
// la string 'end' stockera les chiffres de fin
int checkend(char *dest, int n)
{
    char    *ref;
    char    end[n];
    int     i;
    int     j;

    i = 0;
    ref = "0123456789";
    i = 11 - n - 1;
    j = 0;
    while (ref[i] != '\0')
    {
        end[j] = ref[i];
        i++;
        j++;
    }
    end[j] = '\0';
    i = 0;
    while (dest[i] == end[i] && dest[i] != '\0' && end[i] != '\0')
        i++;
    return (dest[i] - end[i]);
}    

// on incremente la derniere position de la string jusqu'au 9
// tout en imprimant a l'ecran chaque string incrementee
// on passe a la dizaine precedente tant qu'a la position on a le maximum
// une fois qu'on a pas le maximum, on recommence a partir de cette position
// on redefinit une string de depart
void    increment(char *dest, int n, int pos, int i)
{
    while (dest[n - 1] < '9')
    {
        dest[n - 1] = dest[n - 1] + 1;
        ft_putstr(dest);
        if (checkend(dest, n) == 0)
            return ;
        write(1, ", ", 2);
    }
    updest(dest, n, pos, i);
}

void    updest(char *dest, int n, int pos, int i)
{
    int j;

    j = 0;
    while (dest[pos] == i + '0')
    {
        j++;
        pos--;
        i--;
    }
    if (j > 0)
    {
        if (dest[pos] != '\0' && dest[pos] != '9')
        {
            dest[pos] = dest[pos] + 1;
            dest[pos + 1] = dest[pos] + 1;
            ft_putstr(dest);
            if (checkend(dest, n) == 0)
                    return ;
            write(1, ", ", 2);
        }
    }
    pos = n - 1;
    i = 9;
    increment(dest, n, pos, i);
    return ;
}

// utilisation d'une string de reference pour trouver la string de depart
// si n = 4, il s'agira des 4 premiers chiffres de la string : 0123
// la string 'dest' stockera les chiffres de depart
// on affiche la premiere iteration de dest, sans modification
// puis on verifie si 'dest' = 'end', 
// notamment pour n = 9 pour eviter la ponctuation de fin
// sinon on ecrit la ponctuation et on effectue les iterations suivantes
void    ft_print_combn(int n)
{
    char    dest[n];
    char    *ref;
    int     index;
    int     pos;
    int     i;

    if (n <= 0 || n >= 10)
        return ;
    index = 0;
    ref = "0123456789";
    while (ref[index] != '\0' && index < n)
    {
        dest[index] = ref[index];
        index++;
    }
    dest[index] = '\0';
    ft_putstr(dest);
    pos = n - 1;
    i = 9;
    write(1, ", ", 2);
    increment(dest, n, pos, i);
    return ;
}

int main(void)
{
    ft_print_combn(7);
    return (0);
}