/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftaddress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:00:22 by epiacent          #+#    #+#             */
/*   Updated: 2024/02/19 20:46:20 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftaddress(long long ptr, int i)
{
	int		cont;
	char	*base;
	int		res;

	base = "0123456789abcdef";
	cont = 0;
	if (i++ == 0)
	{
		write(1, "0x", 2);
		cont += 2;
	}
	if (ptr > 15)
		ftaddress(ptr / 16, i);
	res = ptr % 16;
	write(1, &base[res], 1);
	cont++;
	return (cont);
}
