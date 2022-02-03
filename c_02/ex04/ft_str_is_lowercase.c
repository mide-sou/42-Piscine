/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:03:33 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/24 13:55:16 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 'a' || str [c] > 'z')
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char	ptr[] = {"azc"};
	
	printf("%d\n", ft_str_is_lowercase(ptr));
	return (0);
}*/
