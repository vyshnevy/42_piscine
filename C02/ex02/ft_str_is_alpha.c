/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvyshnev <dvyshnev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:56:23 by dvyshnev          #+#    #+#             */
/*   Updated: 2024/07/22 18:15:38 by dvyshnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (! (*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main ()
 {
    printf("%d",ft_str_is_alpha("asdfa"));
     return 0;
 }
*/
