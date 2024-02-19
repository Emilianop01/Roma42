/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:17:53 by epiacent          #+#    #+#             */
/*   Updated: 2024/02/19 20:34:25 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printargs(va_list args, char c)
{
	if (c == 'c')
		return (ftwrite(va_arg(args, int)));
	else if (c == 's')
		return (ftstr(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ftnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ftu(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ftaddress(va_arg(args, long long), 0));
	else if (c == 'x' || c == 'X')
		return (ftx(va_arg(args, long long), c));
	else
		return (ftwrite(c));
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		while (s[i] && s[i] != '%')
			count += ftwrite(s[i++]);
		if (s[i] == '%')
		{
			count += printargs(args, s[++i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
