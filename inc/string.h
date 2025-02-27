/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:51:40 by vsoares-          #+#    #+#             */
/*   Updated: 2025/02/26 12:22:59 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
#define STRING_H

# include "libft.h"

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
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	*ft_tabdel(char **tab, size_t len);

size_t	ft_strntkn(char *str, char c);
size_t	ft_tkncount(char *str, char c);

#endif
