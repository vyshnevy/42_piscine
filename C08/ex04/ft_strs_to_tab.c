/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:19:51 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/29 16:43:38 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

char	*ft_strcpy(char *dest, char *src)
{
	char	*origin;

	origin = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (origin);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*result;

	result = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = (char *)malloc(sizeof(char) * (result[i].size + 1));
		if (!result[i].copy)
		{
			while (i > 0)
				free(result[i--].copy);
			free(result);
			return (NULL);
		}
		ft_strcpy(result[i].copy, av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}
