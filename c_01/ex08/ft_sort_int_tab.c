/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-sou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:58:46 by mide-sou          #+#    #+#             */
/*   Updated: 2022/01/22 10:39:26 by mide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	x;

	l = 0;
	while (l < size - 1)
	{
		if (tab[l] > tab[l + 1])
		{
			x = tab[l + 1];
			tab[l + 1] = tab[l];
			tab[l] = x;
			l = -1;
		}
	l++;
	}
}

/*void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}
int		main (void)
{
	int tab[] = {6, 7, 8, 9, 1, 5};
	int size;
	size = 6;
	printf("Original: ");
	putarr(tab, size);
	ft_sort_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
}*/
