/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:17:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/03/06 17:27:37 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTS_H
# define PRINTS_H

# include "libft.h"

# ifndef FORMATTER
#  define FORMATTER '%'
# endif
# ifndef F_CHAR
#  define F_CHAR 'c'
# endif
# ifndef F_STRING
#  define F_STRING 's'
# endif
# ifndef F_STRING_TAB
#  define F_STRING_TAB 't'
# endif
# ifndef F_POINTER
#  define F_POINTER 'p'
# endif
# ifndef F_BOOL
#  define F_BOOL 'b'
# endif
# ifndef F_BOOL_UPPER
#  define F_BOOL_UPPER 'B'
# endif
# ifndef F_DIGIT
#  define F_DIGIT 'd'
# endif
# ifndef F_INTEGER
#  define F_INTEGER 'i'
# endif
# ifndef F_UNSIGNED
#  define F_UNSIGNED 'u'
# endif
# ifndef F_HEXA
#  define F_HEXA 'x'
# endif
# ifndef F_HEXA_UP
#  define F_HEXA_UP 'X'
# endif

# ifndef BASE_10
#  define BASE_10 "0123456789"
# endif
# ifndef BASE_16
#  define BASE_16 "0123456789abcdef"
# endif
# ifndef BASE_16_UP
#  define BASE_16_UP "0123456789ABCDEF"
# endif

int	ft_printbool(bool b);
int	ft_printbool_fd(bool b, int fd);

int	ft_printchar(int c);
int	ft_printchar_fd(char c, int fd);

int	ft_printstr(char *str);
int	ft_printstr_fd(char *str, int fd);

int	ft_println(char *str);
int	ft_println_fd(char *str, int fd);

int	ft_printtab(char **tab);
int	ft_printtab_fd(char **tab, int fd);

int	ft_printbase(long n, const char *base);
int	ft_printbase_fd(long n, const char *base, int fd);

int	ft_printubase(unsigned long n, const char *base);
int	ft_printubase_fd(unsigned long n, const char *base, int fd);

int	ft_printptr(void *ptr);
int	ft_printptr_fd(void *ptr, int fd);

int	ft_printfile(const char *filepath);
int	ft_printfile_fd(const char *filepath, int fd);

int	ft_printf(const char *str, ...);
int	ft_printf_fd(const char *str, int fd, ...);

#endif