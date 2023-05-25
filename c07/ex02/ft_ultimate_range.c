/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:12:46 by iobba             #+#    #+#             */
/*   Updated: 2022/08/02 20:52:32 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	temp;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	temp = min;
	while (i < (max - temp))
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!ft_range(min, max))
		return (-1);
	return (max - min);
}
