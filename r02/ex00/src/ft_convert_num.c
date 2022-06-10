/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:09:02 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/06/01 12:27:23 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	if (nb == 2147483647)
	{
		ft_putchar('2');
		ft_putnbr(147483647);
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}	
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0');
}

void	ft_puterror_dict(void)
{
	ft_putstr("Dict Error\n");
}

void	ft_print_dic(char *dic)
{
	int	i;
	int	init;

	i = 0;
	init = 0;
	while (dic[i] != '\0')
	{
		if (dic[i] == '\n')
			init = i + 1;
		if (dic[i] == ':')
		{
			write(1, &dic[init], i - init);
			write(1, "\n", 1);
		}
		i++;
	}	
}

void	ft_convert_num(int num)
{
	int		file;
	char	buf[1024];
	ssize_t	size_dict;

	file = open("./numbers.dict", O_RDONLY);
	if (file == -1)
		ft_puterror_dict();
	else
	{
		size_dict = read(file, buf, 1024);
		if (size_dict == 0)
			ft_puterror_dict();
		else
		{
			ft_print_dic(buf);
			write(1, "\n", 1);
			ft_putnbr(num);
		}
	}	
	close(file);
}
