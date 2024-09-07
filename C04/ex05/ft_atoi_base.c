/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:07:06 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/23 19:45:28 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

int	plus_minus(char *str, int *is_negative)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*is_negative *= -1;
		return (1);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	is_negative;
	int	i;

	if (ft_strlen(base) <= 1 || duplicate_char(base) || has_plus_minus(base))
		return (0);
	result = 0;
	is_negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (plus_minus(str, &is_negative))
		str++;
	while (*str)
	{
		i = 0;
		while (base[i] && base[i] != *str)
			i++;
		if (i == ft_strlen(base))
			break ;
		result = result * ft_strlen(base) + i;
		str++;
	}
	return (is_negative * result);
}
/*
int	main (int argn, char **args)
{
	if (argn != 3) {
        printf("Error: incorrect amount of arguments.\n");
        return (1);
    }
	printf("Result: %d\n", ft_atoi_base(args[1], args[2]));
	return (0);
}
*/
