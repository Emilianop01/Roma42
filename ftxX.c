/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftxX.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:52:58 by epiacent          #+#    #+#             */
/*   Updated: 2024/02/19 20:49:42 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftx(long long i, char c)
{
	int		res;
	char	*base;
	int		cont;

	cont = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
    if (i < 0)
    {
        cont += write(1, "-", 1);
        i = -i;
    }
	if (i > 15)
		ftx(i / 16, c);
	res = i % 16;
	write(1, &base[res], 1);
	cont++;
	return (cont);
}
