/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:47:41 by iobba             #+#    #+#             */
/*   Updated: 2022/07/31 20:54:47 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	pnb;

	i = 1;
	pnb = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		pnb *= nb;
		i++;
	}
	return (pnb);
}
