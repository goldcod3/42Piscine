/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdiaz-fe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:12:33 by bdiaz-fe          #+#    #+#             */
/*   Updated: 2022/05/15 21:15:11 by ccalvo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char l);

void	rush(int x, int y)
{
	int	c;
	int	f;

	f = 1;
	while (f <= y && x >= 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && f == 1) || (c == x && c != 1 && f == y && f != 1))
				ft_putchar('A');
			else if ((c == 1 && f == y) || (c == x && f == 1))
				ft_putchar('C');
			else if ((c == 1) || (c == x) || (f == 1) || (f == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
