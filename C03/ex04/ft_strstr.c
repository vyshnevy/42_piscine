/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <dvyshnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:40:46 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/22 20:10:47 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == 0)
	{
		return (str);
	}
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main()
{
    char str1[] = "Hello, World!";
    char str2[] = "This is a test string";
    char str3[] = "";

    // Test case 1: Normal case
    printf("Test 1: '%s' in '%s'\n", "World", str1);
    printf("Result: %s\n\n", ft_strstr(str1, "World"));

    // Test case 2: Substring at the beginning
    printf("Test 2: '%s' in '%s'\n", "Hello", str1);
    printf("Result: %s\n\n", ft_strstr(str1, "Hello"));

    // Test case 3: Substring not in the string
    printf("Test 3: '%s' in '%s'\n", "OpenAI", str1);
    printf("Result: %s\n\n", ft_strstr(str1, "OpenAI"));

    // Test case 4: Empty substring
    printf("Test 4: '' in '%s'\n", str1);
    printf("Result: %s\n\n", ft_strstr(str1, ""));

    // Test case 5: Substring longer than main string
    printf("Test 5: '%s' in '%s'\n", "Hello, World! And more", str1);
    printf("Result: %s\n\n", ft_strstr(str1, "Hello, World! And more"));

    // Test case 6: Multiple occurrences
    printf("Test 6: '%s' in '%s'\n", "is", str2);
    printf("Result: %s\n\n", ft_strstr(str2, "is"));

    // Test case 7: Empty main string
    printf("Test 7: '%s' in '%s'\n", "test", str3);
    printf("Result: %s\n\n", ft_strstr(str3, "test"));

    return 0;
}
*/
