/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:47:52 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/25 09:31:32 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			result = 1;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result = 1;
		else
		{
			result = 0;
			break ;
		}
		i++;
	}
	if (str[0] == '\0')
		result = 1;
	return (result);
}	
/*
int	main(void)
{
	char src[] = "tetetebsk777.a";
	int i = 0;

	i = ft_str_is_alpha(src);
	printf("Result: %d\n", i);

	return (0);
}
*/
