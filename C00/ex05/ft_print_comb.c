/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:44:20 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/15 14:30:13 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writer(char hundreds, char tens, char ones, int *first)
{
	char	num[3];

	num[0] = hundreds;
	num[1] = tens;
	num[2] = ones;
	if (! (num[0] == num[1] || num[0] == num[2] || num[1] == num[2]))
	{
		if (*first != 1)
		{
			write(1, ", ", 2);
		}
		write(1, num, 3);
		*first = 0;
	}
}

void	ft_print_comb(void)
{
	int		first;
	char	hundreds;
	char	tens;
	char	ones;

	first = 1;
	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '9')
		{
			ones = tens + 1;
			while (ones <= '9')
			{
				ft_writer(hundreds, tens, ones, &first);
				ones++;
			}
			tens++;
		}
		hundreds++;
	}
}
