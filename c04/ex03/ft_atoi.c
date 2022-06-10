/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 03:07:02 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/31 15:51:24 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	symbol;

	num = 0;
	i = 0;
	symbol = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			symbol *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * symbol);
}
/*
int	main(void)
{
	char a[] = "   	---+--+17755433ab567";
	char b[] = "   	   --+--+1359avvb666567";
	int num_a = 0;
	int num_b = 0;

	num_a = ft_atoi(a);
	num_b = ft_atoi(b);
	printf("NUM - : %d\n", num_a);
	printf("NUM + : %d\n", num_b);

}
*/
