/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:15:58 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/21 11:33:27 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 'A' || str[c] > 'Z')
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char	ptr[] = {"A1C"};

	printf("%d\n", ft_str_is_uppercase(ptr));
	return (0);
}*/
