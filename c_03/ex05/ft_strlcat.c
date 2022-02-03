/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:17:36 by mide-sou          #+#    #+#             */
/*   Updated: 2022/02/01 09:27:47 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sz;
	unsigned int	d;

	sz = 0;
	while (dest[sz])
	{
		sz++;
	}
	d = 0;
	while (src[d] && d + sz < size)
	{
		dest[sz + d] = src[d];
		d++;
	}
}

/*int	main(void)
{
	char	fim[] = {"ola eu"};
	char	ft[] = {"o miguel"};
	unsigned int	tam = 15;

	strlcat(fim, ft, tam);
	printf("%s\n", fim);
	return (0);
}*/
