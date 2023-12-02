/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:57:10 by epiacent          #+#    #+#             */
/*   Updated: 2023/12/01 22:15:40 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char a;
	a = 'a';
	while(a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int main()
{
	ft_print_alphabet();
	return 0;
}

