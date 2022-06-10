/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:12:47 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/22 06:16:33 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < (size / 2))
	{		
		c = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = c;
		i++;
	}
	return (tab);
}
/*
int	 main(void)
{
	int s;
	s = 12;
	int cha[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int *t = 0;
	t = ft_rev_int_tab(cha, s);

	int i = 0;
	while (i < s)
	{
		printf("%d\n",*(t + i));
		i++;
	}	

}
*/
