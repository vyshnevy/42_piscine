/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <dvyshnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:51:41 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/20 17:40:16 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 4

char	*int_to_string(int num)
{
	static char	str[12]; // Enough space for an integer with '\0';
	char	*ptr = str + 11; // Start from the end
	int	is_negative = 0;

	*ptr = '\0'; // Null-terminate the string

	if (num == 0)
	{
		*--ptr = '0';
		return (ptr);
	}
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num > 0)
	{
		*--ptr = (num % 10) + '0'; // We will receive a number between 0-9 and we add it to '0' to receive a number in ASCII
		num /= 10;
	}
	if (is_negative)
	{
		*--ptr = '-';
	}
	return (ptr);
}

// String must be properly null-terminated for this to work
int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	output_3d_array(int array[N][N][N])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < N)
	{	
		j = 0;
		while (j < N)
		{
			k = 0;
			while (k < N)
				{	
					char	*temp;
					temp = int_to_string(array[i][j][k]);
					write(1, temp, ft_strlen(temp));
					k++;
				}
				write(1, " ", 1);
				j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
/*
int main()
{
    int test_array[4][4][4] = {
        {{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}},
        
        {{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}},
        
        {{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}},

		{{1, 2, 3, 4},
         {1, 2, 3, 4},
         {1, 2, 3, 4},
		 {1, 2, 3, 4}}
    };

    output_3d_array(test_array);

    return 0;
}
*/
