/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:02:45 by mide-sou          #+#    #+#             */
/*   Updated: 2022/02/03 10:21:35 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *sr1, char *sr2)
{
	int	i;

	i = 0;
	while (sr1[i] != '\0' || sr2[i] != '\0')
	{
		if (sr1[i] == sr2[i])
		{
			i++;
		}
		if (sr1[i] > sr2[i] || sr1[i] < sr2[i])
		{
			return (sr1[i] - sr2[i]);
		}
	}
	return (0);
}

char	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (*str);
}

void	ft_swap(char **sr1, char **sr2)
{
	char	*ptr;

	ptr = *sr1;
	*sr1 = *sr2;
	*sr2 = ptr;
}

int	main(int ac, char **agv)
{
	int	c;
	int	i;

	c = 1;
	while (c < (ac - 1))
	{
		i = 1;
		while (i < (ac -1))
		{
			if (ft_strcmp(agv[i], agv[i + 1]) > 0)
			{
				ft_swap(&agv[i], &agv[i + 1]);
			}
			i++;
		}
		c++;
	}
	c = 1;
	while (c < ac)
	{
		ft_putstr(agv[c]);
		write(1, "\n", 1);
		c++;
	}
}
