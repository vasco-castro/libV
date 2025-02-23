/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:08:42 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/23 17:54:15 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <limits.h>
# include <stdbool.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef DECIMAL
#  define DECIMAL "0123456789"
# endif
# ifndef HEXA_UP
#  define HEXA_UP "0123456789ABCDEF"
# endif
# ifndef HEXA_LOW
#  define HEXA_LOW "0123456789abcdef"
# endif

/* CHECK FUNCTIONS */

int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isxdigit(int c);
int		ft_isalnum(int c);
int		ft_isblank(int c);
int		ft_isspace(int c);
int		ft_ispunct(int c);
int		ft_isgraph(int c);
int		ft_iscntrl(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);

/* CONVERTION FUNCTIONS */

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* MEMORY FUNCTIONS */

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

/* STRING FUNCTIONS */

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

char	*ft_strdup(const char *s1);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	*ft_tabdel(char **tab, size_t len);

/* PRINT FUNCTIONS */

int		ft_printchar(int c);
int		ft_printchar_fd(char c, int fd);
int		ft_printstr(char *str);
int		ft_printstr_fd(char *str, int fd);
int		ft_println(char *str);
int		ft_println_fd(char *str, int fd);
int		ft_printtab(char *tab[]);
int		ft_printbase(long n, const char *base);
int		ft_printbase_fd(long n, const char *base, int fd);
int		ft_printubase(unsigned long n, const char *base);
int		ft_printubase_fd(unsigned long n, const char *base, int fd);
int		ft_print_ptr(void *ptr);
int		ft_printf(const char *str, ...);

/* FILE FUNCTIONS */

char	*get_next_line(int fd);

#endif
