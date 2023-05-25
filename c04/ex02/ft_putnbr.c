/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:21:51 by iobba             #+#    #+#             */
/*   Updated: 2022/07/30 18:38:26 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
}
