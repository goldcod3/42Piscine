/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:54:50 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/25 09:44:19 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char a[] = "";
	int i = 0;

	i = ft_str_is_printable(a);
	printf("Result: %d\n", i); 
}
*/
