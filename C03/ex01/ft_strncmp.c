/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <dvyshnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:39:03 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/22 20:09:30 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n > 1 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
