/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:25:39 by iobba             #+#    #+#             */
/*   Updated: 2022/08/01 13:21:58 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
