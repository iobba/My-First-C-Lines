/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:21:41 by iobba             #+#    #+#             */
/*   Updated: 2022/08/05 09:57:22 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int res = 0;
	int sign = 1;
	while (str[i] < 48 && (str[i] != '-' && str[i] != '+'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
		{
			i++;
			break;
		}
		else if (str[i + 1] < '0' || str[i + 1] > '9') 
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return (sign * res);
}
#include <stdio.h>

int main()
{
	const char	str[255] = "    -678--+--8775546";
	printf("%d",ft_atoi(str));
}
