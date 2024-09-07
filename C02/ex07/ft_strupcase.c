/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:43:09 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/15 17:13:15 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*original;

	original = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (original);
}
/*
int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "abcDEF123";
    char str3[] = "ALL CAPS ALREADY";
    char str4[] = "";

    printf("Original: %s\n", str1);
    printf("Uppercase: %s\n\n", ft_strupcase(str1));

    printf("Original: %s\n", str2);
    printf("Uppercase: %s\n\n", ft_strupcase(str2));

    printf("Original: %s\n", str3);
    printf("Uppercase: %s\n\n", ft_strupcase(str3));

    printf("Original: %s\n", str4);
    printf("Uppercase: %s\n", ft_strupcase(str4));

    return 0;
}
*/
