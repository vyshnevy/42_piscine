/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:29:41 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/25 14:38:40 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i < 46340)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int main()
{
    int test_numbers[] = {-4, 0, 1, 4, 9, 16, 25, 36, 49, 64,
		   				81, 100, 101, 2147395600};
    int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_sqrt(test_numbers[i]);
        printf("Square root of %d is: %d\n", test_numbers[i], result);
    }

    return 0;
}
*/
