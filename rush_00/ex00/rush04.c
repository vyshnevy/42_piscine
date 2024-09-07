/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmautner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:21:35 by kmautner          #+#    #+#             */
/*   Updated: 2024/07/14 10:57:17 by kmautner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

void	ft_putchar(char c);

void	print(int w, int h, int r, int c)
{
	if (r == 0 && c == 0)
	{
		ft_putchar('A');
	}
	else if (r == 0 && c == w - 1)
	{
		ft_putchar('C');
	}
	else if (r == h - 1 && c == 0)
	{
		ft_putchar('C');
	}
	else if (r == h - 1 && c == w - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush_main(int x, int y)
{
	int	row;
	int	clm;

	row = 0;
	while (row < y)
	{
		clm = 0;
		while (clm < x)
		{
			if ((row == 0 || row == y - 1) || (clm == 0 || clm == x - 1))
			{
				print(x, y, row, clm);
			}
			else
			{
				ft_putchar(' ');
			}
			clm++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	rush(int x, int y)
{
	if (x > INT_MAX || x < INT_MIN)
	{
		x = INT_MAX;
	}
	if (y > INT_MAX || x < INT_MIN)
	{
		y = INT_MAX;
	}
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}
	rush_main(x, y);
}
