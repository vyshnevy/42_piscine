/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:43:47 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/14 14:20:44 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_idx;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		if (min_idx != i)
		{
			swap(&tab[min_idx], &tab[i]);
		}
		i++;
	}
}
/*
int main() {
    int tab[] = {5,2,3,4,3,0,-2};
    int size = 7;
    ft_sort_int_tab(&tab[0], size);
    for (int i = 0;i< size;i++)
    {
        printf("%d",tab[i]);
    }

    return 0;
}
*/
