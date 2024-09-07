/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:44:39 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/25 14:53:30 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (! ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main()
{
    int test_numbers[] = {-5, 0, 1, 2, 3, 4, 10, 17, 20, 97, 100, 541, 1000};
    int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

    printf("\nTesting ft_find_next_prime:\n");
    for (int i = 0; i < num_tests; i++)
    {
        int next_prime = ft_find_next_prime(test_numbers[i]);
        printf("Next prime after %d is %d\n", test_numbers[i], next_prime);
    }

    return 0;
}
*/
