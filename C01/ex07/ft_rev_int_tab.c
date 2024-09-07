/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:59:20 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/14 13:13:57 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		end--;
		start ++;
	}
}
/*
void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Test case 1: Even number of elements
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Test case 1 (Even):\n");
    printf("Original array: ");
    print_array(arr1, size1);
    ft_rev_int_tab(arr1, size1);
    printf("Reversed array: ");
    print_array(arr1, size1);
    printf("\n");

    // Test case 2: Odd number of elements
    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Test case 2 (Odd):\n");
    printf("Original array: ");
    print_array(arr2, size2);
    ft_rev_int_tab(arr2, size2);
    printf("Reversed array: ");
    print_array(arr2, size2);
    printf("\n");

    // Test case 3: Array with one element
    int arr3[] = {100};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Test case 3 (Single element):\n");
    printf("Original array: ");
    print_array(arr3, size3);
    ft_rev_int_tab(arr3, size3);
    printf("Reversed array: ");
    print_array(arr3, size3);
    printf("\n");

    // Test case 4: Empty array
    int arr4[] = {};
    int size4 = 0;
    printf("Test case 4 (Empty array):\n");
    printf("Original array: ");
    print_array(arr4, size4);
    ft_rev_int_tab(arr4, size4);
    printf("Reversed array: ");
    print_array(arr4, size4);

    return 0;
}
*/
