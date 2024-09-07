/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:48:38 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/08/01 15:43:32 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	long	len;
	int		*result;
	int		i;

	len = (long)max - min;
	if (min >= max || len > 2147483647)
		return (NULL);
	result = malloc((len) * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
/*
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Wrong nuber of arguments");
		return (0);
	}
	int	min;
	int	max;
	int	*range;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	range = ft_range(min, max);
	if (!range)
	{
		printf("NULL");
		return (0);
	}
    for (int i = 0; i < max - min ;i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
	return (0);
}
*/
