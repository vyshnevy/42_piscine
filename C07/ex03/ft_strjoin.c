/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:48:47 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/27 17:11:49 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

int	ft_find_len(int size, char **strs, char *sep)
{
	int	sep_len;
	int	len;
	int	i;

	if (sep)
		sep_len = ft_strlen(sep);
	else
		sep_len = 0;
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size -1 && sep)
			len += sep_len;
		i++;
	}
	return (len);
}

char	*ft_concat_with_sep(int size, char **strs, char *sep, char *r)
{
	int		i;
	int		j;
	char	*origin;

	if (!strs || !r)
		return (NULL);
	origin = r;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*r++ = strs[i][j++];
		if (i < size - 1 && sep)
		{
			j = 0;
			while (sep[j])
				*r++ = sep[j++];
		}
		i++;
	}
	*r = '\0';
	return (origin);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*result;

	if (size == 0 || !strs)
	{
		result = malloc(sizeof(char));
		if (result)
			*result = '\0';
		return (result);
	}
	len = ft_find_len(size, strs, sep);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	return (ft_concat_with_sep(size, strs, sep, result));
}
/*
void print_and_free(char *result) {
    if (result) {
        printf("Result: \"%s\"\n", result);
        free(result);
    } else {
        printf("Result: NULL\n");
    }
}

int main() {
    char *result;

    // Test 1: Normal case
    char *strs1[] = {"Hello", "world", "test"};
    printf("Test 1: Normal case\n");
    result = ft_strjoin(3, strs1, ", ");
    print_and_free(result);

    // Test 2: Empty separator
    printf("\nTest 2: Empty separator\n");
    result = ft_strjoin(3, strs1, "");
    print_and_free(result);

    // Test 3: Single string
    char *strs2[] = {"SingleString"};
    printf("\nTest 3: Single string\n");
    result = ft_strjoin(1, strs2, ", ");
    print_and_free(result);

    // Test 4: Empty strings
    char *strs3[] = {"", "", ""};
    printf("\nTest 4: Empty strings\n");
    result = ft_strjoin(3, strs3, ", ");
    print_and_free(result);

    // Test 5: Zero size
    printf("\nTest 5: Zero size\n");
    result = ft_strjoin(0, NULL, ", ");
    print_and_free(result);

    // Test 6: NULL separator
    printf("\nTest 6: NULL separator (This might crash if not handled)\n");
    result = ft_strjoin(3, strs1, NULL);
    print_and_free(result);

    // Test 7: NULL strings array (This might crash if not handled)
    printf("\nTest 7: NULL strings array (This might crash if not handled)\n");
    result = ft_strjoin(3, NULL, ", ");
    print_and_free(result);

    return 0;
}
*/
