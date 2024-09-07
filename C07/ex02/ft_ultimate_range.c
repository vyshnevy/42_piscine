/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:15:41 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/27 16:47:44 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(len * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
/*
int main()
{
    int *range;
    int size;
    int min = 5;
    int max = 10;

    size = ft_ultimate_range(&range, min, max);

    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    if (size == 0)
    {
        printf("Invalid range (min >= max)\n");
        return 1;
    }

    printf("Size of range: %d\n", size);
    printf("Values in range: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
	}
    printf("\n");

    free(range);  // Don't forget to free the allocated memory
    return 0;
}
*/
