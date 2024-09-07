/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:59:31 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/25 14:28:30 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
    int test_indices[] = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 15};
    int num_tests = sizeof(test_indices) / sizeof(test_indices[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_fibonacci(test_indices[i]);
        printf("Fibonacci(%d) = %d\n", test_indices[i], result);
    }

    return 0;
}
*/
