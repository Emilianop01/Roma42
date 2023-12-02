/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 01:46:23 by epiacent          #+#    #+#             */
/*   Updated: 2023/12/02 05:07:28 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	char	e;
	a = '0';
	b = '1';
	c = '2';
	d = ',';
	e = ' ';
	while (a != '9' && b != '9' && c != '9')
	{
		while (c > b > a)
		{
			if (a != b && a != c && b != c)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &e, 1);
			}
		}
		c++;
		if (c = '9')
		{
			c = '0';
			b++;
		}
		if (b = '9')
		{
			b = '0';
			a++;
		}
	}
}

#include <unistd.h>

void ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;
    char    d;
    char    e;
    a = '0';
    b = '1';
    c = '2';
    d = ',';
    e = ' ';
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    write(1, &d, 1);
    write(1, &e, 1);
