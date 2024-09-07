/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:47:21 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/25 13:57:21 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main()
{
    int test_bases[] = {2, 3, 5, -2, 0};
    int test_powers[] = {-1, 0, 1, 2, 3, 4};
    int num_bases = sizeof(test_bases) / sizeof(test_bases[0]);
    int num_powers = sizeof(test_powers) / sizeof(test_powers[0]);

    for (int i = 0; i < num_bases; i++)
    {
        for (int j = 0; j < num_powers; j++)
        {
            int result = ft_iterative_power(test_bases[i], test_powers[j]);
            printf("%d^%d = %d\n", test_bases[i], test_powers[j], result);
        }
        printf("\n");
    }

    return 0;
}
*/
