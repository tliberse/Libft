/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:12:55 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/04 18:53:45 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "bsd/string.h"
# include <limits.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlcpy(char *dst, char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			*ft_itoa(int n);
char			**ft_split(const char *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif