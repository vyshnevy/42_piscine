/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 19:25:30 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/31 19:32:26 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	
	if (nb >= 10)
	{
		ft_putchar((nb / 10) + '0');
		ft_putchar((nb % 10) + '0');
		return ;
	}
	ft_putchar('0');
	ft_putchar((nb % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = 0;
		while (j < 100)
		{
			ft_putnbr(i);
			write(1, " ", 1);
			ft_putnbr(j);
			if (i != 99 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
