/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:30:51 by epiacent          #+#    #+#             */
/*   Updated: 2023/12/05 19:21:08 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	cambio;
	int	divisore;

	divisore = 10000000000;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = - nb;
	if (nb == 0)
		ft_putchar(nb);
	while (divisore >= 1)
	{
		if (nb / divisore > 0)
		{
			cambio = nb + '0';
			ft_putchar(cambio / divisore);
			cambio = cambio % divisore;
		}
		divisore = divisore / 10;
	}
}
