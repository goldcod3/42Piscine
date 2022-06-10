/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:36:50 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/20 14:50:37 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}	
/*
int	main(void)
{
	int x = 8;
	int y = 2;
	int divi = 0;
	int modu = 0;
	ft_div_mod(x, y, &divi, &modu);
	printf("Valor de x: %d\n", x);
	printf("Valor de y: %d\n", y);
	printf("Valor de *div: %d\n", divi);
	printf("Valor de *mod: %d\n", modu);
}
*/
