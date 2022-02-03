/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:40:09 by mide-sou          #+#    #+#             */
/*   Updated: 2022/02/03 14:40:00 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *string)
{
	int	c;

	c = 0;
	while (string[c])
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		c;
	int		len;

	len = ft_strlen(src);
	ptr = malloc(sizeof(char) * len);
	c = 0;
	while (src[c])
	{
		ptr[c] = src[c];
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	name[] = "miguel";
	
	printf("%s\n", ft_strdup(name));
}*/
