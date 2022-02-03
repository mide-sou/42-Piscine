/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:15:43 by mide-sou          #+#    #+#             */
/*   Updated: 2022/02/01 09:24:40 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	sz;

	sz = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			sz = 0;
			while (to_find[sz] && str[sz] == to_find[sz])
				sz++;
			if (to_find[sz] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	ptr[] = {"emumiguelsou"};
	char	enc[] = {"mi"};
	//char	*ret;

	//ret = strstr(ptr, enc);
	//printf("%s\n", ret);
	printf("%s\n", ft_strstr(ptr, enc));
	return (0);
}*/
