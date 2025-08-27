/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:59:30 by vsoares-          #+#    #+#             */
/*   Updated: 2025/04/20 21:32:19 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

// Escape base
# define ESC         "\033["

// Text Reset
# define RESET       ESC"0m"

// Regular Colors
# define BLACK       ESC"0;30m"
# define RED         ESC"0;31m"
# define GREEN       ESC"0;32m"
# define YELLOW      ESC"0;33m"
# define BLUE        ESC"0;34m"
# define PURPLE      ESC"0;35m"
# define CYAN        ESC"0;36m"
# define WHITE       ESC"0;37m"

// Bold
# define BBLACK      ESC"1;30m"
# define BRED        ESC"1;31m"
# define BGREEN      ESC"1;32m"
# define BYELLOW     ESC"1;33m"
# define BBLUE       ESC"1;34m"
# define BPURPLE     ESC"1;35m"
# define BCYAN       ESC"1;36m"
# define BWHITE      ESC"1;37m"

// Underline
# define UBLACK      ESC"4;30m"
# define URED        ESC"4;31m"
# define UGREEN      ESC"4;32m"
# define UYELLOW     ESC"4;33m"
# define UBLUE       ESC"4;34m"
# define UPURPLE     ESC"4;35m"
# define UCYAN       ESC"4;36m"
# define UWHITE      ESC"4;37m"

// Background
# define ON_BLACK    ESC"40m"
# define ON_RED      ESC"41m"
# define ON_GREEN    ESC"42m"
# define ON_YELLOW   ESC"43m"
# define ON_BLUE     ESC"44m"
# define ON_PURPLE 	 ESC"45m"
# define ON_CYAN     ESC"46m"
# define ON_WHITE    ESC"47m"

// High Intensity
# define IBLACK      ESC"0;90m"
# define IRED        ESC"0;91m"
# define IGREEN      ESC"0;92m"
# define IYELLOW     ESC"0;93m"
# define IBLUE       ESC"0;94m"
# define IPURPLE     ESC"0;95m"
# define ICYAN       ESC"0;96m"
# define IWHITE      ESC"0;97m"

// Bold High Intensity
# define BIBLACK     ESC"1;90m"
# define BIRED       ESC"1;91m"
# define BIGREEN     ESC"1;92m"
# define BIYELLOW    ESC"1;93m"
# define BIBLUE      ESC"1;94m"
# define BIPURPLE    ESC"1;95m"
# define BICYAN      ESC"1;96m"
# define BIWHITE     ESC"1;97m"

// High Intensity backgrounds
# define ON_IBLACK   ESC"0;100m"
# define ON_IRED     ESC"0;101m"
# define ON_IGREEN   ESC"0;102m"
# define ON_IYELLOW  ESC"0;103m"
# define ON_IBLUE    ESC"0;104m"
# define ON_IPURPLE  ESC"0;105m"
# define ON_ICYAN    ESC"0;106m"
# define ON_IWHITE   ESC"0;107m"

#endif