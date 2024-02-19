/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:35:01 by epiacent          #+#    #+#             */
/*   Updated: 2024/02/19 20:52:24 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftstr(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		write(1, &str[i], 1);
	return (i + 1);
}
