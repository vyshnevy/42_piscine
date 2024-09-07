/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:22:23 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/25 13:31:03 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
    int test_cases[] = {-1, 0, 1, 5, 8, 12, 13};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_recursive_factorial(test_cases[i]);
        printf("Factorial of %d = %d\n", test_cases[i], result);
    }

    return 0;
}
*/
