/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:56:31 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/31 16:55:26 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);
int	duplicate_char(char *str);
int	has_plus_minus(char *str);
int	ft_atoi_base(char *str, char *base);

int	is_valid_base(char *base)
{
	if (ft_strlen(base) <= 1)
		return (0);
	if (duplicate_char(base))
		return (0);
	if (has_plus_minus(base))
		return (0);
	return (1);
}

int	calculate_length(long decimal, int base_len)
{
	int	len;
	int	temp;

	len = 0;
	if (decimal == 0)
		return (1);
	if (decimal < 0)
	{
		len++;
		temp = decimal * (-1);
	}
	else
		temp = decimal;
	while (temp > 0)
	{
		temp /= base_len;
		len++;
	}
	return (len);
}

void	if_nbr_zero(long long_nbr, char *result, char *base)
{
	if (long_nbr == 0)
		result[0] = base[0];
}

void	ft_putnbr_base(int nbr, char *base, char *result, int len)
{
	int		base_len;
	long	long_nbr;
	int		i;

	long_nbr = nbr;
	base_len = ft_strlen(base);
	if (!is_valid_base(base))
		return ;
	i = len - 1;
	if_nbr_zero(long_nbr, result, base);
	if (long_nbr < 0)
	{
		result[0] = '-';
		long_nbr *= -1;
	}
	while (long_nbr > 0)
	{
		result[i--] = base[long_nbr % base_len];
		long_nbr /= base_len;
	}
	result[len] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	decimal;
	char	*result;
	int		len;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	decimal = ft_atoi_base(nbr, base_from);
	len = calculate_length(decimal, ft_strlen(base_to));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_putnbr_base(decimal, base_to, result, len);
	return (result);
}
/*
int	main(int argc, char **argv)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	if (argc != 4)
	{
		printf("You should input: number, base_from, base_to");
		return (0);
	}
	nbr = argv[1];
	base_from = argv[2];
	base_to = argv[3];
	printf("%s", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
*/
