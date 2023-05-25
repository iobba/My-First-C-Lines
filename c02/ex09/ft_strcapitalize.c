/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:33:43 by iobba             #+#    #+#             */
/*   Updated: 2022/07/27 09:37:04 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (*str)
	{
		ft_lower(str);
	}
	while (str[i])
	{
		if ((i == 0 || str[i] == ' ')
			|| (str[i - 1] < 48)
			|| (str[i - 1] > 57 && str[i - 1] < 65)
			|| (str[i - 1] > 90 && str[i - 1] < 97)
			|| (str[i - 1] > 122))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
