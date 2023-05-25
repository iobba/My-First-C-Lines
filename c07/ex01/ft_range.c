/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:14:32 by iobba             #+#    #+#             */
/*   Updated: 2022/08/02 16:41:44 by iobba            ###   ########.fr       */
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
