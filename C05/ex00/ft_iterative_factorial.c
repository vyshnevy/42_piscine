/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:47:29 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/25 13:16:53 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int main()
{
    int test_numbers[] = {-1, 0, 1, 5, 8, 12};
    int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_iterative_factorial(test_numbers[i]);
        printf("Factorial of %d is: %d\n", test_numbers[i], result);
    }

    return 0;
}
*/
