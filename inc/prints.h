/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 21:17:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/28 21:17:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTS_H
# define PRINTS_H

# ifndef DECIMAL
#  define DECIMAL "0123456789"
# endif
# ifndef HEXA_UP
#  define HEXA_UP "0123456789ABCDEF"
# endif
# ifndef HEXA_LOW
#  define HEXA_LOW "0123456789abcdef"
# endif

# include "libft.h"

int	ft_printchar(int c);
int	ft_printchar_fd(char c, int fd);
int	ft_printstr(char *str);
int	ft_printstr_fd(char *str, int fd);
int	ft_println(char *str);
int	ft_println_fd(char *str, int fd);
int	ft_printtab(char *tab[]);
int	ft_printbase(long n, const char *base);
int	ft_printbase_fd(long n, const char *base, int fd);
int	ft_printubase(unsigned long n, const char *base);
int	ft_printubase_fd(unsigned long n, const char *base, int fd);
int	ft_print_ptr(void *ptr);
int	ft_printf(const char *str, ...);

#endif