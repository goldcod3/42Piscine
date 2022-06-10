/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 23:20:51 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/29 23:21:11 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_puterror();
	}
	else if (argc == 2)
	{
		if (ft_verify_num(argv[1]))
			ft_convert_num(ft_verify_num(argv[1]));
		else
			ft_puterror();
	}
	else
	{
		ft_puterror();
	}
	return (0);
}	
