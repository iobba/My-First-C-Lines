/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:44:48 by iobba             #+#    #+#             */
/*   Updated: 2022/07/29 09:49:41 by iobba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i =0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] == ' ' ) || (argv[1][i] == '\t'))
				i++;
			if ((argv[1][i] != ' ') && (argv[1][i] != '\t'))
			{
				write (1, &argv[1][i], 1);
				if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\n' || argv[1][i + 1] == '\t')
					break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}