/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:13:19 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/25 17:27:57 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}

/*int	main(void)	
{
	char	fim[] = {"31cdef"};
	char	ft[] = {"123aa4567"};
	unsigned int	sz = 5;
	
	ft_strlcpy(fim, ft, sz);
	//strlcpy(fim, ft, sz);
	printf("%s\n", fim);
	printf("%s\n", ft);
	return (0);
}*/
