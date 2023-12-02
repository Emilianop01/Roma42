/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:35:21 by epiacent          #+#    #+#             */
/*   Updated: 2023/12/01 22:44:34 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_numbers(void)
{
	char b;
	b = '0';
	while(b <= '9')
	{
		ft_putchar(b);
		b++;
	}
}

int main()
{
	ft_print_numbers();
	return 0;
}
