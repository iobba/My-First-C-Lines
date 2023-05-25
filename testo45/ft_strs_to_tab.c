/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:19:50 by iobba             #+#    #+#             */
/*   Updated: 2022/08/09 20:43:07 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "./ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *src)
{
	int		i;
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*anser;
	int			i;

	anser = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!anser)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		anser[i].size = ft_strlen(av[i]);
		anser[i].str = av[i];
		anser[i].copy = ft_strcpy(av[i]);
		i++;
	}
	anser[i].str = 0;
	return (anser);
}
