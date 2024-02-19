/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:56:24 by epiacent          #+#    #+#             */
/*   Updated: 2024/02/19 20:30:33 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ftwrite(char c);
int	ftstr(char *str);
int	ftnbr(int i);
int	ftu(unsigned int i);
int	ftaddress(long long ptr, int i);
int	ftx(long long i, char c);

#endif
