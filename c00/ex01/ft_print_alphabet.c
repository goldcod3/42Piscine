/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:48:57 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/17 20:54:39 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	int		let;
	char	c;

	c = 'a';
	let = 0;
	while (let < 26)
	{
		write(1, &c, 1);
		let++;
		c++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
	return 0;
}
*/
