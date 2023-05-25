/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:50:56 by iobba             #+#    #+#             */
/*   Updated: 2022/07/27 13:45:33 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexam;
	int		i;

	i = 0;
	hexam = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			ft_putchar(str[i]);
		}
		else
		{
			write(1, "\\", 1);
			ft_putchar(hexam[str[i] / 16]);
			ft_putchar(hexam[str[i] % 16]);
		}
		i++;
	}
}
