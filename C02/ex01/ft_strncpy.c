/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:53:10 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/16 18:29:24 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*origin;

	origin = dest;
	while (*src && n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (origin);
}
/*
int main ()
{
char x[8] = "sadfglj";
char y[3] = "ab";
int n = 5;
printf("%s",ft_strncpy(x,y, n));
return 0;
}
*/
