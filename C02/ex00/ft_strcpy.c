/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:49:31 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/15 14:52:18 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*origin;

	origin = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin);
}
