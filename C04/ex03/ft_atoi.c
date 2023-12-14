/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epiacent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:19:38 by epiacent          #+#    #+#             */
/*   Updated: 2023/12/14 18:43:05 by epiacent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		segno;
	int		conv;

	conv = 0;
	i = 0;
	segno = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == ' ' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			segno = -segno;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		conv = conv * 10 - 48 + str[i];
		i++;
	}
	if (segno == -1)
		conv = -conv;
	return (conv);
}
