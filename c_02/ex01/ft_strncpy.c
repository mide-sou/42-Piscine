/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:47:25 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/25 16:51:18 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	int	x;
	char	ft[] = {"123456789"};
	char	fim[] = {"abcd"};
	
	x = 3;
	ft_strncpy(fim, ft, x);
	printf("%s\n%s\n", fim, ft);
	//strncpy(fim, ft, x);
	//printf("%s\n%s\n", fim, ft);
	return (0);
}*/
