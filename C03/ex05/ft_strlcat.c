/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <dvyshnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:11:36 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/22 20:08:28 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	//will append at most size - strlen(dst) - 1 bytes
	//NULL-terminating the result;
	//returns: initial size of dst + length of src;
	//if we reach size characters w/o NULL, we will stop there and not NULL-ter
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (dest_len + src_len);
	while (*dest)
	{
		dest++;
		size--;
	}
	while (size > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	if (size > 0)
		*dest = '\0';
	return (dest_len + src_len);
}
/*
int main() {
    char dest[10];
    char *src;
    size_t result;

    // Test 1: Normal case
    strcpy(dest, "1337 42");
    src = "Born to code";
    printf("Test 1:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest, src);
    result = ft_strlcat(dest, src, sizeof(dest));
    printf("After:  dest = \"%s\"\n", dest);
    printf("Result: %zu\n\n", result);

    // Test 2: Dest buffer full
    strcpy(dest, "");
    src = "hello";
    printf("Test 2:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest, src);
    result = ft_strlcat(dest, src, sizeof(dest));
    printf("After:  dest = \"%s\"\n", dest);
    printf("Result: %zu\n\n", result);

    // Test 3: Empty dest
    dest[0] = '\0';
    src = "Empty dest";
    printf("Test 3:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest, src);
    result = ft_strlcat(dest, src, sizeof(dest));
    printf("After:  dest = \"%s\"\n", dest);
    printf("Result: %zu\n\n", result);

    // Test 4: Empty src
    strcpy(dest, "test");
    src = "test";
    printf("Test 4:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest, src);
    result = ft_strlcat(dest, src, sizeof(dest));
    printf("After:  dest = \"%s\"\n", dest);
    printf("Result: %zu\n\n", result);

    // Test 5: Size smaller than dest length
    strcpy(dest, "Truncatio");
    src = " test";
    printf("Test 5:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest, src);
    result = ft_strlcat(dest, src, 8);
    printf("After:  dest = \"%s\"\n", dest);
    printf("Result: %zu\n", result);

    return 0;
}
*/
