/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 08:39:32 by iobba             #+#    #+#             */
/*   Updated: 2022/08/06 09:59:33 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_len(int size, char **strs, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		total_len += sep_len;
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*into_strrr(int size, char **strs, char *sep, char *strrr)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
			strrr[k++] = strs[i][j++];
		j = 0;
		while (sep[j])
		{
			if (i + 1 == size)
			{
				strrr[k] = '\0';
				return (strrr);
			}
			strrr[k++] = sep[j++];
		}
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		sep_len;
	char	*strrr;

	if (size == 0)
		return (malloc(sizeof(char)));
	sep_len = ft_strlen(sep);
	total_len = ft_total_len(size, strs, sep_len);
	strrr = malloc(sizeof(char) * total_len);
	return (into_strrr(size, strs, sep, strrr));
}
