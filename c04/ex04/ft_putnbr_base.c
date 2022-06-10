/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 04:19:15 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/31 10:35:28 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 45 || str[i] == 43 || str[i] == 127)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long			num;
	int				size_base;
	int				i;

	i = 0;
	num = nbr;
	size_base = ft_strlen(base);
	if (size_base > 1 && check_base(base) > 0)
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num *= -1;
		}
		if (num >= size_base)
		{	
			ft_putnbr_base((num / size_base), base);
			ft_putnbr_base((num % size_base), base);
		}
		else if (num < size_base)
			write(1, &base[num % size_base], 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(20, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-203874, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(7364, "poniguay");
	write(1, "\n", 1);
	ft_putnbr_base(27836724, "01");
	write(1, "\n", 1);
	ft_putnbr_base(834, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(2783, "");
}
*/
