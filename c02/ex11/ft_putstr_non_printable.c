/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:57:40 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/28 19:49:12 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	int	i;

	i = 0;
	if (c >= 32 && c <= 126)
		i = 1;
	return (i);
}

void	ft_char_to_hex(char s)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[s / 16]);
	ft_putchar("0123456789abcdef"[s % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
			ft_char_to_hex(str[i]);
		i++;
	}	
}
/*
int	main(void)
{
	char str[] = "123an	nnbcm\n arvin the8 bot9, atheb shipc isd ina danger";
	ft_putstr_non_printable(str);

}
*/
