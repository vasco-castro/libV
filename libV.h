/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libV.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:08:42 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/03 15:44:19 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBV_H
# define LIBV_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <limits.h>

# ifndef FOPEN_MAX
#  define FOPEN_MAX 512
# endif
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

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* CHECK FUNCTIONS */
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* CONVERTION FUNCTIONS */
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* STRING FUNCTIONS */
size_t	ft_strlen(const char *s);

/* PRINT FUNCTIONS */
int		ft_printchar(int c);
int		ft_printchar_fd(char c, int fd);
int		ft_printstr(char *str);
int		ft_printstr_fd(char *str, int fd);
int		ft_println(char *str);
int		ft_println_fd(char *str, int fd);
int		ft_printbase(long n, char *base);
int		ft_printbase_fd(long n, char *base, int fd);
int		ft_printf(const char *str, ...);

/* FILE FUNCTIONS */
char	*get_next_line(int fd);

#endif
