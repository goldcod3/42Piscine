/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:36:26 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/06/01 14:33:20 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	num;
	long	i;

	num = nb;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	i = 2;
	if (num > 1)
	{
		while (i * i <= num)
		{
			if (i * i == num)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}	
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(16));
}
*/
