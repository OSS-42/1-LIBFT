/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:23:32 by ewurstei          #+#    #+#             */
/*   Updated: 2022/02/28 14:23:32 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalpha(char *str);
int				ft_isdigit(char *str);
int				ft_isprint(char *str);
//void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void 			ft_putstr(char *str);
char			*ft_strcat(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int 			ft_strlen(char *str);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
char			*ft_tolower(char *str);
char			*ft_toupper(char *str);

#endif
