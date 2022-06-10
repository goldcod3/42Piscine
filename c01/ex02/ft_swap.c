/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:25:51 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/20 14:34:43 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
/*
int	main(void)
{
	int x = 155;
	int y = 544;

	printf("Valor de x: %d\n", x);
	printf("valor de y: %d\n", y);
	ft_swap(&x, &y);
	printf("Valor de x: %d\n", x);
	printf("Valor de y: %d\n", y);
	return 0;
}
*/
