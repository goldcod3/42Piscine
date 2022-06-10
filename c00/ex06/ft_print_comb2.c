/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:42:23 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/19 17:17:42 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	put_number(int num)
{
	ft_putchar(48 + (num / 10));
	ft_putchar(48 + (num % 10));
}	

void	ft_print_comb2(void)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (c1 <= 99)
	{	
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			put_number(c1);
			ft_putchar(' ');
			put_number(c2);
			if (c1 == 98 && c2 == 99)
			{
				break ;
			}	
			ft_putchar(',');
			ft_putchar(' ');
			c2++;
		}	
		c1++;
	}	
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
