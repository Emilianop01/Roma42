/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:18:35 by epiacent          #+#    #+#             */
/*   Updated: 2023/12/01 22:29:12 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char a;
	a = 'z';
	while(a >= 'a')
	{
		ft_putchar(a);
		a--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
