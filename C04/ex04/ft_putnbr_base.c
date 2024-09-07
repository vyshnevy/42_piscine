/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:50:27 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/23 14:52:14 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	duplicate_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	has_plus_minus(char *str)
{
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (1);
		str++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		is_negative;
	long	long_nbr;
	int	base_len;

	if (ft_strlen(base) <= 1 || duplicate_char(base) || has_plus_minus(base))
		return ;
	is_negative = 0;
	long_nbr = nbr;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		long_nbr *= -1;
	}
	if (long_nbr == 0)
		write(1, "0", 1);
	else
	{
	if (long_nbr >= base_len)
		ft_putnbr_base(long_nbr / base_len, base);
	write(1, &base[long_nbr % base_len], 1);
	}
}
/*
int main (int argn, char **args)
{
	if (argn != 3) {
        write(2, "Error: incorrect amount of arguments.\n", 38);
        return (1);
    }
    ft_putnbr_base(atoi(args[1]), args[2]);
	return (0);
}
*/
