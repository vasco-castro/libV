/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:59:30 by vsoares-          #+#    #+#             */
/*   Updated: 2025/09/07 12:52:39 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

// Text Reset
# define RESET       "\e[0m"

// Regular Colors
# define BLACK       "\e[0;30m"
# define RED         "\e[0;31m"
# define GREEN       "\e[0;32m"
# define YELLOW      "\e[0;33m"
# define BLUE        "\e[0;34m"
# define PURPLE      "\e[0;35m"
# define CYAN        "\e[0;36m"
# define WHITE       "\e[0;37m"

// Bold
# define BBLACK      "\e[1;30m"
# define BRED        "\e[1;31m"
# define BGREEN      "\e[1;32m"
# define BYELLOW     "\e[1;33m"
# define BBLUE       "\e[1;34m"
# define BPURPLE     "\e[1;35m"
# define BCYAN       "\e[1;36m"
# define BWHITE      "\e[1;37m"

// Underline
# define UBLACK      "\e[4;30m"
# define URED        "\e[4;31m"
# define UGREEN      "\e[4;32m"
# define UYELLOW     "\e[4;33m"
# define UBLUE       "\e[4;34m"
# define UPURPLE     "\e[4;35m"
# define UCYAN       "\e[4;36m"
# define UWHITE      "\e[4;37m"

// Background
# define ON_BLACK    "\e[40m"
# define ON_RED      "\e[41m"
# define ON_GREEN    "\e[42m"
# define ON_YELLOW   "\e[43m"
# define ON_BLUE     "\e[44m"
# define ON_PURPLE 	 "\e[45m"
# define ON_CYAN     "\e[46m"
# define ON_WHITE    "\e[47m"

// High Intensity
# define IBLACK      "\e[0;90m"
# define IRED        "\e[0;91m"
# define IGREEN      "\e[0;92m"
# define IYELLOW     "\e[0;93m"
# define IBLUE       "\e[0;94m"
# define IPURPLE     "\e[0;95m"
# define ICYAN       "\e[0;96m"
# define IWHITE      "\e[0;97m"

// Bold High Intensity
# define BIBLACK     "\e[1;90m"
# define BIRED       "\e[1;91m"
# define BIGREEN     "\e[1;92m"
# define BIYELLOW    "\e[1;93m"
# define BIBLUE      "\e[1;94m"
# define BIPURPLE    "\e[1;95m"
# define BICYAN      "\e[1;96m"
# define BIWHITE     "\e[1;97m"

// High Intensity backgrounds
# define ON_IBLACK   "\e[0;100m"
# define ON_IRED     "\e[0;101m"
# define ON_IGREEN   "\e[0;102m"
# define ON_IYELLOW  "\e[0;103m"
# define ON_IBLUE    "\e[0;104m"
# define ON_IPURPLE  "\e[0;105m"
# define ON_ICYAN    "\e[0;106m"
# define ON_IWHITE   "\e[0;107m"

#endif