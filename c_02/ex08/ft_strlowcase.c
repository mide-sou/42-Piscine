/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:09:03 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/24 14:07:09 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
			str[c] = str[c] + 32;
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char	ptr[] = {"abDfG"};

	printf("%s\n", ft_strlowcase(ptr));
	return (0);
}*/
