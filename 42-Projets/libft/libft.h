/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:23:32 by ewurstei          #+#    #+#             */
/*   Updated: 2022/04/07 16:45:36 by ewurstei         ###   ########.fr       */
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
void			*ft_calloc(size_t count, size_t size);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
char			*ft_strrchr(const char *s, int c);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
size_t			ft_strlcat(char *dest, const char *src, size_t dstsize);
int				ft_strlen(char *str);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strstr(char *str, char *to_find);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
