/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:36:21 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/25 16:52:48 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{	
		if ((str[c] < 'A' || str[c] > 'Z') && (str[c] < 'a' || str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char	a[] = {"acd"};
	char	*ptr;

	ptr = a;
	printf("%d\n", ft_str_is_alpha(ptr));
	return (0);
}*/
