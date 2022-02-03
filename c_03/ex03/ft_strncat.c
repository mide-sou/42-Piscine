/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:27:58 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/26 16:17:36 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	fim[50] = {"hello"};
	char	ft[] = {"holla"};
	unsigned int	sz;

	sz = 3;
	strncat(fim, ft, sz);
	printf("%s\n", fim);
	//ft_strncat(fim, ft, sz);
	//printf("%s\n", fim);
	return (0);
}*/
