/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:39:02 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/25 14:43:57 by dvyshnev         ###   ########.fr       */
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
/*
int main()
{
    int test_numbers[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
   	11, 13, 97, 100, 541};
    int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_is_prime(test_numbers[i]);
        printf("%d is %s\n", test_numbers[i], result ? "prime" : "not prime");
    }

    return 0;
}
*/
