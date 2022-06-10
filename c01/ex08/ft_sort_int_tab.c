/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:16:07 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/22 22:40:30 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{		
			if (*(tab + i) > *(tab + j))
			{	
				tmp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = tmp;
			}
			j++;
		}
		i++;
	}	
}
/*
int	main(void)
{
	int arr[9] = {1, 5, 3, 7, 15, 8, 2, 3, 9};
	int i = 0;

	ft_sort_int_tab(arr, 9);

	while (i < 9) {
		printf("%d\n", *(arr + i));
		i++;
	}	

}
*/
