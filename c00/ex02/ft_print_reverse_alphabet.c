/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:49:14 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/17 20:57:39 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		let;
	char	c;

	c = 'z';
	let = 26;
	while (let > 0)
	{
		write(1, &c, 1);
		let--;
		c--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
